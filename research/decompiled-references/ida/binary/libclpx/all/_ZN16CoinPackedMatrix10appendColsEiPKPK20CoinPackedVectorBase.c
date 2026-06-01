__int64 __fastcall CoinPackedMatrix::appendCols(CoinPackedMatrix *this, int a2, const CoinPackedVectorBase *const *a3)
{
  if ( *((_BYTE *)this + 8) )
    return CoinPackedMatrix::appendMajorVectors(this, a2, a3);
  else
    return CoinPackedMatrix::appendMinorVectors(this, a2, a3);
}

