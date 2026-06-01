unsigned __int64 __fastcall sub_69A110(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  char *v6; // rdi
  __int64 v7; // r13
  __int64 i; // rbx
  char *v9; // r14
  void *v10; // rdi
  void *v11; // rdi
  char *v12; // rdi
  __int64 v13; // r13
  __int64 j; // rbx
  char *v15; // r14
  void *v16; // rdi
  void *v17; // rdi
  char *v18; // rdi
  __int64 v19; // r13
  __int64 k; // r14
  char *v21; // rbx
  void *v22; // rdi
  void *v23; // rdi
  char *v24; // rdi
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 m; // r15
  char *v28; // rbx
  void *v29; // rdi
  void *v30; // rdi
  const char *v31; // rsi
  __int64 v32; // r14
  __int64 v33; // r13
  size_t v34; // rbx
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __int64 v37; // rsi
  int v38; // eax
  __m128i v39; // xmm0
  int v40; // eax
  __int64 v41; // rbx
  void *v42; // rax
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  __int64 v45; // rax
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  size_t v48; // rbx
  void *v49; // rax
  __int64 v50; // rax
  __m128i v54; // [rsp+10h] [rbp-C8h] BYREF
  void *v55; // [rsp+20h] [rbp-B8h]
  __m128i v56; // [rsp+28h] [rbp-B0h] BYREF
  void *ptr; // [rsp+38h] [rbp-A0h]
  __m128i v58; // [rsp+40h] [rbp-98h] BYREF
  __int64 v59; // [rsp+50h] [rbp-88h] BYREF
  __m128i v60; // [rsp+58h] [rbp-80h] BYREF
  __m128i v61; // [rsp+68h] [rbp-70h] BYREF
  __int64 v62; // [rsp+78h] [rbp-60h]
  __int64 v63; // [rsp+80h] [rbp-58h]
  char v64; // [rsp+88h] [rbp-50h]
  unsigned __int64 v65; // [rsp+98h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = 0xFFFFFFFFLL;
  *(_BYTE *)(a1 + 64) = 0;
  v6 = *(char **)(a1 + 72);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 80);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = &v6[128 * i];
        clear_tinfo_t(v9 + 64);
        v10 = *((void **)v9 + 5);
        if ( v10 )
        {
          *((_QWORD *)v9 + 6) = 0;
          qfree(v10);
        }
        v11 = *((void **)v9 + 2);
        if ( v11 )
        {
          *((_QWORD *)v9 + 3) = 0;
          qfree(v11);
        }
        v6 = *(char **)(a1 + 72);
      }
    }
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v12 = *(char **)(a1 + 96);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 104);
    if ( v13 )
    {
      for ( j = 0; j != v13; ++j )
      {
        v15 = &v12[128 * j];
        clear_tinfo_t(v15 + 64);
        v16 = *((void **)v15 + 5);
        if ( v16 )
        {
          *((_QWORD *)v15 + 6) = 0;
          qfree(v16);
        }
        v17 = *((void **)v15 + 2);
        if ( v17 )
        {
          *((_QWORD *)v15 + 3) = 0;
          qfree(v17);
        }
        v12 = *(char **)(a1 + 96);
      }
    }
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v12);
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = 0;
  }
  v18 = *(char **)(a1 + 120);
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 128);
    if ( v19 )
    {
      for ( k = 0; k != v19; ++k )
      {
        v21 = &v18[64 * k];
        v22 = *((void **)v21 + 3);
        if ( v22 )
        {
          *((_QWORD *)v21 + 4) = 0;
          qfree(v22);
        }
        v23 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *((_QWORD *)v21 + 1) = 0;
          qfree(v23);
        }
        v18 = *(char **)(a1 + 120);
      }
    }
    *(_QWORD *)(a1 + 128) = 0;
    qfree(v18);
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v24 = *(char **)(a1 + 144);
  if ( v24 )
  {
    v25 = *(_QWORD *)(a1 + 152);
    if ( v25 )
    {
      v26 = 0;
      for ( m = 0; m != v25; ++m )
      {
        v28 = &v24[v26];
        v29 = *(void **)&v24[v26 + 24];
        if ( v29 )
        {
          *((_QWORD *)v28 + 4) = 0;
          qfree(v29);
        }
        v30 = *(void **)v28;
        if ( *(_QWORD *)v28 )
        {
          *((_QWORD *)v28 + 1) = 0;
          qfree(v30);
        }
        v24 = *(char **)(a1 + 144);
        v26 += 56;
      }
    }
    *(_QWORD *)(a1 + 152) = 0;
    qfree(v24);
    *(_QWORD *)(a1 + 144) = 0;
    *(_QWORD *)(a1 + 160) = 0;
  }
  *(_DWORD *)a1 = 1;
  v31 = (const char *)(a1 + 32);
  *(_DWORD *)(a1 + 56) = a3;
  sub_5A1A70(*(_QWORD **)(a2 + 1480), (char **)(a1 + 32), a3);
  *(_DWORD *)(a1 + 60) = *((_DWORD *)a4 + 11);
  v32 = *a4;
  v33 = *a4 + (a4[1] << 7);
  if ( v33 != *a4 )
  {
    do
    {
      v47 = _mm_loadu_si128((const __m128i *)v32);
      v55 = nullptr;
      v56 = 0;
      v54 = v47;
      v48 = *(_QWORD *)(v32 + 24);
      if ( v48 )
      {
        v49 = (void *)qalloc_or_throw(*(_QWORD *)(v32 + 24), v31);
        v56.m128i_i64[1] = v48;
        v55 = v49;
        v31 = *(const char **)(v32 + 16);
        memcpy(v49, v31, v48);
        v56.m128i_i64[0] = v48;
      }
      ptr = nullptr;
      v58 = 0;
      v34 = *(_QWORD *)(v32 + 48);
      if ( v34 )
      {
        ptr = (void *)qalloc_or_throw(*(_QWORD *)(v32 + 48), v31);
        v58.m128i_i64[1] = v34;
        memcpy(ptr, *(const void **)(v32 + 40), v34);
        v58.m128i_i64[0] = v34;
      }
      v59 = 0;
      copy_tinfo_t(&v59);
      v35 = _mm_loadu_si128((const __m128i *)(v32 + 72));
      v36 = *(_QWORD *)(a1 + 104);
      v37 = *(_QWORD *)(a1 + 96);
      v62 = *(_QWORD *)(v32 + 104);
      v38 = *(_DWORD *)(v32 + 112);
      v60 = v35;
      v39 = _mm_loadu_si128((const __m128i *)(v32 + 88));
      LODWORD(v63) = v38;
      v40 = *(_DWORD *)(v32 + 116);
      v61 = v39;
      HIDWORD(v63) = v40;
      v64 = *(_BYTE *)(v32 + 120);
      if ( *(_QWORD *)(a1 + 112) < (unsigned __int64)(v36 + 1) )
      {
        v50 = qvector_reserve(a1 + 96, v37, v36 + 1, 128);
        *(_QWORD *)(a1 + 96) = v50;
        v36 = *(_QWORD *)(a1 + 104);
        v37 = v50;
      }
      v41 = v37 + (v36 << 7);
      v31 = (const char *)&v59;
      *(__m128i *)v41 = _mm_load_si128(&v54);
      v42 = v55;
      v43 = _mm_loadu_si128(&v56);
      *(_QWORD *)(v41 + 64) = 0;
      *(_QWORD *)(v41 + 16) = v42;
      *(__m128i *)(v41 + 24) = v43;
      v44 = _mm_load_si128(&v58);
      v55 = nullptr;
      *(_QWORD *)(v41 + 40) = ptr;
      *(__m128i *)(v41 + 48) = v44;
      ptr = nullptr;
      v56 = 0;
      v58 = 0;
      copy_tinfo_t(v41 + 64);
      v45 = v62;
      *(__m128i *)(v41 + 72) = _mm_loadu_si128(&v60);
      v46 = _mm_loadu_si128(&v61);
      *(_QWORD *)(v41 + 104) = v45;
      *(__m128i *)(v41 + 88) = v46;
      *(_QWORD *)(v41 + 112) = v63;
      *(_BYTE *)(v41 + 120) = v64;
      ++*(_QWORD *)(a1 + 104);
      clear_tinfo_t(&v59);
      if ( ptr )
      {
        v58.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v55 )
      {
        v56.m128i_i64[0] = 0;
        qfree(v55);
      }
      v32 += 128;
    }
    while ( v33 != v32 );
  }
  return v65 - __readfsqword(0x28u);
}

