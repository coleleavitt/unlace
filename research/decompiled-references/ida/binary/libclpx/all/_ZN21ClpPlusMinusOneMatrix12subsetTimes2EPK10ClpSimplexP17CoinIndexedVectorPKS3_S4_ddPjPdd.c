double *__fastcall ClpPlusMinusOneMatrix::subsetTimes2(
        ClpPlusMinusOneMatrix *this,
        const ClpSimplex *a2,
        CoinIndexedVector *a3,
        const CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        double a6,
        double a7,
        unsigned int *a8,
        double a9,
        double *a10)
{
  double *result; // rax
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rdx
  double v14; // xmm9_8
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // r9
  double v18; // xmm4_8
  signed int v19; // r11d
  int v20; // r10d
  int v21; // ecx
  __int64 v22; // rbx
  double v23; // xmm3_8
  int *v24; // rax
  unsigned __int64 v25; // r10
  __int64 v26; // rsi
  int v27; // esi
  __int64 v28; // r10
  int *v29; // rax
  unsigned __int64 v30; // rsi
  __int64 v31; // rcx
  double v32; // xmm7_8
  double v33; // xmm3_8
  double v34; // xmm7_8
  unsigned int v35; // ecx
  double v36; // xmm3_8
  __int64 v37; // [rsp+0h] [rbp-48h]

  result = (double *)*((unsigned int *)a3 + 4);
  v11 = *(_QWORD *)a3;
  v12 = *((_QWORD *)a3 + 1);
  v13 = *((_QWORD *)a4 + 1);
  v14 = 1.0;
  if ( a9 != 0.0 )
    v14 = a9;
  if ( (int)result > 0 )
  {
    v15 = *((_QWORD *)this + 13);
    v16 = *((_QWORD *)this + 14);
    v17 = 0;
    v37 = (unsigned int)((_DWORD)result - 1) + 1LL;
    do
    {
      v18 = *(double *)(v12 + 8 * v17) * v14;
      v19 = *(_DWORD *)(v11 + 4 * v17);
      if ( a9 == 0.0 )
        *(_QWORD *)(v12 + 8 * v17) = 0;
      v20 = *(_DWORD *)(v15 + 4LL * v19);
      v21 = *(_DWORD *)(v16 + 4LL * v19);
      if ( v20 >= v21 )
      {
        v21 = *(_DWORD *)(v15 + 4LL * v19);
        v23 = 0.0;
      }
      else
      {
        v22 = *((_QWORD *)this + 15);
        v23 = 0.0;
        v24 = (int *)(v22 + 4LL * v20);
        v25 = v22 + 4 * (v20 + (unsigned __int64)(unsigned int)(v21 - 1 - v20)) + 4;
        do
        {
          v26 = *v24++;
          v23 = v23 + *(double *)(v13 + 8 * v26);
        }
        while ( (int *)v25 != v24 );
      }
      v27 = *(_DWORD *)(v15 + 4LL * v19 + 4);
      if ( v27 > v21 )
      {
        v28 = *((_QWORD *)this + 15);
        v29 = (int *)(v28 + 4LL * v21);
        v30 = v28 + 4 * (v21 + (unsigned __int64)(unsigned int)(v27 - 1 - v21)) + 4;
        do
        {
          v31 = *v29++;
          v23 = v23 - *(double *)(v13 + 8 * v31);
        }
        while ( (int *)v30 != v29 );
      }
      v32 = v18 * v18;
      result = &a10[v19];
      v33 = v23 * v18 + v18 * v18 * a7 + *result;
      if ( v33 < 0.0001 )
      {
        if ( a6 < 0.0 )
        {
          v33 = fmax(0.0001, v32 + 1.0);
        }
        else
        {
          v34 = v32 * a6;
          v35 = a8[v19 >> 5];
          v36 = v34;
          if ( _bittest((const int *)&v35, v19) )
            v36 = v34 + 1.0;
          v33 = fmax(v36, 0.0001);
        }
      }
      ++v17;
      *result = v33;
    }
    while ( v37 != v17 );
  }
  return result;
}

