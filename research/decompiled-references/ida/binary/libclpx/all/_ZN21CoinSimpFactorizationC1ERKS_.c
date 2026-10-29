// Alternative name is '_ZN21CoinSimpFactorizationC2ERKS_'
void __fastcall CoinSimpFactorization::CoinSimpFactorization(
        CoinSimpFactorization *this,
        const CoinSimpFactorization *a2)
{
  CoinOtherFactorization::CoinOtherFactorization(this, a2);
  *(_QWORD *)this = off_4D2208;
  CoinSimpFactorization::gutsOfInitialize(this);
  CoinSimpFactorization::gutsOfCopy(this, a2);
}

