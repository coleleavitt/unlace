__int64 __fastcall ClpPackedMatrix::gutsOfTransposeTimesByRowGE3(
        ClpPackedMatrix *this,
        const CoinIndexedVector *a2,
        int *a3,
        double *a4,
        double *a5,
        double a6,
        double a7)
{
  _QWORD *v7; // rax
  __int64 v8; // r15
  int v9; // ecx
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rbx
  int v13; // r9d
  __int64 v14; // rax
  double v15; // xmm5_8
  int *v16; // rbp
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // r11
  __int64 v21; // r10
  double v22; // rsi
  int v23; // ecx
  double v24; // xmm3_8
  __int64 v25; // rsi
  double *v26; // rcx
  double v27; // xmm2_8
  __int64 v28; // rcx
  int *v29; // rcx
  int *v30; // r9
  __int64 result; // rax
  __int64 v32; // rdi
  double *v33; // rsi
  double v34; // xmm1_8
  __int64 v35; // rsi
  __int64 v36; // [rsp+8h] [rbp-50h]
  __int64 v37; // [rsp+10h] [rbp-48h]
  __int64 v38; // [rsp+18h] [rbp-40h]

  v7 = *((_QWORD **)this + 11);
  v8 = *((_QWORD *)a2 + 1);
  v9 = *((_DWORD *)a2 + 4);
  v10 = *(_QWORD *)a2;
  v11 = v7[6];
  v38 = v7[5];
  v37 = v7[4];
  if ( v9 <= 0 )
    return 0;
  v12 = 0;
  v13 = 0;
  v36 = (unsigned int)(v9 - 1) + 1LL;
  do
  {
    v14 = *(int *)(v10 + 4 * v12);
    v15 = *(double *)(v8 + 8 * v12) * a7;
    v16 = (int *)(v11 + 4 * v14 + 4);
    v17 = *(int *)(v11 + 4 * v14);
    v18 = *v16;
    if ( (int)v17 < *v16 )
    {
      v19 = (int)v17 + 1;
      v20 = v38 + -4 * v19 + 4 * v17;
      v21 = v37 + -8 * v19 + 8 * v17;
      do
      {
        while ( 1 )
        {
          v24 = *(double *)(v21 + 8 * v19) * v15;
          v25 = *(int *)(v20 + 4 * v19);
          v26 = &a5[v25];
          v27 = *v26;
          if ( *v26 != 0.0 )
            break;
          *v26 = v24;
          v28 = v13++;
          a3[v28] = v25;
          v18 = *v16;
          LODWORD(v28) = v19++;
          if ( (int)v28 >= *v16 )
            goto LABEL_10;
        }
        v22 = v27 + v24;
        if ( v27 + v24 == 0.0 )
          v22 = 1.0e-100;
        *v26 = v22;
        v23 = v19++;
      }
      while ( v23 < v18 );
    }
LABEL_10:
    ++v12;
  }
  while ( v36 != v12 );
  if ( !v13 )
    return 0;
  v29 = a3;
  v30 = &a3[v13 - 1 + 1];
  result = 0;
  do
  {
    v32 = *v29;
    v33 = &a5[v32];
    v34 = *v33;
    *v33 = 0.0;
    if ( fabs(v34) > a6 )
    {
      v35 = (int)result;
      result = (unsigned int)(result + 1);
      a4[v35] = v34;
      a3[v35] = v32;
    }
    ++v29;
  }
  while ( v30 != v29 );
  return result;
}

