// Alternative name is '_ZN15ClpPackedMatrixC1ERKS_iPKiiS3_'
void __fastcall ClpPackedMatrix::ClpPackedMatrix(
        ClpPackedMatrix *this,
        const CoinPackedMatrix **a2,
        int a3,
        const int *a4,
        int a5,
        const int *a6)
{
  __int64 v9; // rbp
  bool v10; // zf
  int v11; // eax
  int v12; // eax

  ClpMatrixBase::ClpMatrixBase(this, (const ClpMatrixBase *)a2);
  *(_QWORD *)this = off_4D0C20;
  v9 = operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v9, a2[11], a3, a4, a5, a6);
  v10 = *(_BYTE *)(v9 + 8) == 0;
  *((_QWORD *)this + 11) = v9;
  v11 = *(_DWORD *)(v9 + 64);
  if ( v10 )
    v11 = *(_DWORD *)(v9 + 68);
  *((_DWORD *)this + 24) = v11;
  v12 = *((_DWORD *)a2 + 25);
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_DWORD *)this + 25) = v12 & 0xFFFFFFFD;
}

