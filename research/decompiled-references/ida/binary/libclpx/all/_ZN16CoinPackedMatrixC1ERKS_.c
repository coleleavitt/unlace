// Alternative name is '_ZN16CoinPackedMatrixC2ERKS_'
void __fastcall CoinPackedMatrix::CoinPackedMatrix(CoinPackedMatrix *this, const CoinPackedMatrix *a2)
{
  __int64 v3; // rdx
  const int *v4; // r10
  int v5; // r8d
  double v6; // xmm0_8
  const int *v7; // r9
  const double *v8; // r11
  bool v9; // cc
  int v10; // ecx
  int v11; // edx
  char v12; // si

  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)this = off_4D1A60;
  v3 = *((int *)a2 + 16);
  v4 = *((const int **)a2 + 6);
  v5 = *((_DWORD *)a2 + 18);
  *((_QWORD *)this + 2) = 0;
  *((_BYTE *)this + 8) = 1;
  v6 = *((double *)a2 + 3);
  v7 = *((const int **)a2 + 5);
  v8 = *((const double **)a2 + 4);
  v9 = v5 < v4[v3];
  v10 = v3;
  v11 = *((_DWORD *)a2 + 17);
  v12 = *((_BYTE *)a2 + 8);
  if ( !v9 && v6 == 0.0 )
    CoinPackedMatrix::gutsOfCopyOfNoGaps(this, v12, v11, v10, v8, v7, v4);
  else
    CoinPackedMatrix::gutsOfCopyOf(
      this,
      v12,
      v11,
      v10,
      v5,
      v8,
      v6,
      *((double *)a2 + 2),
      v7,
      v4,
      *((const int **)a2 + 7));
}

