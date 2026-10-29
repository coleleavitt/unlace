__int64 __fastcall ClpSimplexOther::redoInternalArrays(ClpSimplexOther *this)
{
  char *v2; // r12
  char *v3; // rbp
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  double v9; // xmm1_8
  double v10; // xmm4_8
  double v11; // xmm0_8
  __int64 v12; // rdx
  __int64 v13; // rdi
  char *v14; // rcx
  char *v15; // rdx
  double v16; // xmm1_8
  double v17; // xmm4_8
  double v18; // xmm0_8

  v2 = *((char **)this + 123);
  v3 = *((char **)this + 126);
  memcpy(v2, *((const void **)this + 22), 8LL * *((int *)this + 27));
  memcpy(&v2[8 * *((int *)this + 27)], *((const void **)this + 18), 8LL * *((int *)this + 26));
  memcpy(v3, *((const void **)this + 23), 8LL * *((int *)this + 27));
  result = (__int64)memcpy(&v3[8 * *((int *)this + 27)], *((const void **)this + 19), 8LL * *((int *)this + 26));
  v5 = *((_QWORD *)this + 28);
  if ( v5 )
  {
    v6 = *((int *)this + 27);
    if ( (int)v6 > 0 )
    {
      v7 = *((_QWORD *)this + 31);
      v8 = 0;
      do
      {
        v9 = *(double *)&v2[v8];
        v10 = *(double *)(v7 + v8);
        if ( v9 > -1.0e20 )
          *(double *)&v2[v8] = v9 * v10;
        v11 = *(double *)&v3[v8];
        if ( v11 < 1.0e20 )
          *(double *)&v3[v8] = v11 * v10;
        v8 += 8;
      }
      while ( 8LL * (unsigned int)(v6 - 1) + 8 != v8 );
    }
    result = *((unsigned int *)this + 26);
    v12 = 8 * v6;
    if ( (int)result > 0 )
    {
      v13 = 8LL * (unsigned int)(result - 1) + 8;
      v14 = &v2[v12];
      result = 0;
      v15 = &v3[v12];
      do
      {
        v16 = *(double *)&v14[result];
        v17 = *(double *)(v5 + result);
        if ( v16 > -1.0e20 )
          *(double *)&v14[result] = v16 * v17;
        v18 = *(double *)&v15[result];
        if ( v18 < 1.0e20 )
          *(double *)&v15[result] = v18 * v17;
        result += 8;
      }
      while ( result != v13 );
    }
  }
  return result;
}

