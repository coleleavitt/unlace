void __fastcall ClpDualRowDantzig::updatePrimalSolution(
        ClpDualRowDantzig *this,
        CoinIndexedVector *a2,
        double a3,
        double *a4)
{
  _QWORD *v4; // rdi
  __int64 v5; // r8
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // r11
  double v9; // xmm1_8
  __int64 v10; // rax
  __int64 v11; // rbx
  double v12; // xmm2_8
  __int64 v13; // r10
  double *v14; // r9
  double v15; // xmm3_8
  double v16; // xmm2_8
  double v17; // xmm1_8
  int *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r10
  double *v22; // rcx
  double *v23; // r9
  double v24; // xmm2_8
  double v25; // xmm3_8
  double v26; // xmm2_8

  v4 = *((_QWORD **)this + 1);
  v5 = *((_QWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 4);
  v7 = *(_QWORD *)a2;
  v8 = v4[157];
  if ( *((_BYTE *)a2 + 28) )
  {
    if ( v6 > 0 )
    {
      v9 = 0.0;
      v10 = 0;
      v11 = (unsigned int)(v6 - 1) + 1LL;
      do
      {
        v12 = *(double *)(v5 + 8 * v10) * a3;
        v13 = *(int *)(v8 + 4LL * *(int *)(v7 + 4 * v10));
        v14 = (double *)(v4[150] + 8 * v13);
        v15 = *v14 - v12;
        v16 = v12 * *(double *)(v4[129] + 8 * v13);
        *v14 = v15;
        *(_QWORD *)(v5 + 8 * v10++) = 0;
        v9 = v9 - v16;
      }
      while ( v11 != v10 );
      goto LABEL_5;
    }
LABEL_10:
    v9 = 0.0;
    goto LABEL_5;
  }
  if ( v6 <= 0 )
    goto LABEL_10;
  v18 = *(int **)a2;
  v9 = 0.0;
  v19 = *(_QWORD *)a2 + 4LL * (unsigned int)(v6 - 1) + 4;
  do
  {
    v20 = *v18++;
    v21 = *(int *)(v8 + 4 * v20);
    v22 = (double *)(v5 + 8 * v20);
    v23 = (double *)(v4[150] + 8 * v21);
    v24 = *v22 * a3;
    v25 = *v23 - v24;
    v26 = v24 * *(double *)(v4[129] + 8 * v21);
    *v23 = v25;
    v9 = v9 - v26;
    *v22 = 0.0;
  }
  while ( (int *)v19 != v18 );
LABEL_5:
  v17 = v9 + *a4;
  *((_DWORD *)a2 + 4) = 0;
  *((_BYTE *)a2 + 28) = 0;
  *a4 = v17;
}

