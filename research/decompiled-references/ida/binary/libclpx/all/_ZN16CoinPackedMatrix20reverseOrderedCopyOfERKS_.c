__int64 __fastcall CoinPackedMatrix::reverseOrderedCopyOf(CoinPackedMatrix *this, const CoinPackedMatrix *a2)
{
  int v4; // eax
  int v5; // edx
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  int v17; // esi
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  __int64 result; // rax
  __m128d v22; // xmm1
  double v23; // xmm0_8
  __m128d v24; // xmm2
  int *v25; // r12
  double v26; // xmm3_8
  _DWORD *v27; // rax
  double v28; // xmm2_8
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // esi
  int v32; // edi
  __m128d v33; // xmm0
  __m128d v34; // xmm2
  void *v35; // rdi
  void *v36; // rdi
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // r13
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 i; // rax
  int v44; // r14d
  int v45; // edx
  __int64 v46; // r12
  __int64 v47; // rbp
  __int64 v48; // r11
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // r10
  __int64 v52; // rdi
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // xmm0_8
  int *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rsi
  int v60; // ecx
  void *v61; // rdi
  void *v62; // rdi
  unsigned __int64 v63; // rdi
  __int64 v64; // rax
  unsigned __int64 v65; // rdi
  double v66; // xmm2_8
  char *v67; // rcx
  int v68; // esi
  __m128d v69; // xmm0
  __m128d v70; // xmm1
  int v71; // edi
  __int64 v72; // [rsp+0h] [rbp-50h]
  __int64 v73; // [rsp+8h] [rbp-48h]
  __int64 v74; // [rsp+10h] [rbp-40h]

  if ( this == a2 )
    return CoinPackedMatrix::reverseOrdering(this);
  *((_BYTE *)this + 8) = *((_BYTE *)a2 + 8) ^ 1;
  v4 = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 16) = v4;
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 16);
  v5 = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 18) = v5;
  if ( !v5 )
  {
    *((_DWORD *)this + 19) = v4;
    v6 = *((void **)this + 6);
    if ( v6 )
      operator delete[](v6);
    v7 = *((void **)this + 7);
    if ( v7 )
      operator delete[](v7);
    v8 = *((void **)this + 5);
    if ( v8 )
      operator delete[](v8);
    v9 = *((void **)this + 4);
    if ( v9 )
      operator delete[](v9);
    v10 = *((_DWORD *)this + 19) + 1;
    if ( v10 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v11 = operator new[](4 * v10);
      v12 = *((int *)this + 19);
      *((_QWORD *)this + 6) = v11;
      if ( v12 <= 0x1FFFFFFFFFFFFFFELL )
      {
        v13 = operator new[](4 * v12);
        v14 = *((int *)this + 16);
        *((_QWORD *)this + 7) = v13;
        v15 = *((_QWORD *)this + 6);
        if ( (int)v14 > 0 )
        {
          v16 = 1;
          do
          {
            *(_DWORD *)(v15 + 4 * v16 - 4) = 0;
            v14 = *((int *)this + 16);
            v17 = v16;
            *(_DWORD *)(v13 + 4 * v16++ - 4) = 0;
          }
          while ( (int)v14 > v17 );
        }
        *(_DWORD *)(v15 + 4 * v14) = 0;
        v18 = *((int *)this + 20);
        if ( v18 <= 0x1FFFFFFFFFFFFFFELL )
        {
          v19 = operator new[](4 * v18);
          v20 = *((int *)this + 20);
          *((_QWORD *)this + 5) = v19;
          if ( v20 <= 0xFFFFFFFFFFFFFFFLL )
          {
            result = operator new[](8 * v20);
            *((_QWORD *)this + 4) = result;
            return result;
          }
        }
      }
    }
LABEL_64:
    __cxa_throw_bad_array_new_length();
  }
  v22 = (__m128d)0x3FF0000000000000uLL;
  v22.m128d_f64[0] = (*((double *)this + 3) + 1.0) * (double)v4;
  v23 = v22.m128d_f64[0];
  if ( fabs(v22.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v24.m128d_f64[0] = (double)(int)v22.m128d_f64[0];
    *(_QWORD *)&v23 = COERCE_UNSIGNED_INT64(
                        COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v22, v24).m128d_f64[0] & 0x3FF0000000000000LL)
                      + v24.m128d_f64[0])
                    | *(_QWORD *)&v22.m128d_f64[0] & 0x8000000000000000LL;
  }
  if ( *((_DWORD *)this + 19) < (int)v23 )
  {
    v61 = *((void **)this + 6);
    *((_DWORD *)this + 19) = (int)v23;
    if ( v61 )
      operator delete[](v61);
    v62 = *((void **)this + 7);
    if ( v62 )
      operator delete[](v62);
    v63 = *((_DWORD *)this + 19) + 1;
    if ( v63 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_64;
    v64 = operator new[](4 * v63);
    v65 = *((int *)this + 19);
    *((_QWORD *)this + 6) = v64;
    if ( v65 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_64;
    v25 = (int *)operator new[](4 * v65);
    *((_QWORD *)this + 7) = v25;
  }
  else
  {
    v25 = *((int **)this + 7);
  }
  CoinPackedMatrix::countOrthoLength(a2, v25);
  v26 = 0.0;
  v27 = *((_DWORD **)this + 6);
  v28 = *((double *)this + 2);
  *v27 = 0;
  v29 = *((int *)this + 16);
  if ( v28 == 0.0 )
  {
    if ( (int)v29 > 0 )
    {
      v30 = 1;
      v31 = 0;
      do
      {
        v31 += v25[v30 - 1];
        v32 = v30;
        v27[v30] = v31;
        v29 = *((int *)this + 16);
        ++v30;
      }
      while ( (int)v29 > v32 );
    }
  }
  else if ( (int)v29 > 0 )
  {
    v66 = v28 + 1.0;
    v67 = (char *)&dword_0 + 1;
    v68 = 0;
    do
    {
      v69 = 0;
      v69.m128d_f64[0] = (double)v25[(_QWORD)v67 - 1] * v66;
      if ( fabs(v69.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v70.m128d_f64[0] = (double)(int)v69.m128d_f64[0];
        *(_QWORD *)&v69.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                         COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v69, v70).m128d_f64[0] & 0x3FF0000000000000LL)
                                       + v70.m128d_f64[0])
                                     | *(_QWORD *)&v69.m128d_f64[0] & 0x8000000000000000LL;
      }
      v71 = (int)v67;
      v68 += (int)v69.m128d_f64[0];
      v27[(_QWORD)v67] = v68;
      v29 = *((int *)this + 16);
      ++v67;
    }
    while ( (int)v29 > v71 );
  }
  v33 = (__m128d)*((unsigned __int64 *)this + 3);
  if ( (_DWORD)v29 )
    v26 = (double)(int)v27[v29];
  v33.m128d_f64[0] = (v33.m128d_f64[0] + 1.0) * v26;
  if ( fabs(v33.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v34.m128d_f64[0] = (double)(int)v33.m128d_f64[0];
    *(_QWORD *)&v33.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                     COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v33, v34).m128d_f64[0] & 0x3FF0000000000000LL)
                                   + v34.m128d_f64[0])
                                 | *(_QWORD *)&v33.m128d_f64[0] & 0x8000000000000000LL;
  }
  if ( *((_DWORD *)this + 20) < (int)v33.m128d_f64[0] )
  {
    v35 = *((void **)this + 5);
    *((_DWORD *)this + 20) = (int)v33.m128d_f64[0];
    if ( v35 )
      operator delete[](v35);
    v36 = *((void **)this + 4);
    if ( v36 )
      operator delete[](v36);
    v37 = *((int *)this + 20);
    if ( v37 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_64;
    *((_QWORD *)this + 5) = operator new[](4 * v37);
    v38 = *((int *)this + 20);
    if ( v38 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_64;
    *((_QWORD *)this + 4) = operator new[](8 * v38);
  }
  v39 = *((_DWORD *)a2 + 16);
  v40 = 0;
  v41 = *((_QWORD *)a2 + 6);
  v73 = *((_QWORD *)a2 + 5);
  v42 = *((_QWORD *)a2 + 7);
  *((_DWORD *)this + 17) = v39;
  v72 = v42;
  v74 = *((_QWORD *)a2 + 4);
  for ( i = 0; v39 > (int)v40; i = v44 )
  {
    v44 = *(_DWORD *)(v41 + 4 * v40 + 4);
    v45 = i + *(_DWORD *)(v72 + 4 * v40);
    if ( v45 != (_DWORD)i )
    {
      v46 = *((_QWORD *)this + 6);
      v47 = *((_QWORD *)this + 4);
      v48 = *((_QWORD *)this + 5);
      v49 = (unsigned int)(~(_DWORD)i + v45);
      v50 = 0;
      v51 = v73 + 4 * i;
      v52 = v49 + 1;
      v53 = v74 + 8 * i;
      do
      {
        v54 = *(int *)(v51 + 4 * v50);
        v55 = *(_QWORD *)(v53 + 8 * v50++);
        v56 = (int *)(v46 + 4 * v54);
        v57 = *v56;
        *v56 = v57 + 1;
        *(_QWORD *)(v47 + 8 * v57) = v55;
        *(_DWORD *)(v48 + 4 * v57) = v40;
      }
      while ( v52 != v50 );
      v39 = *((_DWORD *)this + 17);
    }
    ++v40;
  }
  result = *((unsigned int *)this + 16);
  if ( (int)result > 0 )
  {
    v58 = *((_QWORD *)this + 6);
    v59 = *((_QWORD *)this + 7);
    result = 1;
    do
    {
      *(_DWORD *)(v58 + 4 * result - 4) -= *(_DWORD *)(v59 + 4 * result - 4);
      v60 = result++;
    }
    while ( *((_DWORD *)this + 16) > v60 );
  }
  return result;
}

