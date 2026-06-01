__m128 __fastcall CoinPackedVectorBase::twoNorm(CoinPackedVectorBase *this, double a2, __m128 a3)
{
  CoinPackedVectorBase::normSquare(this);
  *(double *)a3.m128_u64 = sqrt(a2);
  if ( a2 < 0.0 )
  {
    sqrt(a2);
    return (__m128)a3.m128_u64[0];
  }
  return a3;
}

