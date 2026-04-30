__int64 __fastcall sub_213340(unsigned int a1, __int64 *a2)
{
  const char *v3; // rsi
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  unsigned __int64 v8; // r12
  const char *v9; // rsi
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm1
  __m128i v12; // xmm1
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  _QWORD *v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rdi
  const __m128i *v19; // r14
  size_t v20; // r12
  __int16 v21; // ax
  __int64 v22; // r13
  __m128i v23; // xmm0
  const char *v24; // rsi
  __int16 v25; // ax
  __int16 v26; // r9
  __int64 v27; // rax
  char *v28; // rax
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  size_t v31; // rbp
  void *v32; // rax
  const void *v33; // rsi
  void *v34; // rax
  const void *v35; // rsi
  __int16 v36; // ax
  __m128i v37; // xmm0
  __int64 v38; // rax
  __m128i v39; // xmm1
  __int64 v40; // rdx
  __int64 v41; // rax
  void *src; // [rsp+8h] [rbp-110h]
  void *v43; // [rsp+10h] [rbp-108h]
  void *v44; // [rsp+18h] [rbp-100h]
  void *v45; // [rsp+20h] [rbp-F8h]
  char v46; // [rsp+2Ch] [rbp-ECh]
  __int16 v47; // [rsp+2Ch] [rbp-ECh]
  char v48; // [rsp+2Fh] [rbp-E9h]
  __m128i v49; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-D8h]
  __int128 v51; // [rsp+48h] [rbp-D0h]
  __int64 v52; // [rsp+58h] [rbp-C0h]
  __int128 v53; // [rsp+60h] [rbp-B8h]
  __int128 v54; // [rsp+70h] [rbp-A8h]
  __m128i v55; // [rsp+80h] [rbp-98h] BYREF
  __int64 v56; // [rsp+90h] [rbp-88h]
  __int128 v57; // [rsp+98h] [rbp-80h]
  __int64 v58; // [rsp+A8h] [rbp-70h]
  __int128 v59; // [rsp+B0h] [rbp-68h]
  __int64 v60; // [rsp+C0h] [rbp-58h]
  __int16 v61; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v62; // [rsp+D8h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v3 = (const char *)a1;
  v4 = sub_20F460((__int64)qword_8CBAA0, a1);
  v5 = *(_QWORD *)(v4 + 24);
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
    return 0;
  v8 = a2[1];
  if ( v6 != v8 )
  {
    v50 = 0;
    v54 = 0;
    v52 = 0;
    v49 = 0;
    v51 = 0;
    v53 = 0;
    if ( v6 < v8 )
    {
      v15 = v6;
      do
      {
        v16 = (_QWORD *)(*a2 + 80 * v15);
        v17 = v16[5];
        if ( v17 )
        {
          v16[6] = 0;
          qfree(v17, v3);
        }
        v18 = v16[2];
        if ( v18 )
        {
          v16[3] = 0;
          qfree(v18, v3);
        }
        ++v15;
      }
      while ( v15 < v8 );
    }
    else
    {
      v9 = (const char *)*a2;
      v10 = a2[2];
      if ( (unsigned __int64)&v49 >= *a2 && &v49 < (__m128i *)&v9[80 * v10] )
      {
        v11 = _mm_load_si128(&v49);
        v56 = 0;
        v58 = 0;
        v60 = 0;
        v61 = 0;
        v55 = v11;
        v57 = 0;
        v59 = 0;
        if ( v10 < v6 )
        {
          *a2 = qvector_reserve(a2, v9, v6, 80);
          v8 = a2[1];
        }
        if ( v8 < v6 )
        {
          v12 = _mm_load_si128(&v55);
          v13 = 80 * v8;
          do
          {
            v9 = nullptr;
            ++v8;
            v14 = v13 + *a2;
            v13 += 80;
            *(_QWORD *)(v14 + 16) = 0;
            *(_QWORD *)(v14 + 40) = 0;
            *(_QWORD *)(v14 + 64) = 0;
            *(_WORD *)(v14 + 72) = 0;
            *(__m128i *)v14 = v12;
            *(_OWORD *)(v14 + 24) = 0;
            *(_OWORD *)(v14 + 48) = 0;
          }
          while ( v6 != v8 );
        }
        a2[1] = v6;
        sub_20E790(&v55, v9);
        goto LABEL_21;
      }
      if ( v10 < v6 )
      {
        *a2 = qvector_reserve(a2, v9, v6, 80);
        v8 = a2[1];
      }
      if ( v8 < v6 )
      {
        v39 = _mm_load_si128(&v49);
        v40 = 80 * v8;
        do
        {
          ++v8;
          v41 = v40 + *a2;
          v40 += 80;
          *(_QWORD *)(v41 + 16) = 0;
          *(_QWORD *)(v41 + 40) = 0;
          *(_QWORD *)(v41 + 64) = 0;
          *(_WORD *)(v41 + 72) = 0;
          *(__m128i *)v41 = v39;
          *(_OWORD *)(v41 + 24) = 0;
          *(_OWORD *)(v41 + 48) = 0;
        }
        while ( v6 != v8 );
      }
    }
    a2[1] = v6;
LABEL_21:
    v5 = *(_QWORD *)(v4 + 24);
    v8 = *(_QWORD *)(v5 + 8);
  }
  v19 = *(const __m128i **)v5;
  if ( 80 * v8 )
  {
    do
    {
      v30 = _mm_loadu_si128(v19);
      v31 = v19[1].m128i_u64[1];
      *((_QWORD *)&v51 + 1) = 0;
      v43 = nullptr;
      v49 = v30;
      if ( v31 )
      {
        v32 = (void *)qalloc_or_throw(v31);
        v33 = (const void *)v19[1].m128i_i64[0];
        *((_QWORD *)&v51 + 1) = v31;
        v43 = v32;
        memcpy(v32, v33, v31);
      }
      *((_QWORD *)&v53 + 1) = 0;
      v20 = v19[3].m128i_u64[0];
      if ( v20 )
      {
        v34 = (void *)qalloc_or_throw(v19[3].m128i_i64[0]);
        v35 = (const void *)v19[2].m128i_i64[1];
        src = v34;
        *((_QWORD *)&v53 + 1) = v20;
        memcpy(v34, v35, v20);
        v36 = v19[4].m128i_i16[4];
        v22 = v19[4].m128i_i64[0];
        v37 = _mm_load_si128(&v49);
        *(_QWORD *)&v54 = v22;
        v46 = HIBYTE(v36);
        v48 = v36;
        WORD4(v54) = v36;
        v55 = v37;
        if ( v31 )
        {
          v44 = (void *)qalloc_or_throw(v31);
          memcpy(v44, v43, v31);
        }
        else
        {
          v44 = nullptr;
        }
        v45 = (void *)qalloc_or_throw(v20);
        memcpy(v45, src, v20);
      }
      else
      {
        v21 = v19[4].m128i_i16[4];
        v22 = v19[4].m128i_i64[0];
        v23 = _mm_load_si128(&v49);
        *(_QWORD *)&v54 = v22;
        v46 = HIBYTE(v21);
        v48 = v21;
        WORD4(v54) = v21;
        v55 = v23;
        if ( v31 )
        {
          v44 = (void *)qalloc_or_throw(v31);
          memcpy(v44, v43, v31);
          src = nullptr;
        }
        else
        {
          src = nullptr;
          v44 = nullptr;
        }
        v45 = nullptr;
      }
      v24 = (const char *)*a2;
      v60 = v22;
      LOBYTE(v25) = v48;
      HIBYTE(v25) = v46;
      v61 = v25;
      v26 = v25;
      v27 = a2[1];
      if ( a2[2] < (unsigned __int64)(v27 + 1) )
      {
        v47 = v26;
        v38 = qvector_reserve(a2, v24, v27 + 1, 80);
        *a2 = v38;
        v24 = (const char *)v38;
        v26 = v47;
        v27 = a2[1];
      }
      v28 = (char *)&v24[80 * v27];
      *(__m128i *)v28 = _mm_load_si128(&v55);
      *((_QWORD *)v28 + 2) = v44;
      *(__m128i *)(v28 + 24) = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
      v29 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
      *((_QWORD *)v28 + 5) = v45;
      *((_QWORD *)v28 + 8) = v22;
      *((_WORD *)v28 + 36) = v26;
      *((__m128i *)v28 + 3) = v29;
      ++a2[1];
      if ( src )
        *(double *)v29.m128i_i64 = qfree(src, v24);
      if ( v43 )
        qfree(v43, v24, *(double *)v29.m128i_i64);
      v19 += 5;
    }
    while ( v19 != (const __m128i *)(**(_QWORD **)(v4 + 24) + 80LL * *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL)) );
  }
  return 0;
}
