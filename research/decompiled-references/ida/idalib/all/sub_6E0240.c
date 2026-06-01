__int64 __fastcall sub_6E0240(_QWORD *a1, __int64 *a2, __int64 a3)
{
  _BYTE *v4; // rax
  __int64 v5; // rax
  __m128i v6; // xmm0
  size_t v7; // r13
  size_t v8; // r13
  char *v9; // rsi
  __m128i v10; // xmm0
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
  char *v35; // [rsp+10h] [rbp-1E8h]
  __int64 v37; // [rsp+28h] [rbp-1D0h] BYREF
  void *v38; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v39; // [rsp+38h] [rbp-1C0h]
  void *v40; // [rsp+50h] [rbp-1A8h] BYREF
  __int128 v41; // [rsp+58h] [rbp-1A0h]
  __int128 v42; // [rsp+68h] [rbp-190h]
  __int64 v43; // [rsp+78h] [rbp-180h]
  int v44; // [rsp+80h] [rbp-178h]
  __m128i v45; // [rsp+90h] [rbp-168h] BYREF
  void *v46; // [rsp+A0h] [rbp-158h] BYREF
  size_t v47[2]; // [rsp+A8h] [rbp-150h]
  void *src; // [rsp+B8h] [rbp-140h]
  size_t n[2]; // [rsp+C0h] [rbp-138h]
  __int128 v50; // [rsp+D0h] [rbp-128h] BYREF
  __m128i v51; // [rsp+E8h] [rbp-110h] BYREF
  __m128i v52; // [rsp+F8h] [rbp-100h] BYREF
  __int64 v53; // [rsp+108h] [rbp-F0h]
  __int64 v54; // [rsp+110h] [rbp-E8h]
  char v55; // [rsp+118h] [rbp-E0h]
  _BYTE v56[24]; // [rsp+120h] [rbp-D8h] BYREF
  __m128i v57; // [rsp+138h] [rbp-C0h] BYREF
  void *ptr; // [rsp+148h] [rbp-B0h]
  __m128i v59; // [rsp+150h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+160h] [rbp-98h] BYREF
  __m128i v61; // [rsp+168h] [rbp-90h] BYREF
  __m128i v62; // [rsp+178h] [rbp-80h] BYREF
  __m128i v63; // [rsp+188h] [rbp-70h] BYREF
  __int64 v64; // [rsp+198h] [rbp-60h]
  __int64 v65; // [rsp+1A0h] [rbp-58h]
  char v66; // [rsp+1A8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+1B8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  sub_6D74E0((__int64)&v38, (__int64)a1, a3);
  v41 = 0;
  v42 = 0;
  v40 = nullptr;
  v43 = 0;
  v44 = 1;
  sub_6DA960((__int64)a1, (__int64)&v40, a3);
  v45 = 0;
  *(_OWORD *)v47 = 0;
  *(_OWORD *)n = 0;
  v50 = 0;
  v46 = nullptr;
  src = nullptr;
  v52.m128i_i64[1] = 1;
  LODWORD(v53) = -1;
  v54 = 0;
  v55 = 0;
  v4 = (_BYTE *)qvector_reserve(&v46, 0, 2, 1);
  v47[0] = 2;
  v46 = v4;
  *v4 = 95;
  *((_BYTE *)v46 + 1) = 0;
  *(_QWORD *)v56 = 17;
  copy_tinfo_t(&v50);
  clear_tinfo_t(v56);
  v5 = v42;
  if ( (_QWORD)v42 != 1 )
  {
    v37 = 17;
    *(_DWORD *)&v56[8] = 0;
    *(_QWORD *)v56 = 0;
    *(_DWORD *)&v56[12] = v42;
    copy_tinfo_t(v56);
    create_tinfo(&v50, 11, 11, v56);
    clear_tinfo_t(v56);
    clear_tinfo_t(&v37);
    v5 = v42;
  }
  v6 = _mm_loadl_epi64(&v45);
  v7 = v47[0];
  *(_QWORD *)&v56[16] = 0;
  v45.m128i_i64[1] = 8 * v5;
  *(__m128i *)v56 = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)(8 * v5));
  v57 = 0;
  if ( v47[0] )
  {
    v34 = (void *)qalloc_or_throw(v47[0]);
    v57.m128i_i64[1] = v7;
    *(_QWORD *)&v56[16] = v34;
    memcpy(v34, v46, v7);
    v57.m128i_i64[0] = v7;
  }
  v8 = n[0];
  ptr = nullptr;
  v59 = 0;
  if ( n[0] )
  {
    v33 = (void *)qalloc_or_throw(n[0]);
    v59.m128i_i64[1] = v8;
    ptr = v33;
    memcpy(v33, src, v8);
    v59.m128i_i64[0] = v8;
  }
  v60 = 0;
  copy_tinfo_t(&v60);
  v9 = (char *)v40;
  v10 = _mm_loadu_si128((const __m128i *)((char *)&v50 + 8));
  v64 = v53;
  v61 = v10;
  v11 = _mm_loadu_si128(&v51);
  v65 = v54;
  v62 = v11;
  v12 = _mm_loadu_si128(&v52);
  v66 = v55;
  v13 = v41;
  v63 = v12;
  if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v41 + 1) )
  {
    v40 = (void *)qvector_reserve(&v40, v40, v41 + 1, 144);
    v9 = (char *)v40;
    v13 = v41;
  }
  v14 = &v9[144 * v13];
  *(__m128i *)v14 = _mm_load_si128((const __m128i *)v56);
  v15 = *(_QWORD *)&v56[16];
  v16 = _mm_loadu_si128(&v57);
  *(_QWORD *)&v56[16] = 0;
  *(__m128i *)(v14 + 24) = v16;
  *((_QWORD *)v14 + 2) = v15;
  v17 = _mm_load_si128(&v59);
  v57 = 0;
  v59 = 0;
  *((_QWORD *)v14 + 5) = ptr;
  ptr = nullptr;
  *((_QWORD *)v14 + 8) = 0;
  *((__m128i *)v14 + 3) = v17;
  v35 = v14;
  copy_tinfo_t(v14 + 64);
  v18 = _mm_loadu_si128(&v61);
  v19 = v64;
  *(_QWORD *)&v41 = v41 + 1;
  *(__m128i *)(v35 + 72) = v18;
  v20 = _mm_loadu_si128(&v62);
  *((_QWORD *)v35 + 15) = v19;
  *(__m128i *)(v35 + 88) = v20;
  *(__m128i *)(v35 + 104) = _mm_loadu_si128(&v63);
  *((_QWORD *)v35 + 16) = v65;
  v35[136] = v66;
  clear_tinfo_t(&v60);
  if ( ptr )
  {
    v59.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( *(_QWORD *)&v56[16] )
  {
    v57.m128i_i64[0] = 0;
    qfree(*(void **)&v56[16]);
  }
  v21 = 13;
  v37 = 0;
  if ( HIBYTE(v44) )
    v21 = 29;
  v22 = create_tinfo(&v37, v21, 13, &v40);
  if ( (_BYTE)v22 )
  {
    memset(v56, 0, sizeof(v56));
    sub_35A790((char **)v56);
    if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
      sub_6D4540((__int64)&v37, a3);
    v23 = (char *)haystack;
    if ( *(_QWORD *)&v56[8] )
      v23 = *(char **)v56;
    sub_6DF2F0((__int64)a1, &v37, 1, nullptr, v23, a3, 0);
    if ( a2 )
    {
      v24 = v37;
      v37 = *a2;
      *a2 = v24;
    }
    if ( *(_QWORD *)v56 )
    {
      *(_QWORD *)&v56[8] = 0;
      qfree(*(void **)v56);
    }
  }
  else
  {
    v32 = haystack;
    if ( v39 )
      v32 = (const char *)v38;
    sub_6DBD10(a1, a3, (__int64)"Could not create tinfo for (lambda at %s)", v32);
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
        v28 = &v25[144 * v27];
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
