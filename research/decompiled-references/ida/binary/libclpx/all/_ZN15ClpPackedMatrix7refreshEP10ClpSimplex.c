__int64 __fastcall ClpPackedMatrix::refresh(ClpPackedMatrix *this, ClpSimplex *a2)
{
  __int64 v2; // rax
  int v3; // edx
  unsigned int v4; // edx

  v2 = *((_QWORD *)this + 11);
  v3 = *(_DWORD *)(v2 + 64);
  if ( !*(_BYTE *)(v2 + 8) )
    v3 = *(_DWORD *)(v2 + 68);
  *((_DWORD *)this + 24) = v3;
  v4 = *((_DWORD *)this + 25) & 0xFFFFFFFD;
  if ( *(_DWORD *)(v2 + 72) < *(_DWORD *)(*(_QWORD *)(v2 + 48) + 4LL * *(int *)(v2 + 64)) )
    v4 = *((_DWORD *)this + 25) | 2;
  *((_DWORD *)this + 25) = v4;
  return 0;
}

