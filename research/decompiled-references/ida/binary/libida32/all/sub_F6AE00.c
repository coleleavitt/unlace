void __fastcall sub_F6AE00(
        __int64 a1,
        const void *a2,
        unsigned __int64 a3,
        const void *a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 *a7,
        unsigned __int64 a8)
{
  size_t v9; // r14
  unsigned __int64 v12; // rdi
  void *v14; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __m128i v22; // xmm2
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rsi
  _BYTE *v32; // rdi
  _BYTE *v33; // rax
  __int64 v34; // rdx
  __int64 *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rbp
  __int64 v38; // rbx
  const __m128i *v39; // r12
  unsigned __int64 v40; // rax
  const __m128i *v41; // r10
  __m128i v42; // xmm6
  __m128i *v43; // rax
  __m128i v44; // xmm7
  __m128i v45; // xmm0
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  __m128i v48; // xmm1
  __m128i v49; // xmm2
  __m128i v50; // xmm3
  __m128i v51; // xmm4
  __m128i v52; // xmm5
  __m128i v53; // xmm6
  __int64 v54; // rdx
  void *v55; // rax
  int v56; // edx
  __int64 *v57; // rsi
  unsigned __int64 v58; // rdi
  void *v59; // rax
  void *v60; // rbp
  __int64 *v61; // rdi
  __int64 *v62; // rax
  __int64 v63; // r11
  _DWORD *v64; // rdi
  __m128i v68; // [rsp+20h] [rbp-78h] BYREF
  __m128i v69; // [rsp+30h] [rbp-68h] BYREF
  __m128i v70; // [rsp+40h] [rbp-58h] BYREF
  __m128i v71; // [rsp+50h] [rbp-48h]

  v9 = 8 * a5;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v12 = -1;
  if ( a5 <= 0xFFFFFFFFFFFFFFFLL )
    v12 = 8 * a5;
  v14 = (void *)operator new[](v12);
  *(_QWORD *)(a1 + 16) = v14;
  *(_QWORD *)(a1 + 24) = a5;
  if ( v9 )
    memcpy(v14, a4, v9);
  v15 = -1;
  v16 = a8 << 6;
  if ( a8 <= 0x1FFFFFFFFFFFFFFLL )
    v15 = a8 << 6;
  v17 = operator new[](v15);
  v18 = (_QWORD *)v17;
  v19 = a8 - 1;
  if ( (__int64)(a8 - 1) >= 0 )
  {
    do
    {
      --v19;
      *v18 = 0;
      v18 += 8;
      *(v18 - 7) = 0;
      *((_OWORD *)v18 - 3) = 0;
      *(v18 - 4) = 0;
      *(v18 - 3) = 0;
      *((_OWORD *)v18 - 1) = 0;
    }
    while ( v19 != -1 );
  }
  *(_QWORD *)(a1 + 32) = v17;
  *(_QWORD *)(a1 + 40) = a8;
  v20 = v16 >> 6;
  if ( v16 > 0 )
  {
    do
    {
      v21 = *a7;
      v22 = _mm_loadu_si128((const __m128i *)(a7 + 1));
      v17 += 64;
      a7 += 8;
      v23 = _mm_loadu_si128((const __m128i *)(a7 - 5));
      v24 = _mm_loadu_si128((const __m128i *)(a7 - 3));
      *(_QWORD *)(v17 - 64) = v21;
      v25 = *(a7 - 1);
      *(__m128i *)(v17 - 56) = v22;
      *(__m128i *)(v17 - 40) = v23;
      *(__m128i *)(v17 - 24) = v24;
      *(_QWORD *)(v17 - 8) = v25;
      --v20;
    }
    while ( v20 );
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  operator delete();
  v30 = *(unsigned int *)(a6 + 16);
  *(_DWORD *)(a1 + 64) = v30;
  if ( (_DWORD)v30 )
  {
    v55 = (void *)sub_220C370(24 * v30, 8, v26, v27, v28, v29);
    v56 = *(_DWORD *)(a6 + 8);
    *(_QWORD *)(a1 + 48) = v55;
    v57 = *(__int64 **)a6;
    *(_DWORD *)(a1 + 56) = v56;
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a6 + 12);
    memcpy(v55, v57, 24LL * *(unsigned int *)(a1 + 64));
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  v31 = a1 + 88;
  *(_QWORD *)(a1 + 72) = a1 + 88;
  *(_QWORD *)(a1 + 80) = 0x400000000LL;
  if ( (_DWORD)a3 )
  {
    v32 = (_BYTE *)(a1 + 88);
    if ( (unsigned int)a3 > 4uLL )
    {
      sub_22134E0(a1 + 72, v31, (unsigned int)a3, 4);
      v31 = *(_QWORD *)(a1 + 72);
      v32 = (_BYTE *)(v31 + 4LL * *(unsigned int *)(a1 + 80));
    }
    v33 = (_BYTE *)(v31 + 4LL * (unsigned int)a3);
    if ( v33 != v32 )
      memset(v32, 0, 4 * ((unsigned __int64)(v33 - v32 - 4) >> 2) + 4);
    *(_DWORD *)(a1 + 80) = a3;
  }
  v34 = *(unsigned int *)(a6 + 16);
  v35 = *(__int64 **)a6;
  v36 = *(_QWORD *)a6 + 24 * v34;
  if ( !*(_DWORD *)(a6 + 8) || v35 == (__int64 *)v36 )
    goto LABEL_20;
  v61 = *(__int64 **)a6;
  while ( 1 )
  {
    v28 = *v61;
    v62 = v61;
    if ( *v61 != -4096 )
      break;
    if ( v61[1] != 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_43;
LABEL_56:
    v61 += 3;
    if ( v61 == (__int64 *)v36 )
      goto LABEL_20;
  }
  if ( v28 == -8192 && v61[1] == 0x7FFFFFFFFFFFFFFELL )
    goto LABEL_56;
LABEL_43:
  if ( (__int64 *)v36 != v61 )
  {
    v63 = *(_QWORD *)(a1 + 72);
    v28 = 0x7FFFFFFFFFFFFFFFLL;
    do
    {
      v64 = (_DWORD *)(v63 + 4LL * *((unsigned int *)v62 + 4));
      if ( !*v64 )
      {
        *v64 = *((_DWORD *)v62 + 5);
        v34 = *(unsigned int *)(a6 + 16);
      }
      while ( 1 )
      {
        v62 += 3;
        if ( v62 == (__int64 *)v36 )
          break;
        if ( *v62 == -4096 )
        {
          if ( v62[1] != 0x7FFFFFFFFFFFFFFFLL )
            break;
        }
        else if ( *v62 != -8192 || v62[1] != 0x7FFFFFFFFFFFFFFELL )
        {
          break;
        }
      }
    }
    while ( v62 != &v35[3 * v34] );
  }
LABEL_20:
  if ( a3 > 1 )
  {
    v58 = -1;
    if ( a3 <= 0xFFFFFFFFFFFFFFFLL )
      v58 = 8 * a3;
    v59 = (void *)operator new[](v58);
    v60 = v59;
    if ( 8 * a3 )
      memcpy(v59, a2, 8 * a3);
    if ( *(_QWORD *)a1 )
      operator delete[](*(void **)a1);
    *(_QWORD *)a1 = v60;
    *(_QWORD *)(a1 + 8) = a3;
  }
  v37 = *(_QWORD *)(a1 + 32);
  v38 = *(_QWORD *)(a1 + 40) << 6;
  v39 = (const __m128i *)(v37 + v38);
  if ( v37 != v37 + v38 )
  {
    _BitScanReverse64(&v40, v38 >> 6);
    sub_F6AAA0(*(_QWORD *)(a1 + 32), (unsigned __int64 *)(v37 + v38), 2LL * (int)(63 - (v40 ^ 0x3F)), v36, v28);
    if ( v38 <= 1024 )
    {
      sub_F57E20(v37, (__int64 *)(v37 + v38));
    }
    else
    {
      sub_F57E20(v37, (__int64 *)(v37 + 1024));
      for ( ; v39 != v41; v43[3].m128i_i64[1] = v54 )
      {
        v42 = _mm_loadu_si128(v41 + 1);
        v43 = (__m128i *)&v41[-4];
        v44 = _mm_loadu_si128(v41 + 2);
        v45 = _mm_loadu_si128(v41 + 3);
        v46 = v41->m128i_i64[0];
        v47 = v41[-4].m128i_u64[0];
        v68.m128i_i64[1] = _mm_loadu_si128(v41).m128i_i64[1];
        v69 = v42;
        v70 = v44;
        v71 = v45;
        if ( v47 > v46 )
        {
          while ( 1 )
          {
            v43[4].m128i_i64[0] = v47;
            v48 = _mm_loadu_si128((const __m128i *)&v43->m128i_u64[1]);
            v49 = _mm_loadu_si128((__m128i *)((char *)v43 + 24));
            v50 = _mm_loadu_si128((__m128i *)((char *)v43 + 40));
            v43[7].m128i_i64[1] = v43[3].m128i_i64[1];
            v47 = v43[-4].m128i_u64[0];
            *(__m128i *)((char *)v43 + 72) = v48;
            *(__m128i *)((char *)v43 + 88) = v49;
            *(__m128i *)((char *)v43 + 104) = v50;
            if ( v46 >= v47 )
              break;
            v43 -= 4;
          }
        }
        else
        {
          v43 = (__m128i *)v41;
        }
        v51 = _mm_loadu_si128((const __m128i *)&v68.m128i_u64[1]);
        v52 = _mm_loadu_si128((const __m128i *)&v69.m128i_u64[1]);
        v41 += 4;
        v43->m128i_i64[0] = v46;
        v53 = _mm_loadu_si128((const __m128i *)&v70.m128i_u64[1]);
        v54 = v71.m128i_i64[1];
        *(__m128i *)((char *)v43 + 8) = v51;
        *(__m128i *)((char *)v43 + 24) = v52;
        *(__m128i *)((char *)v43 + 40) = v53;
      }
    }
  }
}

