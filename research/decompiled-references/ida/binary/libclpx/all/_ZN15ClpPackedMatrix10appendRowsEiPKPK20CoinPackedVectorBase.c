__int64 __fastcall ClpPackedMatrix::appendRows(CoinPackedMatrix **this, int a2, const CoinPackedVectorBase *const *a3)
{
  __int64 v3; // rax
  int v4; // edx
  unsigned int v5; // edx

  CoinPackedMatrix::appendRows(*(this + 11), a2, a3);
  v3 = (__int64)*(this + 11);
  v4 = *(_DWORD *)(v3 + 64);
  if ( !*(_BYTE *)(v3 + 8) )
    v4 = *(_DWORD *)(v3 + 68);
  *((_DWORD *)this + 24) = v4;
  v5 = *((_DWORD *)this + 25) & 0xFFFFFFFD;
  if ( *(_DWORD *)(v3 + 72) < *(_DWORD *)(*(_QWORD *)(v3 + 48) + 4LL * *(int *)(v3 + 64)) )
    v5 = *((_DWORD *)this + 25) | 2;
  *((_DWORD *)this + 25) = v5;
  return ClpPackedMatrix::clearCopies((ClpPackedMatrix *)this);
}

