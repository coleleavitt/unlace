__int64 __fastcall CoinPackedMatrix::appendRow(CoinPackedMatrix *this, const CoinPackedVectorBase *a2)
{
  if ( *((_BYTE *)this + 8) )
    return CoinPackedMatrix::appendMinorVector(this, a2);
  else
    return CoinPackedMatrix::appendMajorVector(this, a2);
}

