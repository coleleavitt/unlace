// Alternative name is '_ZN20CoinOslFactorizationC2ERKS_'
void __fastcall CoinOslFactorization::CoinOslFactorization(CoinOslFactorization *this, const CoinOslFactorization *a2)
{
  CoinOtherFactorization::CoinOtherFactorization(this, a2);
  *(_QWORD *)this = off_4D1960;
  CoinOslFactorization::gutsOfInitialize(this, 1);
  CoinOslFactorization::gutsOfCopy(this, a2);
}

