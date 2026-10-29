unsigned __int64 __fastcall sub_6BAA90(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  char *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 i; // rbp
  char *v10; // r15
  void *v11; // rdi
  void *v12; // rdi
  char *v13; // rdi
  __int64 v14; // r12
  __int64 j; // r14
  char *v16; // rbp
  void *v17; // rdi
  void *v18; // rdi
  char *v19; // rdi
  __int64 v20; // r12
  __int64 k; // r14
  char *v22; // rbp
  void *v23; // rdi
  void *v24; // rdi
  char *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // r15
  __int64 m; // r14
  char *v29; // rbp
  void *v30; // rdi
  void *v31; // rdi
  __int64 v32; // r14
  __int64 n; // r13
  size_t v34; // rbp
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __int64 v37; // rsi
  int v38; // eax
  __m128i v39; // xmm0
  int v40; // eax
  __m128i v41; // xmm0
  __int64 v42; // rbp
  void *v43; // rax
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  __int64 v46; // rax
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  size_t v49; // rbp
  void *v50; // rax
  __int64 v51; // rax
  __m128i v54; // [rsp+10h] [rbp-D8h] BYREF
  void *v55; // [rsp+20h] [rbp-C8h]
  __m128i v56; // [rsp+28h] [rbp-C0h] BYREF
  void *ptr; // [rsp+38h] [rbp-B0h]
  __m128i v58; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+50h] [rbp-98h] BYREF
  __m128i v60; // [rsp+58h] [rbp-90h] BYREF
  __m128i v61; // [rsp+68h] [rbp-80h] BYREF
  __m128i v62; // [rsp+78h] [rbp-70h] BYREF
  __int64 v63; // [rsp+88h] [rbp-60h]
  __int64 v64; // [rsp+90h] [rbp-58h]
  char v65; // [rsp+98h] [rbp-50h]
  unsigned __int64 v66; // [rsp+A8h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 68) = 0;
  v6 = *(char **)(a1 + 72);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 80);
    if ( v7 )
    {
      v8 = 0;
      for ( i = 0; i != v7; ++i )
      {
        v10 = &v6[v8];
        clear_tinfo_t(&v6[v8 + 64]);
        v11 = *(void **)&v6[v8 + 40];
        if ( v11 )
        {
          *((_QWORD *)v10 + 6) = 0;
          qfree(v11);
        }
        v12 = *((void **)v10 + 2);
        if ( v12 )
        {
          *((_QWORD *)v10 + 3) = 0;
          qfree(v12);
        }
        v6 = *(char **)(a1 + 72);
        v8 += 152;
      }
    }
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v13 = *(char **)(a1 + 96);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 104);
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = &v13[144 * j];
        clear_tinfo_t(v16 + 64);
        v17 = *((void **)v16 + 5);
        if ( v17 )
        {
          *((_QWORD *)v16 + 6) = 0;
          qfree(v17);
        }
        v18 = *((void **)v16 + 2);
        if ( v18 )
        {
          *((_QWORD *)v16 + 3) = 0;
          qfree(v18);
        }
        v13 = *(char **)(a1 + 96);
      }
    }
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = 0;
  }
  v19 = *(char **)(a1 + 120);
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 128);
    if ( v20 )
    {
      for ( k = 0; k != v20; ++k )
      {
        v22 = &v19[64 * k];
        v23 = *((void **)v22 + 3);
        if ( v23 )
        {
          *((_QWORD *)v22 + 4) = 0;
          qfree(v23);
        }
        v24 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          qfree(v24);
        }
        v19 = *(char **)(a1 + 120);
      }
    }
    *(_QWORD *)(a1 + 128) = 0;
    qfree(v19);
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v25 = *(char **)(a1 + 144);
  if ( v25 )
  {
    v26 = *(_QWORD *)(a1 + 152);
    if ( v26 )
    {
      v27 = 0;
      for ( m = 0; m != v26; ++m )
      {
        v29 = &v25[v27];
        v30 = *(void **)&v25[v27 + 24];
        if ( v30 )
        {
          *((_QWORD *)v29 + 4) = 0;
          qfree(v30);
        }
        v31 = *(void **)v29;
        if ( *(_QWORD *)v29 )
        {
          *((_QWORD *)v29 + 1) = 0;
          qfree(v31);
        }
        v25 = *(char **)(a1 + 144);
        v27 += 56;
      }
    }
    *(_QWORD *)(a1 + 152) = 0;
    qfree(v25);
    *(_QWORD *)(a1 + 144) = 0;
    *(_QWORD *)(a1 + 160) = 0;
  }
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 56) = a3;
  sub_5BC010(*(_QWORD **)(a2 + 1672), (char **)(a1 + 32), a3);
  *(_DWORD *)(a1 + 64) = *((_DWORD *)a4 + 11);
  v32 = *a4;
  for ( n = *a4 + 144 * a4[1]; n != v32; v32 += 144 )
  {
    v48 = _mm_loadu_si128((const __m128i *)v32);
    v55 = nullptr;
    v56 = 0;
    v54 = v48;
    v49 = *(_QWORD *)(v32 + 24);
    if ( v49 )
    {
      v50 = (void *)qalloc_or_throw(*(_QWORD *)(v32 + 24));
      v56.m128i_i64[1] = v49;
      v55 = v50;
      memcpy(v50, *(const void **)(v32 + 16), v49);
      v56.m128i_i64[0] = v49;
    }
    ptr = nullptr;
    v58 = 0;
    v34 = *(_QWORD *)(v32 + 48);
    if ( v34 )
    {
      ptr = (void *)qalloc_or_throw(*(_QWORD *)(v32 + 48));
      v58.m128i_i64[1] = v34;
      memcpy(ptr, *(const void **)(v32 + 40), v34);
      v58.m128i_i64[0] = v34;
    }
    v59 = 0;
    copy_tinfo_t(&v59);
    v35 = _mm_loadu_si128((const __m128i *)(v32 + 72));
    v36 = *(_QWORD *)(a1 + 104);
    v37 = *(_QWORD *)(a1 + 96);
    v63 = *(_QWORD *)(v32 + 120);
    v38 = *(_DWORD *)(v32 + 128);
    v60 = v35;
    v39 = _mm_loadu_si128((const __m128i *)(v32 + 88));
    LODWORD(v64) = v38;
    v40 = *(_DWORD *)(v32 + 132);
    v61 = v39;
    v41 = _mm_loadu_si128((const __m128i *)(v32 + 104));
    HIDWORD(v64) = v40;
    LOBYTE(v40) = *(_BYTE *)(v32 + 136);
    v62 = v41;
    v65 = v40;
    if ( *(_QWORD *)(a1 + 112) < (unsigned __int64)(v36 + 1) )
    {
      v51 = qvector_reserve(a1 + 96, v37, v36 + 1, 144);
      *(_QWORD *)(a1 + 96) = v51;
      v36 = *(_QWORD *)(a1 + 104);
      v37 = v51;
    }
    v42 = v37 + 144 * v36;
    *(__m128i *)v42 = _mm_load_si128(&v54);
    v43 = v55;
    v44 = _mm_loadu_si128(&v56);
    *(_QWORD *)(v42 + 64) = 0;
    *(_QWORD *)(v42 + 16) = v43;
    *(__m128i *)(v42 + 24) = v44;
    v45 = _mm_load_si128(&v58);
    v55 = nullptr;
    *(_QWORD *)(v42 + 40) = ptr;
    *(__m128i *)(v42 + 48) = v45;
    ptr = nullptr;
    v56 = 0;
    v58 = 0;
    copy_tinfo_t(v42 + 64);
    v46 = v63;
    *(__m128i *)(v42 + 72) = _mm_loadu_si128(&v60);
    v47 = _mm_loadu_si128(&v61);
    *(_QWORD *)(v42 + 120) = v46;
    *(__m128i *)(v42 + 88) = v47;
    *(__m128i *)(v42 + 104) = _mm_loadu_si128(&v62);
    *(_QWORD *)(v42 + 128) = v64;
    *(_BYTE *)(v42 + 136) = v65;
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
  }
  return v66 - __readfsqword(0x28u);
}
