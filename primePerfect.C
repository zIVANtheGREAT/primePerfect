#include <iostream>
#include <cmath>

using namespace std;

//Function prototypes
bool primeNum(int a);
bool perfectNum(int a);

 int main()
{
	 int num;

	 num = 0;
	 
	 cout << "Enter a positive integer or anything less than 1 to end" << endl;
	 cin >> num;
	 _delay_ms
	 

	 while (num > 0)
	 {
		 if (primeNum(num))
			 if (perfectNum(num))
				 cout << "Number is both Prime and Perfect" << endl;
			 else
				 cout << "Number is Prime" << endl;
		 else if (perfectNum(num))
			 cout << "Number is Perfect" << endl;
		 else
			 cout << "Number is neither prime nor perfect" << endl;	
		 cin >> num;
	 }
}

 //Function Definition
 bool primeNum(int a)
 {
	 if (a <= 1)
		 return false;
	 else if (a <= 3)
		 return true;
	 else if (a % 2 == 0 || a % 3 == 0)
		 return false;
	 else for (int i = 5; i * i <= a; i += 6)
	 {
		 if (a % i == 0 || a % (i + 2) == 0)
			 return false;
	 }
	 return true;
 }

 bool perfectNum(int a)
 {
	 int sum = 0;

	 for (int i = 1; i < a; ++i)
	 {
		 if (a % i == 0)
			 sum += i;
	 }

	 if (sum == a)
		 return true;
	 else
		 return false;
 }

