// Alternative name is '_ZN22CoinDenseFactorizationC1ERKS_'
void __fastcall CoinDenseFactorization::CoinDenseFactorization(
        CoinDenseFactorization *this,
        const CoinDenseFactorization *a2)
{
  CoinOtherFactorization::CoinOtherFactorization(this, a2);
  *(_QWORD *)this = off_4D13E0;
  CoinDenseFactorization::gutsOfInitialize(this);
  CoinDenseFactorization::gutsOfCopy(this, a2);
}

