__int64 __fastcall ClpSimplex::cleanPrimalSolution(ClpSimplex *this, double a2)
{
  int v3; // edi
  double *v4; // r12
  __int64 v5; // rax
  int v6; // ecx
  double *v7; // r13
  double *v8; // rax
  double *v9; // rsi
  double *v10; // rdx
  __int64 v11; // rdi
  __m128d v12; // xmm0
  __m128d v13; // xmm1
  double v14; // xmm2_8
  __int64 v15; // rax
  unsigned int v16; // ebx
  double v17; // xmm1_8
  int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  double v21; // xmm1_8
  double *v23; // rax
  double *v24; // rsi
  double *v25; // rdx
  __int64 v26; // rdi
  __m128d v27; // xmm1
  __m128d v28; // xmm3

  v3 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  if ( (unsigned __int64)v3 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v4 = (double *)operator new[](8LL * v3);
  v5 = *((int *)this + 27);
  v6 = *((_DWORD *)this + 27);
  v7 = &v4[v5];
  if ( a2 == 1.0 )
  {
    if ( (int)v5 > 0 )
    {
      v8 = *((double **)this + 15);
      v9 = v4;
      v10 = v8 + 1;
      v11 = (__int64)&v8[(unsigned int)(v6 - 1) + 1];
      while ( 1 )
      {
        v12.m128d_f64[0] = *v8 + 0.5;
        if ( fabs(v12.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v13 = 0;
          v13.m128d_f64[0] = (double)(int)v12.m128d_f64[0];
          *(_QWORD *)&v12.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                           v13.m128d_f64[0]
                                         - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v13, v12).m128d_f64[0] & 0x3FF0000000000000LL))
                                       | *(_QWORD *)&v12.m128d_f64[0] & 0x8000000000000000LL;
        }
        *v9++ = v12.m128d_f64[0];
        v8 = v10;
        if ( (double *)v11 == v10 )
          break;
        ++v10;
      }
      v14 = 0.0;
      goto LABEL_10;
    }
    v14 = 0.0;
LABEL_32:
    memset(&v4[v5], 0, 8LL * *((int *)this + 26));
    ClpModel::times(this, -1.0, v4, v7);
    v18 = *((_DWORD *)this + 26);
    if ( v18 <= 0 )
      goto LABEL_30;
    v16 = 0;
    goto LABEL_16;
  }
  v14 = 0.1 * *((double *)this + 110);
  if ( (int)v5 <= 0 )
    goto LABEL_32;
  v23 = *((double **)this + 15);
  v24 = v4;
  v25 = v23 + 1;
  v26 = (__int64)&v23[(unsigned int)(v6 - 1) + 1];
  while ( 1 )
  {
    v27.m128d_f64[0] = *v23 * (1.0 / a2) + 0.5;
    if ( fabs(v27.m128d_f64[0]) < 4.503599627370496e15 )
    {
      v28 = 0;
      v28.m128d_f64[0] = (double)(int)v27.m128d_f64[0];
      *(_QWORD *)&v27.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                       v28.m128d_f64[0]
                                     - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v28, v27).m128d_f64[0] & 0x3FF0000000000000LL))
                                   | *(_QWORD *)&v27.m128d_f64[0] & 0x8000000000000000LL;
    }
    ++v24;
    v23 = v25;
    *(v24 - 1) = v27.m128d_f64[0] * a2;
    if ( v25 == (double *)v26 )
      break;
    ++v25;
  }
LABEL_10:
  v15 = 0;
  v16 = 0;
  do
  {
    v17 = v4[v15];
    if ( *(double *)(*((_QWORD *)this + 22) + 8 * v15) - v14 > v17
      || v17 > *(double *)(*((_QWORD *)this + 23) + 8 * v15) + v14 )
    {
      ++v16;
    }
    ++v15;
  }
  while ( v6 > (int)v15 );
  memset(v7, 0, 8LL * *((int *)this + 26));
  ClpModel::times(this, -1.0, v4, v7);
  v18 = *((_DWORD *)this + 26);
  if ( v18 > 0 )
  {
LABEL_16:
    v19 = 8LL * (unsigned int)(v18 - 1) + 8;
    v20 = 0;
    do
    {
      v21 = v7[v20 / 8];
      if ( *(double *)(*((_QWORD *)this + 18) + v20) - v14 > v21
        || v21 > *(double *)(*((_QWORD *)this + 19) + v20) + v14 )
      {
        ++v16;
      }
      v20 += 8LL;
    }
    while ( v19 != v20 );
  }
  if ( !v16 )
  {
LABEL_30:
    v16 = 0;
    memcpy(*((void **)this + 22), v4, 8LL * *((int *)this + 27));
    memcpy(*((void **)this + 18), v7, 8LL * *((int *)this + 26));
  }
  operator delete[](v4);
  return v16;
}

