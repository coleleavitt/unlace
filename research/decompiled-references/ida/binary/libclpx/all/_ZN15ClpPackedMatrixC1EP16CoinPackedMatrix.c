// Alternative name is '_ZN15ClpPackedMatrixC2EP16CoinPackedMatrix'
void __fastcall ClpPackedMatrix::ClpPackedMatrix(ClpPackedMatrix *this, CoinPackedMatrix *a2)
{
  __int64 v2; // rdx
  bool v3; // zf
  int v4; // eax

  ClpMatrixBase::ClpMatrixBase(this);
  v2 = *((int *)a2 + 16);
  *((_QWORD *)this + 11) = a2;
  *(_QWORD *)this = off_4D0C20;
  v3 = *((_BYTE *)a2 + 8) == 0;
  *((_DWORD *)this + 25) = 2 * (*((_DWORD *)a2 + 18) < *(_DWORD *)(*((_QWORD *)a2 + 6) + 4 * v2));
  v4 = *((_DWORD *)a2 + 16);
  if ( v3 )
    v4 = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 24) = v4;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_DWORD *)this + 13) = 1;
}

