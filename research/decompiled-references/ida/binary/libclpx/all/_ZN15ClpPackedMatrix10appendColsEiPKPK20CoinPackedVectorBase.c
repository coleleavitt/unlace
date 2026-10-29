__int64 __fastcall ClpPackedMatrix::appendCols(CoinPackedMatrix **this, int a2, const CoinPackedVectorBase *const *a3)
{
  __int64 v3; // rax
  int v4; // edx

  CoinPackedMatrix::appendCols(*(this + 11), a2, a3);
  v3 = (__int64)*(this + 11);
  v4 = *(_DWORD *)(v3 + 64);
  if ( !*(_BYTE *)(v3 + 8) )
    v4 = *(_DWORD *)(v3 + 68);
  *((_DWORD *)this + 24) = v4;
  return ClpPackedMatrix::clearCopies((ClpPackedMatrix *)this);
}

