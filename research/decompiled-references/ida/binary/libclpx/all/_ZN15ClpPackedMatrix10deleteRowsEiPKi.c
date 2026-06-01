__int64 __fastcall ClpPackedMatrix::deleteRows(ClpPackedMatrix *this, int a2, const int *a3)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // eax

  v4 = *((_QWORD *)this + 11);
  v5 = *(_DWORD *)(v4 + 64);
  if ( *(_BYTE *)(v4 + 8) )
    v5 = *(_DWORD *)(v4 + 68);
  if ( v5 )
    CoinPackedMatrix::deleteRows((CoinPackedMatrix *)v4, a2, a3);
  ClpPackedMatrix::clearCopies(this);
  v6 = *((_QWORD *)this + 11);
  v7 = *(_DWORD *)(v6 + 64);
  if ( !*(_BYTE *)(v6 + 8) )
    v7 = *(_DWORD *)(v6 + 68);
  *((_DWORD *)this + 24) = v7;
  v8 = *((_DWORD *)this + 25) & 0xFFFFFFFD;
  if ( *(_DWORD *)(v6 + 72) < *(_DWORD *)(*(_QWORD *)(v6 + 48) + 4LL * *(int *)(v6 + 64)) )
    v8 = *((_DWORD *)this + 25) | 2;
  *((_DWORD *)this + 25) = v8;
  return CoinPackedMatrix::setExtraGap((CoinPackedMatrix *)v6, 0.0);
}

