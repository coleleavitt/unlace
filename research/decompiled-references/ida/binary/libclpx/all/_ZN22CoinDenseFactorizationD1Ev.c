// Alternative name is '_ZN22CoinDenseFactorizationD2Ev'
void __fastcall CoinDenseFactorization::~CoinDenseFactorization(CoinDenseFactorization *this)
{
  *(_QWORD *)this = off_4D13E0;
  CoinDenseFactorization::gutsOfDestructor(this);
  CoinOtherFactorization::~CoinOtherFactorization(this);
}

