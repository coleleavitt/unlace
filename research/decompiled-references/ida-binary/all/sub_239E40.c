unsigned __int64 __fastcall sub_239E40(
        _QWORD *a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        size_t a13,
        __int64 a14)
{
  unsigned __int64 v15; // rcx
  const char *v16; // r13
  size_t v17; // rax
  size_t v18; // r14
  size_t v19; // rbp
  __int128 v20; // rax
  const char *v21; // rsi
  unsigned __int64 v22; // rdi
  __m128i v23; // xmm0
  const char *v24; // rsi
  char v25; // al
  unsigned __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // rbp
  __int64 *v29; // rdx
  __int64 v30; // rax
  size_t v31; // rax
  size_t v32; // r14
  size_t v33; // rbp
  __int64 v34; // rcx
  size_t v35; // rbp
  __int64 v36; // r12
  const char *v37; // r14
  __int64 v38; // r15
  const char *v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  void *v44; // r14
  __m128i v45; // xmm0
  char *v46; // rax
  __int64 v47; // rbp
  __int64 v48; // rbx
  __int64 *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // rax
  __int128 v53; // xmm0
  unsigned __int64 v54; // r12
  unsigned __int64 v55; // r12
  __int64 v56; // rdx
  const void **v57; // rbp
  size_t v58; // r15
  __int64 v59; // rdi
  void *v60; // rax
  char *v61; // rax
  __m128i v62; // [rsp+0h] [rbp-88h] BYREF
  const char *v63; // [rsp+10h] [rbp-78h] BYREF
  __int128 v64; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v67; // [rsp+48h] [rbp-40h]

  v15 = a1[4];
  v67 = __readfsqword(0x28u);
  v16 = a2;
  v64 = 0;
  v63 = nullptr;
  if ( v15 )
  {
    v62.m128i_i64[0] = v15;
    v51 = 0;
    v52 = qalloc_or_throw(24 * v15);
    v15 = v62.m128i_i64[0];
    v53 = 0;
    v63 = (const char *)v52;
    v54 = v52;
    *((_QWORD *)&v64 + 1) = v62.m128i_i64[0];
    while ( 1 )
    {
      v55 = 24 * v51 + v54;
      v56 = a1[3] + 24 * v51;
      *(_QWORD *)v55 = 0;
      v57 = (const void **)v56;
      *(_OWORD *)(v55 + 8) = v53;
      v58 = *(_QWORD *)(v56 + 8);
      if ( v58 )
      {
        v59 = *(_QWORD *)(v56 + 8);
        v62.m128i_i64[0] = v15;
        ++v51;
        v60 = (void *)qalloc_or_throw(v59);
        *(_QWORD *)(v55 + 16) = v58;
        *(_QWORD *)v55 = v60;
        memcpy(v60, *v57, v58);
        v15 = v62.m128i_i64[0];
        *(_QWORD *)(v55 + 8) = v58;
        v53 = 0;
        if ( v15 == v51 )
        {
LABEL_49:
          *(_QWORD *)&v64 = v15;
          break;
        }
      }
      else if ( v15 == ++v51 )
      {
        goto LABEL_49;
      }
      v54 = (unsigned __int64)v63;
    }
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( a2 )
  {
    v17 = strlen(a2);
    v18 = v17 + 1;
    v19 = v17;
    src = (void *)qvector_reserve(&src, 0, v17 + 1, 1);
    n[0] = v18;
    memmove(src, a2, v19);
    *((_BYTE *)src + v19) = 0;
  }
  v20 = v64;
  v21 = v63;
  v22 = v64 + 1;
  if ( &src >= (void **)v63 && (v15 = (unsigned __int64)&v63[24 * *((_QWORD *)&v64 + 1)], (unsigned __int64)&src < v15) )
  {
    a5 = 0;
    v44 = src;
    v45 = _mm_loadl_epi64((const __m128i *)n);
    src = nullptr;
    a4 = (__m128)_mm_loadl_epi64((const __m128i *)&n[1]);
    *(_OWORD *)n = 0;
    if ( *((_QWORD *)&v64 + 1) < v22 )
    {
      v62.m128i_i64[1] = a4.m128_u64[0];
      v62.m128i_i64[0] = v45.m128i_i64[0];
      v63 = (const char *)qvector_reserve(&v63, v63, v64 + 1, 24);
      v21 = v63;
      a4 = (__m128)_mm_loadl_epi64((const __m128i *)&v62.m128i_u64[1]);
      *(_QWORD *)&v20 = v64;
      v45 = _mm_loadl_epi64(&v62);
    }
    v23 = _mm_unpacklo_epi64(v45, (__m128i)a4);
    v46 = (char *)&v21[24 * v20];
    *(_QWORD *)v46 = v44;
    *(__m128i *)(v46 + 8) = v23;
    *(_QWORD *)&v64 = v64 + 1;
    if ( src )
    {
      n[0] = 0;
      *(double *)v23.m128i_i64 = qfree(src, v21, *((_QWORD *)&v20 + 1));
    }
  }
  else
  {
    if ( *((_QWORD *)&v64 + 1) < v22 )
    {
      v63 = (const char *)qvector_reserve(&v63, v63, v64 + 1, 24);
      v21 = v63;
      *(_QWORD *)&v20 = v64;
    }
    *((_QWORD *)&v20 + 1) = src;
    v23 = _mm_loadu_si128((const __m128i *)n);
    *(_QWORD *)&v20 = &v21[24 * v20];
    *(_QWORD *)v20 = src;
    *(__m128i *)(v20 + 8) = v23;
    *(_QWORD *)&v64 = v64 + 1;
  }
  v24 = nullptr;
  v25 = sub_22E6D0(
          (__int64 *)&v63,
          nullptr,
          *(double *)v23.m128i_i64,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          *((__int64 *)&v20 + 1),
          v15,
          a13,
          a14);
  v26 = (unsigned __int64)v63;
  if ( !v25 )
  {
    if ( v63 )
    {
      v47 = v64;
      if ( (_QWORD)v64 )
      {
        v48 = 0;
        do
        {
          v49 = (__int64 *)(v26 + 24 * v48);
          v50 = *v49;
          if ( *v49 )
          {
            v49[1] = 0;
            qfree(v50, nullptr);
            v26 = (unsigned __int64)v63;
          }
          ++v48;
        }
        while ( v47 != v48 );
      }
      *(_QWORD *)&v64 = 0;
      qfree(v26, nullptr);
    }
    return v67 - __readfsqword(0x28u);
  }
  if ( v63 )
  {
    v27 = v64;
    if ( (_QWORD)v64 )
    {
      v28 = 0;
      do
      {
        v29 = (__int64 *)(v26 + 24 * v28);
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          qfree(v30, nullptr);
          v26 = (unsigned __int64)v63;
        }
        ++v28;
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v64 = 0;
    qfree(v26, nullptr);
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v16 )
  {
    v31 = strlen(v16);
    v32 = v31 + 1;
    v33 = v31;
    v24 = v16;
    src = (void *)qvector_reserve(&src, 0, v31 + 1, 1);
    n[0] = v32;
    memmove(src, v16, v33);
    *((_BYTE *)src + v33) = 0;
    v34 = a1[3];
    v35 = n[0];
    v62.m128i_i64[1] = a1[4];
    v36 = v34 + 24 * v62.m128i_i64[1];
    v62.m128i_i64[0] = v34;
    if ( v34 == v36 )
      goto LABEL_54;
  }
  else
  {
    v40 = a1[3];
    v35 = 0;
    v62.m128i_i64[1] = a1[4];
    v36 = v40 + 24 * v62.m128i_i64[1];
    v62.m128i_i64[0] = v40;
    if ( v40 == v36 )
      goto LABEL_28;
  }
  v37 = (const char *)src;
  v38 = v62.m128i_i64[0];
  while ( 1 )
  {
    if ( *(_QWORD *)(v38 + 8) )
    {
      v24 = *(const char **)v38;
      v39 = &s1;
      if ( !v35 )
        goto LABEL_21;
    }
    else
    {
      if ( !v35 )
      {
        if ( v38 != v36 )
          goto LABEL_30;
        goto LABEL_51;
      }
      v24 = &s1;
    }
    v39 = v37;
LABEL_21:
    if ( !strcmp(v39, v24) )
      break;
    v38 += 24;
    if ( v38 == v36 )
      goto LABEL_54;
  }
  if ( v38 != v36 )
    goto LABEL_30;
LABEL_54:
  if ( !v35 )
  {
LABEL_51:
    v16 = nullptr;
    v41 = v62.m128i_i64[1] + 1;
    if ( a1[5] >= (unsigned __int64)(v62.m128i_i64[1] + 1) )
      goto LABEL_29;
LABEL_52:
    v24 = (const char *)v62.m128i_i64[0];
    v62.m128i_i64[0] = qvector_reserve(a1 + 3, v62.m128i_i64[0], v41, 24);
    a1[3] = v62.m128i_i64[0];
    v62.m128i_i64[1] = a1[4];
    goto LABEL_29;
  }
  v61 = (char *)qalloc_or_throw(v35);
  v24 = (const char *)src;
  v16 = v61;
  memcpy(v61, src, v35);
  v62 = *(__m128i *)(a1 + 3);
LABEL_28:
  v41 = v62.m128i_i64[1] + 1;
  if ( a1[5] < (unsigned __int64)(v62.m128i_i64[1] + 1) )
    goto LABEL_52;
LABEL_29:
  v42 = v62.m128i_i64[0] + 24 * v62.m128i_i64[1];
  *(_QWORD *)v42 = v16;
  *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v35);
  v37 = (const char *)src;
  ++a1[4];
LABEL_30:
  if ( v37 )
  {
    n[0] = 0;
    qfree(v37, v24);
  }
  return v67 - __readfsqword(0x28u);
}
