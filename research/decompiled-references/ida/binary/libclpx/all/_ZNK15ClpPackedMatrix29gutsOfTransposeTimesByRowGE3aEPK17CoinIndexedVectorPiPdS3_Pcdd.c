__int64 __fastcall ClpPackedMatrix::gutsOfTransposeTimesByRowGE3a(
        ClpPackedMatrix *this,
        const CoinIndexedVector *a2,
        int *a3,
        double *a4,
        int *a5,
        char *a6,
        double a7,
        double a8)
{
  _QWORD *v8; // rax
  int v9; // r10d
  double *v10; // rbx
  int *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r11d
  int *v15; // r15
  double *v16; // r14
  __int64 result; // rax
  __int64 v18; // rdi
  double v19; // xmm3_8
  __int64 v20; // r11
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  double v25; // xmm2_8
  char *v26; // rbx
  int v27; // r10d
  int *v28; // rdi
  __int64 v29; // rbp
  __int64 v30; // rdi
  __int64 v31; // r12
  __int64 v32; // rsi
  char *v33; // rbx
  char *v34; // r12
  int *v35; // r11
  __int64 v36; // r10
  double v37; // xmm1_8
  int v38; // [rsp+0h] [rbp-58h]
  int v39; // [rsp+4h] [rbp-54h]
  __int64 v40; // [rsp+8h] [rbp-50h]
  __int64 v41; // [rsp+10h] [rbp-48h]
  __int64 v42; // [rsp+18h] [rbp-40h]
  __int64 v43; // [rsp+20h] [rbp-38h]

  v8 = *((_QWORD **)this + 11);
  v9 = *((_DWORD *)a2 + 4);
  v10 = *((double **)a2 + 1);
  v43 = v8[5];
  v40 = v8[6];
  v42 = v8[4];
  v11 = *(int **)a2;
  v11[v9] = 0;
  v12 = *v11;
  v13 = *(int *)(v40 + 4 * v12);
  v14 = *(_DWORD *)(v40 + 4 * v12 + 4);
  if ( v9 <= 0 )
    return 0;
  v15 = v11 + 1;
  v16 = v10;
  v41 = (__int64)&v10[(unsigned int)(v9 - 1) + 1];
  result = 0;
  do
  {
    v18 = *v15;
    v19 = *v16 * a8;
    v38 = *(_DWORD *)(v40 + 4 * v18);
    v39 = *(_DWORD *)(v40 + 4 * v18 + 4);
    if ( (int)v13 < v14 )
    {
      v20 = (unsigned int)(v14 - 1 - v13) + 1LL;
      v21 = v43 + 4 * v13;
      v22 = v42 + 8 * v13;
      v23 = 0;
      do
      {
        while ( 1 )
        {
          v24 = *(int *)(v21 + 4 * v23);
          v25 = *(double *)(v22 + 8 * v23) * v19;
          v26 = &a6[v24];
          v27 = *(_DWORD *)(v21 + 4 * v23);
          v28 = &a5[v24];
          if ( !*v26 )
            break;
          ++v23;
          a4[*v28] = v25 + a4[*v28];
          if ( v20 == v23 )
            goto LABEL_8;
        }
        v29 = (int)result;
        ++v23;
        a4[(int)result] = v25;
        *v26 = 1;
        *v28 = result;
        result = (unsigned int)(result + 1);
        a3[v29] = v27;
      }
      while ( v20 != v23 );
    }
LABEL_8:
    ++v16;
    ++v15;
    v13 = v38;
    v14 = v39;
  }
  while ( (double *)v41 != v16 );
  if ( (_DWORD)result )
  {
    v30 = 0;
    do
    {
      while ( 1 )
      {
        a6[a3[v30]] = 0;
        if ( a7 >= fabs(a4[v30]) )
          break;
LABEL_11:
        if ( (int)result <= (int)++v30 )
          return result;
      }
      v31 = 8LL * (int)result;
      v32 = (int)result - 1;
      v33 = (char *)a4 + v31 - 8 * v32;
      v34 = (char *)a4 + v31 - 8LL * (unsigned int)(result - 1);
      v35 = &a3[(int)result - v32];
      do
      {
        while ( 1 )
        {
          v36 = v35[v32 - 1];
          result = (unsigned int)v32;
          v37 = *(double *)&v33[8 * v32 - 8];
          a6[v36] = 0;
          if ( (int)v32 <= (int)v30 )
            break;
          *(_QWORD *)&v34[8 * v32 - 8] = 0;
          a4[v30] = v37;
          --v32;
          a3[v30] = v36;
          if ( a7 < fabs(v37) )
            goto LABEL_11;
        }
        --v32;
        a4[v30] = 0.0;
      }
      while ( a7 >= 1.0 );
      ++v30;
    }
    while ( (int)result > (int)v30 );
  }
  return result;
}

