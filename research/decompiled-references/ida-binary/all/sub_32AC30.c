__int64 *__fastcall sub_32AC30(__int64 a1, __int64 a2, _DWORD *a3, int a4, char a5, double a6)
{
  const char *v7; // rsi
  __int64 v10; // rax
  const char *v13; // rcx
  const char *v14; // rdx
  __int64 v16; // rcx
  const char *encoding_name; // rax
  const char *v18; // rbp
  size_t v19; // r14
  __int64 v20; // rax
  const char *v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  void *v24; // rbp
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  char *v27; // rax
  void *v28; // rdi
  __m128i v29; // xmm0
  char *v30; // rax
  __int64 *v31; // rbp
  int encoding_bpu; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  struct _Unwind_Exception *v36; // rbx
  __m128i v37; // [rsp+0h] [rbp-68h] BYREF
  void *v38; // [rsp+10h] [rbp-58h] BYREF
  __m128i v39; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( a4 <= 0 )
    return (__int64 *)(v40 - __readfsqword(0x28u));
  v7 = *(const char **)a2;
  v10 = *(_QWORD *)(a2 + 8);
  v13 = &v7[4 * v10];
  if ( v7 != v13 )
  {
    v14 = v7;
    while ( *(_DWORD *)v14 != a4 )
    {
      v14 += 4;
      if ( v13 == v14 )
        goto LABEL_8;
    }
    if ( v13 != v14 )
      return (__int64 *)(v40 - __readfsqword(0x28u));
  }
LABEL_8:
  if ( DWORD2(xmmword_8BCDC0) == a4 )
  {
    v16 = (unsigned int)*a3;
    if ( (int)v16 >= 0 )
    {
      if ( !under_debugger )
      {
        v36 = (struct _Unwind_Exception *)interr(40576, v7, &xmmword_8BCD60, v16, a6);
        if ( v38 )
        {
          v39.m128i_i64[0] = 0;
          qfree(v38, v7);
        }
        _Unwind_Resume(v36);
      }
      BUG();
    }
    *a3 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(a2 + 8);
    v7 = *(const char **)a2;
  }
  if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v10 + 1) )
  {
    v33 = qvector_reserve(a2, v7, v10 + 1, 4);
    *(_QWORD *)a2 = v33;
    v7 = (const char *)v33;
    v10 = *(_QWORD *)(a2 + 8);
  }
  *(_DWORD *)&v7[4 * v10] = a4;
  ++*(_QWORD *)(a2 + 8);
  encoding_name = (const char *)get_encoding_name((unsigned int)a4);
  v38 = nullptr;
  v18 = encoding_name;
  v39 = 0;
  if ( encoding_name )
  {
    v19 = strlen(encoding_name);
    v37.m128i_i64[0] = v19 + 1;
    v38 = (void *)qvector_reserve(&v38, 0, v19 + 1, 1);
    v39.m128i_i64[0] = v19 + 1;
    memmove(v38, v18, v19);
    *((_BYTE *)v38 + v19) = 0;
  }
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *(const char **)a1;
  v22 = *(_QWORD *)(a1 + 16);
  v23 = v20 + 1;
  if ( (unsigned __int64)&v38 < *(_QWORD *)a1 || &v38 >= (void **)&v21[24 * v22] )
  {
    if ( v22 < v23 )
    {
      v34 = qvector_reserve(a1, v21, v20 + 1, 24);
      *(_QWORD *)a1 = v34;
      v21 = (const char *)v34;
      v20 = *(_QWORD *)(a1 + 8);
    }
    v29 = _mm_loadu_si128(&v39);
    v30 = (char *)&v21[24 * v20];
    *(_QWORD *)v30 = v38;
    *(__m128i *)(v30 + 8) = v29;
    ++*(_QWORD *)(a1 + 8);
  }
  else
  {
    v24 = v38;
    v25 = _mm_loadl_epi64(&v39);
    v38 = nullptr;
    v26 = _mm_loadl_epi64((const __m128i *)&v39.m128i_u64[1]);
    v39 = 0;
    if ( v22 < v23 )
    {
      v37.m128i_i64[1] = v26.m128i_i64[0];
      v37.m128i_i64[0] = v25.m128i_i64[0];
      v35 = qvector_reserve(a1, v21, v20 + 1, 24);
      *(_QWORD *)a1 = v35;
      v21 = (const char *)v35;
      v26 = _mm_loadl_epi64((const __m128i *)&v37.m128i_u64[1]);
      v20 = *(_QWORD *)(a1 + 8);
      v25 = _mm_loadl_epi64(&v37);
    }
    v27 = (char *)&v21[24 * v20];
    *(_QWORD *)v27 = v24;
    v28 = v38;
    *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64(v25, v26);
    ++*(_QWORD *)(a1 + 8);
    if ( v28 )
    {
      v39.m128i_i64[0] = 0;
      qfree(v28, v21);
    }
  }
  if ( !a5 )
    return (__int64 *)(v40 - __readfsqword(0x28u));
  v31 = (__int64 *)(*(_QWORD *)a1 + 24LL * *(_QWORD *)(a1 + 8) - 24);
  encoding_bpu = get_encoding_bpu((unsigned int)a4);
  return sub_16FAA0(v31, (__int64)" (default %d-bit)", 8 * encoding_bpu);
}
