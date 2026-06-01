__int64 __fastcall CoinPackedMatrix::appendCol(CoinPackedMatrix *this, const CoinPackedVectorBase *a2)
{
  if ( *((_BYTE *)this + 8) )
    return CoinPackedMatrix::appendMajorVector(this, a2);
  else
    return CoinPackedMatrix::appendMinorVector(this, a2);
}

