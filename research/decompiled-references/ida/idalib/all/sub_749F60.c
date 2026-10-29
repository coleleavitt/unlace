__int64 __fastcall sub_749F60(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(),
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const char *v11; // r8
  __int64 v12; // rax
  void *v13; // rbp
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  const char *v17; // rsi
  __int64 v18; // rax
  unsigned int inited; // eax
  char *v20; // rdi
  unsigned int v21; // r12d
  void *v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rbx
  char *v25; // rdx
  void *v26; // rax
  size_t v28; // rbp
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __m128i v31; // xmm0
  char *v32; // rax
  const char *v33; // rax
  void *v34; // rbp
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  char *v37; // rax
  void *v38; // rdi
  __m128i v40; // [rsp+10h] [rbp-20A8h] BYREF
  _BYTE v41[9]; // [rsp+2Fh] [rbp-2089h] BYREF
  __int128 v42; // [rsp+38h] [rbp-2080h]
  void *ptr; // [rsp+50h] [rbp-2068h] BYREF
  __m128i v44; // [rsp+58h] [rbp-2060h] BYREF
  _BYTE v45[4096]; // [rsp+70h] [rbp-2048h] BYREF
  _BYTE v46[4104]; // [rsp+1070h] [rbp-1048h] BYREF
  unsigned __int64 v47; // [rsp+2078h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  if ( !a3 )
    a4 = 0;
  if ( get_file_ext(a1) )
    v11 = (const char *)qstrncpy(v45, a1, 4096);
  else
    v11 = (const char *)set_file_ext(v45, 4096, a1, "cfg");
  memset(v41, 0, sizeof(v41));
  v42 = 0;
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(2758);
    BUG();
  }
  if ( a2 != 2 )
  {
    sub_835260(&v41[1], v11);
    v12 = v42;
    goto LABEL_9;
  }
  ptr = nullptr;
  v44 = 0;
  if ( !v11 )
  {
    v30 = 1;
    goto LABEL_43;
  }
  v40.m128i_i64[1] = (__int64)v11;
  v28 = strlen(v11);
  v40.m128i_i64[0] = v28 + 1;
  ptr = (void *)qvector_reserve(&ptr, 0, v28 + 1, 1);
  v44.m128i_i64[0] = v28 + 1;
  memmove(ptr, (const void *)v40.m128i_i64[1], v28);
  *((_BYTE *)ptr + v28) = 0;
  v29 = v42;
  v11 = *(const char **)&v41[1];
  v30 = v42 + 1;
  if ( (unsigned __int64)&ptr < *(_QWORD *)&v41[1]
    || (unsigned __int64)&ptr >= *(_QWORD *)&v41[1] + 24LL * *((_QWORD *)&v42 + 1) )
  {
    if ( *((_QWORD *)&v42 + 1) >= v30 )
    {
LABEL_40:
      v31 = _mm_loadu_si128(&v44);
      v32 = (char *)&v11[24 * v29];
      *(_QWORD *)v32 = ptr;
      *(__m128i *)(v32 + 8) = v31;
      v12 = v42 + 1;
      *(_QWORD *)&v42 = v42 + 1;
      goto LABEL_9;
    }
LABEL_43:
    *(_QWORD *)&v41[1] = qvector_reserve(&v41[1], v11, v30, 24);
    v29 = v42;
    v11 = *(const char **)&v41[1];
    goto LABEL_40;
  }
  v34 = ptr;
  v35 = _mm_loadl_epi64(&v44);
  ptr = nullptr;
  v36 = _mm_loadl_epi64((const __m128i *)&v44.m128i_u64[1]);
  v44 = 0;
  if ( *((_QWORD *)&v42 + 1) < v30 )
  {
    v40.m128i_i64[1] = v36.m128i_i64[0];
    v40.m128i_i64[0] = v35.m128i_i64[0];
    *(_QWORD *)&v41[1] = qvector_reserve(&v41[1], *(_QWORD *)&v41[1], v42 + 1, 24);
    v29 = v42;
    v11 = *(const char **)&v41[1];
    v36 = _mm_loadl_epi64((const __m128i *)&v40.m128i_u64[1]);
    v35 = _mm_loadl_epi64(&v40);
  }
  v37 = (char *)&v11[24 * v29];
  *(_QWORD *)v37 = v34;
  v38 = ptr;
  *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64(v35, v36);
  v12 = v42 + 1;
  *(_QWORD *)&v42 = v42 + 1;
  if ( v38 )
  {
    v44.m128i_i64[0] = 0;
    qfree(v38);
    v12 = v42;
  }
LABEL_9:
  if ( !v12 )
  {
    v22 = *(void **)&v41[1];
    v21 = 0;
    if ( !*(_QWORD *)&v41[1] )
      return v21;
    goto LABEL_33;
  }
  v13 = (void *)sub_7477F0(a6, a7);
  v14 = 0;
  v40.m128i_i8[0] = 1;
  if ( (_QWORD)v42 )
  {
    do
    {
      while ( !(unsigned __int8)qdirname(v46) )
      {
        v15 = v42;
        if ( ++v14 >= (unsigned __int64)v42 )
          goto LABEL_15;
      }
      set_header_path(v46, v40.m128i_i8[0] ^ 1u);
      v15 = v42;
      ++v14;
      v40.m128i_i8[0] = 0;
    }
    while ( v14 < (unsigned __int64)v42 );
LABEL_15:
    if ( v15 )
    {
      v16 = 0;
      do
      {
        v17 = haystack;
        v18 = *(_QWORD *)&v41[1] + 24 * v16;
        if ( *(_QWORD *)(v18 + 8) )
          v17 = *(const char **)v18;
        v40.m128i_i64[0] = (__int64)v17;
        inited = lex_init_file(v13);
        if ( inited )
        {
          v33 = (const char *)qstrerror(inited);
          sub_747B60((__int64)v13, (__int64)"%s", v33);
        }
        if ( (debug & 0x80u) != 0 )
          sub_3879F0();
        *(_QWORD *)(sub_7A0520(v13) + 8) = 0;
        v41[0] = 0;
        while ( (unsigned __int8)sub_749060(v41, v13, a3, a4, a5, a8) && !v41[0] )
          ;
        ++v16;
      }
      while ( v16 < (unsigned __int64)v42 );
    }
  }
  if ( v13 )
    sub_747AE0(v13);
  v20 = *(char **)&v41[1];
  v21 = v41[0];
  v22 = *(void **)&v41[1];
  if ( *(_QWORD *)&v41[1] )
  {
    v23 = v42;
    if ( (_QWORD)v42 )
    {
      v24 = 0;
      do
      {
        v25 = &v20[24 * v24];
        v26 = *(void **)v25;
        if ( *(_QWORD *)v25 )
        {
          *((_QWORD *)v25 + 1) = 0;
          qfree(v26);
          v20 = *(char **)&v41[1];
        }
        ++v24;
        v22 = v20;
      }
      while ( v23 != v24 );
    }
LABEL_33:
    *(_QWORD *)&v42 = 0;
    qfree(v22);
  }
  return v21;
}
