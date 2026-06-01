__int64 __fastcall sub_7823E0(_QWORD *a1)
{
  const char *v1; // rbx
  bool v2; // zf
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  int v6; // r15d
  __int64 v7; // rax
  const char *v8; // rdi
  __int64 v9; // rax
  size_t v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  void *v16; // r14
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __int64 v19; // rax
  void *v20; // rdi
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v27; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v1 = haystack;
  v2 = a1[6] == 0;
  v28 = __readfsqword(0x28u);
  if ( !v2 )
    v1 = (const char *)a1[5];
  v4 = a1[18];
  if ( v4 )
  {
    v5 = a1[17];
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = haystack;
      v9 = v5 + 24 * v7;
      if ( *(_QWORD *)(v9 + 8) )
        v8 = *(const char **)v9;
      if ( !strcmp(v8, v1) )
        goto LABEL_9;
      v7 = ++v6;
    }
    while ( v6 < v4 );
  }
  ptr = nullptr;
  v27 = 0;
  if ( v1 )
  {
    v11 = strlen(v1);
    v25.m128i_i64[0] = v11 + 1;
    ptr = (void *)qvector_reserve(&ptr, 0, v11 + 1, 1);
    v27.m128i_i64[0] = v11 + 1;
    memmove(ptr, v1, v11);
    *((_BYTE *)ptr + v11) = 0;
    v12 = a1[18];
  }
  else
  {
    v12 = v4;
  }
  v13 = a1[17];
  v14 = a1[19];
  v15 = v12 + 1;
  if ( (unsigned __int64)&ptr < v13 || (unsigned __int64)&ptr >= v13 + 24 * v14 )
  {
    if ( v14 < v15 )
    {
      v23 = qvector_reserve(a1 + 17, v13, v12 + 1, 24);
      a1[17] = v23;
      v13 = v23;
      v12 = a1[18];
    }
    v21 = _mm_loadu_si128(&v27);
    v22 = v13 + 24 * v12;
    *(_QWORD *)v22 = ptr;
    *(__m128i *)(v22 + 8) = v21;
    ++a1[18];
  }
  else
  {
    v16 = ptr;
    v17 = _mm_loadl_epi64(&v27);
    ptr = nullptr;
    v18 = _mm_loadl_epi64((const __m128i *)&v27.m128i_u64[1]);
    v27 = 0;
    if ( v14 < v15 )
    {
      v25.m128i_i64[1] = v18.m128i_i64[0];
      v25.m128i_i64[0] = v17.m128i_i64[0];
      v24 = qvector_reserve(a1 + 17, v13, v12 + 1, 24);
      a1[17] = v24;
      v13 = v24;
      v18 = _mm_loadl_epi64((const __m128i *)&v25.m128i_u64[1]);
      v12 = a1[18];
      v17 = _mm_loadl_epi64(&v25);
    }
    v19 = v13 + 24 * v12;
    *(_QWORD *)v19 = v16;
    v20 = ptr;
    *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v17, v18);
    ++a1[18];
    if ( v20 )
    {
      v27.m128i_i64[0] = 0;
      qfree(v20);
    }
  }
  if ( v4 == -1 )
  {
LABEL_9:
    set_error_string(0, v1);
    return set_qerrno(52);
  }
  return 0;
}
