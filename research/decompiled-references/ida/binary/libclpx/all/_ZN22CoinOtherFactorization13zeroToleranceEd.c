void __fastcall CoinOtherFactorization::zeroTolerance(CoinOtherFactorization *this, double a2)
{
  if ( a2 > 0.0 && a2 < 1.0 )
    *((double *)this + 2) = a2;
}

