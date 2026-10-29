unsigned __int64 __fastcall sub_448890(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // r14
  size_t v5; // r13
  int v6; // edx
  const char *v7; // r15
  const char *v8; // rcx
  const char *v9; // rsi
  void *v11; // rax
  const void *v12; // rsi
  const char *v13; // rax
  QT::QAbstractItemView *v14; // rdi
  const char *v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rbp
  __m128i v18; // xmm2
  size_t v19; // rcx
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  const char *v23; // rsi
  _BYTE *v24; // rax
  char v25; // al
  size_t v26; // r12
  size_t v27; // rcx
  __m128i v28; // xmm0
  void *v29; // rax
  void *v30; // rax
  void *v31; // rax
  const char *p_src; // rsi
  void *v33; // rax
  const char *v34; // rdx
  __int64 v35; // [rsp+18h] [rbp-170h]
  size_t n; // [rsp+28h] [rbp-160h] BYREF
  __m128i v37; // [rsp+30h] [rbp-158h] BYREF
  __m128i v38; // [rsp+40h] [rbp-148h] BYREF
  __int64 *v39; // [rsp+58h] [rbp-130h] BYREF
  const char *v40; // [rsp+60h] [rbp-128h] BYREF
  __int128 v41; // [rsp+68h] [rbp-120h]
  void *v42; // [rsp+80h] [rbp-108h] BYREF
  size_t v43; // [rsp+88h] [rbp-100h]
  const char *v44; // [rsp+A0h] [rbp-E8h] BYREF
  size_t v45; // [rsp+A8h] [rbp-E0h]
  size_t v46; // [rsp+B0h] [rbp-D8h]
  int v47; // [rsp+B8h] [rbp-D0h]
  size_t v48; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i v49; // [rsp+C8h] [rbp-C0h]
  __m128i si128; // [rsp+D8h] [rbp-B0h]
  __int64 v51; // [rsp+E8h] [rbp-A0h]
  void *src; // [rsp+F0h] [rbp-98h] BYREF
  __int128 v53; // [rsp+F8h] [rbp-90h]
  __m128i v54; // [rsp+118h] [rbp-70h] BYREF
  __m128i v55; // [rsp+130h] [rbp-58h] BYREF
  unsigned __int64 v56; // [rsp+148h] [rbp-40h]

  v3 = (_QWORD *)a1[27];
  v56 = __readfsqword(0x28u);
  if ( !v3 )
    v3 = (_QWORD *)a1[26];
  v46 = 0;
  v5 = *(_QWORD *)(a2 + 32);
  if ( v5 )
  {
    v11 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 32));
    v12 = *(const void **)(a2 + 24);
    v46 = v5;
    v13 = (const char *)memcpy(v11, v12, v5);
    v6 = *(_DWORD *)(a2 + 84);
    v40 = nullptr;
    v8 = v13;
    v41 = 0;
    v7 = v13;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 84);
    v7 = nullptr;
    v40 = nullptr;
    v41 = 0;
    v8 = &s1;
  }
  v47 = v6;
  sub_169A50((__int64 *)&v40, (__int64)"/%d@%s", v6, v8);
  v9 = &s1;
  if ( (_QWORD)v41 )
    v9 = v40;
  if ( (unsigned __int8)dirtree_mkdir(*v3, v9) )
    goto LABEL_8;
  v14 = (QT::QAbstractItemView *)a1[39];
  v15 = (const char *)&v39;
  v44 = v7;
  v45 = v5;
  v16 = sub_4482D0(v14, (const char *)&v39, (__int64)&v44);
  if ( v16 )
  {
    v34 = &s1;
    if ( (_QWORD)v41 )
      v34 = v40;
    v9 = "Failed to retrieve worklist files for %s";
    sub_416980(v16, (__int64)"Failed to retrieve worklist files for %s", v34);
LABEL_8:
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree(v40, v9);
    }
    if ( v7 )
      qfree(v7, v9);
    return v56 - __readfsqword(0x28u);
  }
  v17 = *v39;
  v35 = *v39 + 88 * v39[1];
  if ( v35 != *v39 )
  {
    do
    {
      v44 = v7;
      v45 = v5;
      sub_445930((__int64)&v42, (__int64)a1, (__int64)&v44, v17 + 48);
      v23 = nullptr;
      v53 = 0;
      src = nullptr;
      v24 = (_BYTE *)qvector_reserve(&src, 0, 1, 1);
      *(_QWORD *)&v53 = 1;
      src = v24;
      *v24 = 0;
      v48 = 0;
      v49 = 0;
      if ( (_QWORD)v53 )
      {
        n = v53;
        v29 = (void *)qalloc_or_throw(v53);
        v23 = (const char *)src;
        v48 = (size_t)v29;
        v49.m128i_i64[1] = n;
        memcpy(v29, src, n);
        v49.m128i_i64[0] = n;
      }
      v51 = -1;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
      if ( src )
      {
        *(_QWORD *)&v53 = 0;
        qfree(src, v23);
      }
      p_src = (const char *)&src;
      v25 = sub_445AD0(a1, (const char *)&src, (__int64)&v44, v17 + 48);
      v26 = v43;
      if ( v25 )
      {
        v18 = _mm_loadl_epi64(&v55);
        v19 = 0;
        v20 = _mm_loadl_epi64(&v54);
        if ( v43 )
        {
          v37.m128i_i64[0] = v20.m128i_i64[0];
          n = v18.m128i_i64[0];
          v31 = (void *)qalloc_or_throw(v43);
          p_src = (const char *)v42;
          v33 = memcpy(v31, v42, v26);
          v20 = _mm_loadl_epi64(&v37);
          v18 = _mm_loadl_epi64((const __m128i *)&n);
          v19 = (size_t)v33;
        }
        v21 = _mm_unpacklo_epi64(v20, v18);
        v22 = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
        if ( v48 )
        {
          n = v19;
          v38 = v21;
          v37 = v22;
          v49.m128i_i64[0] = 0;
          qfree(v48, p_src);
          v21 = _mm_load_si128(&v38);
          v22 = _mm_load_si128(&v37);
          v19 = n;
        }
        v48 = v19;
        v51 = -1;
        v49 = v22;
        si128 = v21;
      }
      else
      {
        v27 = 0;
        if ( v43 )
        {
          v30 = (void *)qalloc_or_throw(v43);
          p_src = (const char *)v42;
          v27 = (size_t)memcpy(v30, v42, v26);
        }
        v28 = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
        if ( v48 )
        {
          n = v27;
          v37 = v28;
          v49.m128i_i64[0] = 0;
          qfree(v48, p_src);
          v28 = _mm_load_si128(&v37);
          v27 = n;
        }
        v48 = v27;
        v51 = -1;
        v49 = v28;
        si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
      }
      sub_42E200(a1, (const char *)&v48);
      v15 = &s1;
      if ( v43 )
        v15 = (const char *)v42;
      dirtree_link(*v3, v15, 1);
      if ( v48 )
      {
        v49.m128i_i64[0] = 0;
        qfree(v48, v15);
      }
      if ( v42 )
      {
        v43 = 0;
        qfree(v42, v15);
      }
      v17 += 88;
    }
    while ( v17 != v35 );
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, v15);
  }
  if ( v7 )
    qfree(v7, v15);
  return v56 - __readfsqword(0x28u);
}
