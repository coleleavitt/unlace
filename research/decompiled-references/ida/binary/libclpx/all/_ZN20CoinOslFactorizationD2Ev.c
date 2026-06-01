// Alternative name is '_ZN20CoinOslFactorizationD1Ev'
void __fastcall CoinOslFactorization::~CoinOslFactorization(CoinOslFactorization *this)
{
  *(_QWORD *)this = off_4D1960;
  CoinOslFactorization::gutsOfDestructor(this, 1);
  CoinOtherFactorization::~CoinOtherFactorization(this);
}

