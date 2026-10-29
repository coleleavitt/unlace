void __fastcall CoinOtherFactorization::pivotTolerance(CoinOtherFactorization *this, double a2)
{
  if ( a2 > 0.0 && a2 <= 1.0 )
    *((double *)this + 1) = a2;
}

