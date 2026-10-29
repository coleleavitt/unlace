__int64 __fastcall ClpPlusMinusOneMatrix::fillBasis(
        ClpPlusMinusOneMatrix *this,
        ClpSimplex *a2,
        const int *a3,
        unsigned int *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8,
        double *a9)
{
  __int64 result; // rax
  int v10; // edx
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r11
  double *v17; // r12
  int *v18; // r10
  __int64 v19; // rsi
  _DWORD *v20; // r10
  __int64 v21; // rax
  __int64 v22; // rsi
  double *v23; // r12
  int *v24; // rbx
  __int64 v25; // r11
  int v26; // eax
  __int64 v28; // [rsp+8h] [rbp-38h]

  result = *a4;
  v10 = *a6;
  if ( (int)result > 0 )
  {
    v11 = *((_QWORD *)this + 13);
    v12 = 1;
    v28 = *((_QWORD *)this + 14);
    do
    {
      v13 = 4LL * a3[v12 - 1];
      v14 = *(int *)(v11 + v13);
      if ( (int)v14 < *(_DWORD *)(v28 + v13) )
      {
        v15 = (int)v14 + 1;
        v16 = *((_QWORD *)this + 15) + -4 * v15 + 4 * v14;
        v17 = &a9[v10 - v15];
        v18 = &a5[v10 - v15];
        do
        {
          v19 = *(int *)(v16 + 4 * v15);
          ++v10;
          v18[v15] = v19;
          ++a7[v19];
          v14 = (int)v15;
          v17[v15++] = 1.0;
        }
        while ( *(_DWORD *)(v28 + v13) > (int)v14 );
      }
      v20 = (_DWORD *)(v11 + v13 + 4);
      if ( *v20 > (int)v14 )
      {
        v21 = (int)v14 + 1;
        v22 = *((_QWORD *)this + 15) + -4 * v21 + 4 * v14;
        v23 = &a9[v10 - v21];
        v24 = &a5[v10 - v21];
        do
        {
          v25 = *(int *)(v22 + 4 * v21);
          ++v10;
          v24[v21] = v25;
          ++a7[v25];
          LODWORD(v25) = v21;
          v23[v21++] = -1.0;
        }
        while ( *v20 > (int)v25 );
      }
      v26 = v10 - a6[v12 - 1];
      a6[v12] = v10;
      a8[v12 - 1] = v26;
      result = (unsigned int)v12++;
    }
    while ( (int)*a4 > (int)result );
  }
  return result;
}

