__int64 __fastcall ClpSimplexDual::checkUnbounded(
        ClpFactorization **this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        double a4)
{
  int v6; // r15d
  int *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rsi
  int *v10; // rax
  __int64 v11; // rdx
  double v12; // xmm4_8
  __m128d v13; // xmm2
  unsigned int v14; // r14d
  double v15; // xmm6_8
  __int64 v16; // rdx
  double v17; // xmm3_8
  __m128d v18; // xmm5
  __int64 v19; // rcx
  __m128d v20; // xmm0
  __int64 v21; // rcx
  double v22; // xmm0_8
  void *v23; // rdi
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // edi
  __int64 v27; // r9
  int *v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rcx
  _QWORD *v32; // rdx
  _QWORD *v33; // rdx

  ClpFactorization::updateColumn(*(this + 158), a3, a2, 0);
  v6 = *((_DWORD *)a2 + 4);
  v7 = *(int **)a2;
  v8 = *((_QWORD *)a2 + 1);
  if ( v6 <= 0 )
  {
    v15 = 1.0;
    v13.m128d_f64[0] = 1.0e-14 * *((double *)this + 98);
    if ( a4 <= 0.0 )
    {
      v14 = -3;
      if ( a4 >= 0.0 )
        goto LABEL_24;
      v15 = -1.0;
    }
    goto LABEL_13;
  }
  v9 = (__int64)*(this + 157);
  v10 = *(int **)a2;
  do
  {
    v11 = *v10++;
    a4 = a4 - *((double *)*(this + 129) + *(int *)(v9 + 4 * v11)) * *(double *)(v8 + 8 * v11);
  }
  while ( &v7[v6 - 1 + 1] != v10 );
  v12 = 0.0;
  v13.m128d_f64[0] = 1.0e-14 * *((double *)this + 98);
  if ( a4 <= 0.0 )
  {
    v15 = 0.0;
    v14 = -3;
    if ( a4 < 0.0 )
    {
      v12 = -1.0e10;
      v14 = 2;
      v15 = -1.0;
    }
  }
  else
  {
    v12 = 1.0e10;
    v14 = 2;
    v15 = 1.0;
  }
  v16 = 0;
  v17 = *((double *)this + 110);
  v18 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
  do
  {
    while ( 1 )
    {
      v19 = v7[v16];
      v20 = (__m128d)*(unsigned __int64 *)(v8 + 8 * v19);
      v21 = *(int *)(v9 + 4 * v19);
      v22 = COERCE_DOUBLE(*(_QWORD *)&v20.m128d_f64[0] & *(_QWORD *)&_mm_cmpge_sd(_mm_and_pd(v20, v18), v13).m128d_f64[0])
          * v12
          + *((double *)*(this + 150) + v21);
      if ( v22 <= *((double *)*(this + 126) + v21) + v17 )
        break;
      ++v16;
      v14 = -3;
      if ( v6 <= (int)v16 )
        goto LABEL_12;
    }
    if ( *((double *)*(this + 123) + v21) - v17 > v22 )
      v14 = -3;
    ++v16;
  }
  while ( v6 > (int)v16 );
LABEL_12:
  if ( v14 == 2 )
  {
LABEL_13:
    v23 = *(this + 27);
    if ( v23 )
      operator delete[](v23);
    v24 = *((int *)this + 27);
    if ( v24 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v25 = operator new[](8 * v24);
    v26 = *((_DWORD *)this + 27);
    *(this + 27) = (ClpFactorization *)v25;
    if ( v26 )
    {
      if ( v26 / 8 <= 0 )
      {
        v33 = (_QWORD *)v25;
      }
      else
      {
        v32 = (_QWORD *)v25;
        do
        {
          *v32 = 0;
          v32[1] = 0;
          v32 += 8;
          *(v32 - 6) = 0;
          *(v32 - 5) = 0;
          *(v32 - 4) = 0;
          *(v32 - 3) = 0;
          *(v32 - 2) = 0;
          *(v32 - 1) = 0;
        }
        while ( v32 != (_QWORD *)(v25 + (((unsigned int)(v26 / 8 - 1) + 1LL) << 6)) );
        v33 = (_QWORD *)(v25 + ((v26 / 8 - 1 + 1LL) << 6));
      }
      switch ( v26 % 8 )
      {
        case 1:
          goto LABEL_38;
        case 2:
          goto LABEL_37;
        case 3:
          goto LABEL_36;
        case 4:
          goto LABEL_35;
        case 5:
          goto LABEL_34;
        case 6:
          goto LABEL_33;
        case 7:
          v33[6] = 0;
LABEL_33:
          v33[5] = 0;
LABEL_34:
          v33[4] = 0;
LABEL_35:
          v33[3] = 0;
LABEL_36:
          v33[2] = 0;
LABEL_37:
          v33[1] = 0;
LABEL_38:
          *v33 = 0;
          if ( v6 <= 0 )
            goto LABEL_23;
          goto LABEL_18;
        default:
          break;
      }
    }
    if ( v6 > 0 )
    {
LABEL_18:
      v27 = (__int64)*(this + 157);
      v28 = v7;
      do
      {
        v29 = *v28;
        v30 = *(int *)(v27 + 4 * v29);
        if ( v26 > (int)v30 && fabs(*(double *)(v8 + 8 * v29)) >= v13.m128d_f64[0] )
          *(double *)(v25 + 8 * v30) = *(double *)(v8 + 8 * v29) * v15;
        ++v28;
      }
      while ( &v7[v6 - 1 + 1] != v28 );
    }
LABEL_23:
    v14 = 2;
  }
LABEL_24:
  CoinIndexedVector::clear(a2);
  return v14;
}

