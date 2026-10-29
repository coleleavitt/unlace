__int64 __fastcall ClpPackedMatrix::copy(CoinPackedMatrix **this, const CoinPackedMatrix **a2)
{
  return CoinPackedMatrix::copyReuseArrays(*(this + 11), a2[11]);
}

