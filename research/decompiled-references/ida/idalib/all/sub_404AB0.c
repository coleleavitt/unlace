unsigned __int64 __fastcall sub_404AB0(__int64 a1, const char *a2)
{
  char *v3; // rbx
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r13
  const char *i; // rax
  void *v8; // rbx
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  char *v11; // rax
  void *v12; // rdi
  const char *v13; // rbx
  size_t v14; // rax
  __int64 v15; // r13
  size_t v16; // r14
  unsigned __int64 v17; // rdi
  __m128i v18; // xmm0
  char *v19; // rax
  __int64 v20; // rax
  char *v21; // rbp
  char *v22; // rbx
  unsigned __int64 v23; // rbx
  __m128i v24; // xmm4
  void *v25; // r13
  void *v26; // r14
  __m128i v27; // xmm0
  void *v28; // rdi
  void *v29; // rdi
  __m128i v30; // xmm5
  const char *v31; // rbx
  char *v32; // rax
  __int64 v33; // rax
  const char *v34; // rsi
  char *v35; // rdx
  __int64 v36; // rbp
  __int64 v37; // rbx
  char *v38; // rax
  void *v39; // rdi
  char *v41; // rax
  void *v42; // rdi
  char *v43; // rsi
  __int64 v44; // rax
  __m128i v45; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v46; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v47; // [rsp+28h] [rbp-D0h] BYREF
  char v48; // [rsp+38h] [rbp-C0h] BYREF
  void *v49; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+48h] [rbp-B0h]
  void *v51; // [rsp+60h] [rbp-98h] BYREF
  __int128 v52; // [rsp+68h] [rbp-90h]
  void *v53; // [rsp+80h] [rbp-78h] BYREF
  __int128 v54; // [rsp+88h] [rbp-70h]
  void *ptr; // [rsp+A0h] [rbp-58h] BYREF
  __m128i v56; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v57; // [rsp+B8h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v3 = (char *)a2;
  sub_7781C0(&v49, *(_QWORD *)(a1 + 64));
  sub_778740(*(_QWORD *)(a1 + 64), "/");
  v51 = nullptr;
  v52 = 0;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    v51 = (void *)qvector_reserve(&v51, 0, v4 + 1, 1);
    *(_QWORD *)&v52 = v5;
    memmove(v51, a2, v6);
    *((_BYTE *)v51 + v6) = 0;
    v3 = (char *)v51;
  }
  v45.m128i_i64[0] = (__int64)&v48;
  v53 = nullptr;
  v54 = 0;
  for ( i = (const char *)qstrtok(v3, "/"); ; i = (const char *)qstrtok(nullptr, "/") )
  {
    v13 = i;
    if ( !i )
      break;
    ptr = nullptr;
    v56 = 0;
    v14 = strlen(i);
    v15 = v14 + 1;
    v16 = v14;
    ptr = (void *)qvector_reserve(&ptr, 0, v14 + 1, 1);
    v56.m128i_i64[0] = v15;
    memmove(ptr, v13, v16);
    *((_BYTE *)ptr + v16) = 0;
    v44 = v54;
    v43 = (char *)v53;
    v17 = v54 + 1;
    if ( &ptr < v53 || &ptr >= (void **)((char *)v53 + 24 * *((_QWORD *)&v54 + 1)) )
    {
      if ( *((_QWORD *)&v54 + 1) < v17 )
      {
        v53 = (void *)qvector_reserve(&v53, v53, v54 + 1, 24);
        v43 = (char *)v53;
        v44 = v54;
      }
      v18 = _mm_loadu_si128(&v56);
      v19 = &v43[24 * v44];
      *(_QWORD *)v19 = ptr;
      *(__m128i *)(v19 + 8) = v18;
      *(_QWORD *)&v54 = v54 + 1;
    }
    else
    {
      v8 = ptr;
      v9 = _mm_loadl_epi64(&v56);
      ptr = nullptr;
      v10 = _mm_loadl_epi64((const __m128i *)&v56.m128i_u64[1]);
      v56 = 0;
      if ( *((_QWORD *)&v54 + 1) < v17 )
      {
        v47.m128i_i64[0] = v10.m128i_i64[0];
        v46.m128i_i64[0] = v9.m128i_i64[0];
        v53 = (void *)qvector_reserve(&v53, v53, v54 + 1, 24);
        v43 = (char *)v53;
        v10 = _mm_loadl_epi64(&v47);
        v44 = v54;
        v9 = _mm_loadl_epi64(&v46);
      }
      v11 = &v43[24 * v44];
      *(_QWORD *)v11 = v8;
      v12 = ptr;
      *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64(v9, v10);
      *(_QWORD *)&v54 = v54 + 1;
      if ( v12 )
      {
        v56.m128i_i64[0] = 0;
        qfree(v12);
      }
    }
  }
  v20 = v54;
  v21 = (char *)v53;
  v22 = (char *)v53 + 24 * v54;
  if ( v53 != v22 )
  {
    v23 = (unsigned __int64)(v22 - 24);
    if ( (unsigned __int64)v53 < v23 )
    {
      do
      {
        v24 = _mm_loadu_si128((const __m128i *)(v21 + 8));
        v25 = *(void **)v21;
        *(_QWORD *)v21 = 0;
        *(_OWORD *)(v21 + 8) = 0;
        v26 = *(void **)v23;
        v27 = _mm_loadu_si128((const __m128i *)(v23 + 8));
        *(_QWORD *)v23 = 0;
        *(_OWORD *)(v23 + 8) = 0;
        v28 = *(void **)v21;
        v45 = v24;
        if ( v28 )
        {
          *((_QWORD *)v21 + 1) = 0;
          v46 = v27;
          qfree(v28);
          v27 = _mm_load_si128(&v46);
        }
        *(_QWORD *)v21 = v26;
        *(__m128i *)(v21 + 8) = v27;
        v29 = *(void **)v23;
        if ( *(_QWORD *)v23 )
        {
          *(_QWORD *)(v23 + 8) = 0;
          qfree(v29);
        }
        v30 = _mm_load_si128(&v45);
        *(_QWORD *)v23 = v25;
        v21 += 24;
        v23 -= 24LL;
        *(__m128i *)(v23 + 32) = v30;
      }
      while ( (unsigned __int64)v21 < v23 );
      v20 = v54;
    }
  }
  while ( v20 )
  {
    v31 = haystack;
    v32 = (char *)v53 + 24 * v20 - 24;
    if ( *((_QWORD *)v32 + 1) )
      v31 = *(const char **)v32;
    sub_77B570(*(_QWORD *)(a1 + 64), v31, 0);
    if ( (unsigned __int8)sub_778740(*(_QWORD *)(a1 + 64), v31) )
      break;
    v33 = v54;
    if ( !(_QWORD)v54 )
      break;
    *(_QWORD *)&v54 = v54 - 1;
    v41 = (char *)v53 + 24 * v33 - 24;
    v42 = *(void **)v41;
    if ( *(_QWORD *)v41 )
    {
      *((_QWORD *)v41 + 1) = 0;
      qfree(v42);
    }
    v20 = v54;
  }
  v34 = haystack;
  if ( v50 )
    v34 = (const char *)v49;
  sub_778740(*(_QWORD *)(a1 + 64), v34);
  v35 = (char *)v53;
  if ( v53 )
  {
    v36 = v54;
    if ( (_QWORD)v54 )
    {
      v37 = 0;
      do
      {
        v38 = &v35[24 * v37];
        v39 = *(void **)v38;
        if ( *(_QWORD *)v38 )
        {
          *((_QWORD *)v38 + 1) = 0;
          qfree(v39);
          v35 = (char *)v53;
        }
        ++v37;
      }
      while ( v36 != v37 );
    }
    *(_QWORD *)&v54 = 0;
    qfree(v35);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  if ( v49 )
  {
    v50 = 0;
    qfree(v49);
  }
  return v57 - __readfsqword(0x28u);
}
