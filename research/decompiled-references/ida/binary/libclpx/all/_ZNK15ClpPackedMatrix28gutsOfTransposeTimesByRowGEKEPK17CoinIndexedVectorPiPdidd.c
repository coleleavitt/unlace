__int64 __fastcall ClpPackedMatrix::gutsOfTransposeTimesByRowGEK(
        ClpPackedMatrix *this,
        const CoinIndexedVector *a2,
        int *a3,
        double *a4,
        double a5,
        double a6,
        int a7)
{
  int v7; // r9d
  _QWORD *v8; // rax
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r11
  __int64 v15; // rbp
  __int64 v16; // rax
  double v17; // xmm3_8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // rsi
  double v25; // xmm2_8
  __int64 v26; // rsi
  __int64 result; // rax
  double v28; // xmm1_8
  __int64 v29; // r9

  v7 = *((_DWORD *)a2 + 4);
  v8 = *((_QWORD **)this + 11);
  v9 = *((_QWORD *)a2 + 1);
  v10 = *(_QWORD *)a2;
  v11 = v8[5];
  v12 = v8[6];
  v13 = v8[4];
  if ( v7 > 0 )
  {
    v14 = 0;
    v15 = (unsigned int)(v7 - 1) + 1LL;
    do
    {
      v16 = *(int *)(v10 + 4 * v14);
      v17 = *(double *)(v9 + 8 * v14) * a6;
      v18 = *(int *)(v12 + 4 * v16);
      v19 = v11 + 4 * v18;
      v20 = v13 + 8 * v18;
      v21 = *(_DWORD *)(v12 + 4 * v16 + 4) - *(_DWORD *)(v12 + 4 * v16);
      if ( v21 )
      {
        v22 = 4LL * (unsigned int)(v21 - 1) + 4;
        v23 = 0;
        do
        {
          v24 = *(int *)(v19 + v23);
          v25 = *(double *)(v20 + 2 * v23);
          v23 += 4;
          a4[v24] = v25 * v17 + a4[v24];
        }
        while ( v22 != v23 );
      }
      ++v14;
    }
    while ( v15 != v14 );
  }
  if ( a7 <= 0 )
    return 0;
  v26 = 0;
  result = 0;
  do
  {
    v28 = a4[v26];
    if ( v28 != 0.0 )
    {
      a4[v26] = 0.0;
      if ( fabs(v28) > a5 )
      {
        v29 = (int)result;
        result = (unsigned int)(result + 1);
        a4[v29] = v28;
        a3[v29] = v26;
      }
    }
    ++v26;
  }
  while ( (unsigned int)(a7 - 1) + 1LL != v26 );
  return result;
}

