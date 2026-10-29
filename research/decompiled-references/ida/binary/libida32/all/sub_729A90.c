__int64 __fastcall sub_729A90(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(),
        __int64 a6,
        __int64 a7)
{
  const char *v10; // r8
  __int64 v11; // rax
  void **v12; // rbp
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  const char *v16; // rsi
  __int64 v17; // rax
  unsigned int inited; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char *v21; // rdi
  unsigned int v22; // r12d
  void *v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rbx
  char *v26; // rdx
  void *v27; // rax
  size_t v29; // rbp
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __m128i v32; // xmm0
  char *v33; // rax
  const char *v34; // rax
  void *v35; // rbp
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  char *v38; // rax
  void *v39; // rdi
  __m128i v41; // [rsp+10h] [rbp-20A8h] BYREF
  _BYTE v42[9]; // [rsp+2Fh] [rbp-2089h] BYREF
  __int128 v43; // [rsp+38h] [rbp-2080h]
  void *ptr; // [rsp+50h] [rbp-2068h] BYREF
  __m128i v45; // [rsp+58h] [rbp-2060h] BYREF
  _BYTE v46[4096]; // [rsp+70h] [rbp-2048h] BYREF
  _BYTE v47[4104]; // [rsp+1070h] [rbp-1048h] BYREF
  unsigned __int64 v48; // [rsp+2078h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  if ( !a3 )
    a4 = 0;
  if ( get_file_ext(a1) )
    v10 = (const char *)qstrncpy(v46, a1, 4096);
  else
    v10 = (const char *)set_file_ext(v46, 4096, a1, "cfg");
  memset(v42, 0, sizeof(v42));
  v43 = 0;
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(2758);
    BUG();
  }
  if ( a2 != 2 )
  {
    sub_811EA0(&v42[1], v10);
    v11 = v43;
    goto LABEL_9;
  }
  ptr = nullptr;
  v45 = 0;
  if ( !v10 )
  {
    v31 = 1;
    goto LABEL_43;
  }
  v41.m128i_i64[1] = (__int64)v10;
  v29 = strlen(v10);
  v41.m128i_i64[0] = v29 + 1;
  ptr = (void *)qvector_reserve(&ptr, 0, v29 + 1, 1);
  v45.m128i_i64[0] = v29 + 1;
  memmove(ptr, (const void *)v41.m128i_i64[1], v29);
  *((_BYTE *)ptr + v29) = 0;
  v30 = v43;
  v10 = *(const char **)&v42[1];
  v31 = v43 + 1;
  if ( (unsigned __int64)&ptr < *(_QWORD *)&v42[1]
    || (unsigned __int64)&ptr >= *(_QWORD *)&v42[1] + 24LL * *((_QWORD *)&v43 + 1) )
  {
    if ( *((_QWORD *)&v43 + 1) >= v31 )
    {
LABEL_40:
      v32 = _mm_loadu_si128(&v45);
      v33 = (char *)&v10[24 * v30];
      *(_QWORD *)v33 = ptr;
      *(__m128i *)(v33 + 8) = v32;
      v11 = v43 + 1;
      *(_QWORD *)&v43 = v43 + 1;
      goto LABEL_9;
    }
LABEL_43:
    *(_QWORD *)&v42[1] = qvector_reserve(&v42[1], v10, v31, 24);
    v30 = v43;
    v10 = *(const char **)&v42[1];
    goto LABEL_40;
  }
  v35 = ptr;
  v36 = _mm_loadl_epi64(&v45);
  ptr = nullptr;
  v37 = _mm_loadl_epi64((const __m128i *)&v45.m128i_u64[1]);
  v45 = 0;
  if ( *((_QWORD *)&v43 + 1) < v31 )
  {
    v41.m128i_i64[1] = v37.m128i_i64[0];
    v41.m128i_i64[0] = v36.m128i_i64[0];
    *(_QWORD *)&v42[1] = qvector_reserve(&v42[1], *(_QWORD *)&v42[1], v43 + 1, 24);
    v30 = v43;
    v10 = *(const char **)&v42[1];
    v37 = _mm_loadl_epi64((const __m128i *)&v41.m128i_u64[1]);
    v36 = _mm_loadl_epi64(&v41);
  }
  v38 = (char *)&v10[24 * v30];
  *(_QWORD *)v38 = v35;
  v39 = ptr;
  *(__m128i *)(v38 + 8) = _mm_unpacklo_epi64(v36, v37);
  v11 = v43 + 1;
  *(_QWORD *)&v43 = v43 + 1;
  if ( v39 )
  {
    v45.m128i_i64[0] = 0;
    qfree(v39);
    v11 = v43;
  }
LABEL_9:
  if ( !v11 )
  {
    v23 = *(void **)&v42[1];
    v22 = 0;
    if ( !*(_QWORD *)&v42[1] )
      return v22;
    goto LABEL_33;
  }
  v12 = (void **)sub_7272B0(a6, a7);
  v13 = 0;
  v41.m128i_i8[0] = 1;
  if ( (_QWORD)v43 )
  {
    do
    {
      while ( !(unsigned __int8)qdirname(v47) )
      {
        v14 = v43;
        if ( ++v13 >= (unsigned __int64)v43 )
          goto LABEL_15;
      }
      set_header_path(v47, v41.m128i_i8[0] ^ 1u);
      v14 = v43;
      ++v13;
      v41.m128i_i8[0] = 0;
    }
    while ( v13 < (unsigned __int64)v43 );
LABEL_15:
    if ( v14 )
    {
      v15 = 0;
      do
      {
        v16 = haystack;
        v17 = *(_QWORD *)&v42[1] + 24 * v15;
        if ( *(_QWORD *)(v17 + 8) )
          v16 = *(const char **)v17;
        v41.m128i_i64[0] = (__int64)v16;
        inited = lex_init_file(v12);
        if ( inited )
        {
          v34 = (const char *)qstrerror(inited, v41.m128i_i64[0], v19, v20);
          sub_727620((__int64)v12, (__int64)"%s", v34);
        }
        if ( (debug & 0x80u) != 0 )
          sub_383DA0();
        *(_QWORD *)(sub_780220(v12) + 8) = 0;
        v42[0] = 0;
        while ( (unsigned __int8)sub_728B90(v42, v12, a3, a4, a5) && !v42[0] )
          ;
        ++v15;
      }
      while ( v15 < (unsigned __int64)v43 );
    }
  }
  if ( v12 )
    sub_7275A0(v12);
  v21 = *(char **)&v42[1];
  v22 = v42[0];
  v23 = *(void **)&v42[1];
  if ( *(_QWORD *)&v42[1] )
  {
    v24 = v43;
    if ( (_QWORD)v43 )
    {
      v25 = 0;
      do
      {
        v26 = &v21[24 * v25];
        v27 = *(void **)v26;
        if ( *(_QWORD *)v26 )
        {
          *((_QWORD *)v26 + 1) = 0;
          qfree(v27);
          v21 = *(char **)&v42[1];
        }
        ++v25;
        v23 = v21;
      }
      while ( v24 != v25 );
    }
LABEL_33:
    *(_QWORD *)&v43 = 0;
    qfree(v23);
  }
  return v22;
}

