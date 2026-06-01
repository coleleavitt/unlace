__int64 __fastcall get_parser_info(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  const char **v3; // rbx
  size_t v4; // rax
  __int64 v5; // r14
  size_t v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  const char *v9; // rax
  void *v10; // rdx
  __int64 v11; // rax
  __m128i v13; // xmm0
  void *v14; // rbp
  __m128i v15; // xmm1
  const char *v16; // rdx
  const char *v17; // rsi
  char *v18; // rax
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  void *v23; // [rsp+10h] [rbp-48h] BYREF
  __m128i v24; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 8) == a2 )
    **(_DWORD **)(a1 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  v2 = *(const char **)(a2 + 16);
  v3 = *(const char ***)(a1 + 16);
  v23 = nullptr;
  v24 = 0;
  if ( v2 )
  {
    v4 = strlen(v2);
    v5 = v4 + 1;
    v6 = v4;
    v23 = (void *)qvector_reserve(&v23, 0, v4 + 1, 1);
    v24.m128i_i64[0] = v5;
    memmove(v23, v2, v6);
    *((_BYTE *)v23 + v6) = 0;
  }
  v7 = (__int64)*v3;
  v8 = (unsigned __int64)v3[2];
  if ( &v23 >= (void **)*v3 && (unsigned __int64)&v23 < v7 + 24 * v8 )
  {
    v13 = _mm_loadl_epi64(&v24);
    v14 = v23;
    v23 = nullptr;
    v15 = _mm_loadl_epi64((const __m128i *)&v24.m128i_u64[1]);
    v24 = 0;
    v16 = v3[1];
    v17 = *v3;
    if ( v3[2] < v16 + 1 )
    {
      v22.m128i_i64[1] = v15.m128i_i64[0];
      v22.m128i_i64[0] = v13.m128i_i64[0];
      v21 = qvector_reserve(v3, v17, v16 + 1, 24);
      v16 = v3[1];
      v13 = _mm_loadl_epi64(&v22);
      *v3 = (const char *)v21;
      v17 = (const char *)v21;
      v15 = _mm_loadl_epi64((const __m128i *)&v22.m128i_u64[1]);
    }
    v18 = (char *)&v17[24 * (_QWORD)v16];
    *(_QWORD *)v18 = v14;
    v19 = v23;
    *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v13, v15);
    ++v3[1];
    if ( v19 )
    {
      v24.m128i_i64[0] = 0;
      qfree(v19, v17);
    }
  }
  else
  {
    v9 = v3[1];
    if ( v8 < (unsigned __int64)(v9 + 1) )
    {
      v20 = qvector_reserve(v3, v7, v9 + 1, 24);
      *v3 = (const char *)v20;
      v7 = v20;
      v9 = v3[1];
    }
    v10 = v23;
    v11 = v7 + 24LL * (_QWORD)v9;
    *(__m128i *)(v11 + 8) = _mm_loadu_si128(&v24);
    *(_QWORD *)v11 = v10;
    v24 = 0;
    ++v3[1];
  }
  return 0;
}
