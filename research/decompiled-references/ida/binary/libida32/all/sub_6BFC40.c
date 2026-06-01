__int64 __fastcall sub_6BFC40(_QWORD *a1, __int64 *a2, __int64 a3)
{
  _BYTE *v4; // rax
  const char *v5; // rsi
  __int64 v6; // rax
  __m128i v7; // xmm0
  size_t v8; // r13
  size_t v9; // r13
  char *v10; // rsi
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __int64 v13; // rax
  char *v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rsi
  unsigned int v22; // r13d
  char *v23; // r8
  __int64 v24; // rdx
  char *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rbp
  char *v28; // rbx
  void *v29; // rdi
  void *v30; // rdi
  const char *v32; // rcx
  void *v33; // rax
  void *v34; // rax
  char *v35; // [rsp+10h] [rbp-1C8h]
  __int64 v37; // [rsp+28h] [rbp-1B0h] BYREF
  void *v38; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v39; // [rsp+38h] [rbp-1A0h]
  void *v40; // [rsp+50h] [rbp-188h] BYREF
  __int128 v41; // [rsp+58h] [rbp-180h]
  __int128 v42; // [rsp+68h] [rbp-170h]
  __int64 v43; // [rsp+78h] [rbp-160h]
  int v44; // [rsp+80h] [rbp-158h]
  __m128i v45; // [rsp+90h] [rbp-148h] BYREF
  void *v46; // [rsp+A0h] [rbp-138h] BYREF
  size_t v47[2]; // [rsp+A8h] [rbp-130h]
  void *src; // [rsp+B8h] [rbp-120h]
  size_t n[2]; // [rsp+C0h] [rbp-118h]
  __int128 v50; // [rsp+D0h] [rbp-108h] BYREF
  __m128i v51; // [rsp+E8h] [rbp-F0h] BYREF
  __int64 v52; // [rsp+F8h] [rbp-E0h]
  __int64 v53; // [rsp+100h] [rbp-D8h]
  char v54; // [rsp+108h] [rbp-D0h]
  _BYTE v55[24]; // [rsp+110h] [rbp-C8h] BYREF
  __m128i v56; // [rsp+128h] [rbp-B0h] BYREF
  void *ptr; // [rsp+138h] [rbp-A0h]
  __m128i v58; // [rsp+140h] [rbp-98h] BYREF
  __int64 v59; // [rsp+150h] [rbp-88h] BYREF
  __m128i v60; // [rsp+158h] [rbp-80h] BYREF
  __m128i v61; // [rsp+168h] [rbp-70h] BYREF
  __int64 v62; // [rsp+178h] [rbp-60h]
  __int64 v63; // [rsp+180h] [rbp-58h]
  char v64; // [rsp+188h] [rbp-50h]
  unsigned __int64 v65; // [rsp+198h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  sub_6B6F00((__int64)&v38, (__int64)a1, a3);
  v41 = 0;
  v42 = 0;
  v40 = nullptr;
  v43 = 0;
  v44 = 1;
  sub_6BA380((__int64)a1, (__int64)&v40, a3);
  v45 = 0;
  *(_OWORD *)v47 = 0;
  *(_OWORD *)n = 0;
  v50 = 0;
  v46 = nullptr;
  src = nullptr;
  v51.m128i_i64[1] = 1;
  LODWORD(v52) = -1;
  v53 = 0;
  v54 = 0;
  v4 = (_BYTE *)qvector_reserve(&v46, 0, 2, 1);
  v5 = v55;
  v47[0] = 2;
  v46 = v4;
  *v4 = 95;
  *((_BYTE *)v46 + 1) = 0;
  *(_QWORD *)v55 = 17;
  copy_tinfo_t(&v50);
  clear_tinfo_t(v55);
  v6 = v42;
  if ( (_QWORD)v42 != 1 )
  {
    v37 = 17;
    *(_DWORD *)&v55[8] = 0;
    *(_QWORD *)v55 = 0;
    *(_DWORD *)&v55[12] = v42;
    copy_tinfo_t(v55);
    v5 = byte_9 + 2;
    create_tinfo(&v50, 11, 11, v55);
    clear_tinfo_t(v55);
    clear_tinfo_t(&v37);
    v6 = v42;
  }
  v7 = _mm_loadl_epi64(&v45);
  v8 = v47[0];
  *(_QWORD *)&v55[16] = 0;
  v45.m128i_i64[1] = 8 * v6;
  *(__m128i *)v55 = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)(8 * v6));
  v56 = 0;
  if ( v47[0] )
  {
    v34 = (void *)qalloc_or_throw(v47[0], v5);
    v5 = (const char *)v46;
    v56.m128i_i64[1] = v8;
    *(_QWORD *)&v55[16] = v34;
    memcpy(v34, v46, v8);
    v56.m128i_i64[0] = v8;
  }
  v9 = n[0];
  ptr = nullptr;
  v58 = 0;
  if ( n[0] )
  {
    v33 = (void *)qalloc_or_throw(n[0], v5);
    v58.m128i_i64[1] = v9;
    ptr = v33;
    memcpy(v33, src, v9);
    v58.m128i_i64[0] = v9;
  }
  v59 = 0;
  copy_tinfo_t(&v59);
  v10 = (char *)v40;
  v11 = _mm_loadu_si128((const __m128i *)((char *)&v50 + 8));
  v62 = v52;
  v60 = v11;
  v12 = _mm_loadu_si128(&v51);
  v63 = v53;
  v61 = v12;
  v64 = v54;
  v13 = v41;
  if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v41 + 1) )
  {
    v40 = (void *)qvector_reserve(&v40, v40, v41 + 1, 128);
    v10 = (char *)v40;
    v13 = v41;
  }
  v14 = &v10[128 * v13];
  *(__m128i *)v14 = _mm_load_si128((const __m128i *)v55);
  v15 = *(_QWORD *)&v55[16];
  v16 = _mm_loadu_si128(&v56);
  *(_QWORD *)&v55[16] = 0;
  *(__m128i *)(v14 + 24) = v16;
  *((_QWORD *)v14 + 2) = v15;
  v17 = _mm_load_si128(&v58);
  v56 = 0;
  v58 = 0;
  *((_QWORD *)v14 + 5) = ptr;
  ptr = nullptr;
  *((_QWORD *)v14 + 8) = 0;
  *((__m128i *)v14 + 3) = v17;
  v35 = v14;
  copy_tinfo_t(v14 + 64);
  v18 = _mm_loadu_si128(&v60);
  v19 = v62;
  *(_QWORD *)&v41 = v41 + 1;
  *(__m128i *)(v35 + 72) = v18;
  v20 = _mm_loadu_si128(&v61);
  *((_QWORD *)v35 + 13) = v19;
  *(__m128i *)(v35 + 88) = v20;
  *((_QWORD *)v35 + 14) = v63;
  v35[120] = v64;
  clear_tinfo_t(&v59);
  if ( ptr )
  {
    v58.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( *(_QWORD *)&v55[16] )
  {
    v56.m128i_i64[0] = 0;
    qfree(*(void **)&v55[16]);
  }
  v21 = 13;
  v37 = 0;
  if ( HIBYTE(v44) )
    v21 = 29;
  v22 = create_tinfo(&v37, v21, 13, &v40);
  if ( (_BYTE)v22 )
  {
    memset(v55, 0, sizeof(v55));
    sub_3573A0((char **)v55);
    if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
      sub_6B3FA0((__int64)&v37, a3);
    v23 = (char *)haystack;
    if ( *(_QWORD *)&v55[8] )
      v23 = *(char **)v55;
    sub_6BED00((__int64)a1, &v37, 1, nullptr, v23, a3, 0);
    if ( a2 )
    {
      v24 = v37;
      v37 = *a2;
      *a2 = v24;
    }
    if ( *(_QWORD *)v55 )
    {
      *(_QWORD *)&v55[8] = 0;
      qfree(*(void **)v55);
    }
  }
  else
  {
    v32 = haystack;
    if ( v39 )
      v32 = (const char *)v38;
    sub_6BB730(a1, a3, (__int64)"Could not create tinfo for (lambda at %s)", v32);
  }
  clear_tinfo_t(&v37);
  clear_tinfo_t(&v50);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  if ( v46 )
  {
    v47[0] = 0;
    qfree(v46);
  }
  v25 = (char *)v40;
  if ( v40 )
  {
    v26 = v41;
    if ( (_QWORD)v41 )
    {
      v27 = 0;
      do
      {
        v28 = &v25[128 * v27];
        clear_tinfo_t(v28 + 64);
        v29 = *((void **)v28 + 5);
        if ( v29 )
        {
          *((_QWORD *)v28 + 6) = 0;
          qfree(v29);
        }
        v30 = *((void **)v28 + 2);
        if ( v30 )
        {
          *((_QWORD *)v28 + 3) = 0;
          qfree(v30);
        }
        ++v27;
        v25 = (char *)v40;
      }
      while ( v26 != v27 );
    }
    *(_QWORD *)&v41 = 0;
    qfree(v25);
  }
  if ( v38 )
  {
    v39 = 0;
    qfree(v38);
  }
  return v22;
}

