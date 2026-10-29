void __fastcall CoinFactorization::zeroTolerance(CoinFactorization *this, double a2)
{
  if ( a2 > 0.0 && a2 < 1.0 )
    *((double *)this + 1) = a2;
}

