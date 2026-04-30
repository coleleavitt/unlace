unsigned __int64 __fastcall sub_511E90(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r14
  __int64 v5; // rbp
  void *v6; // r15
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  char *v9; // rax
  void *v10; // rdi
  const char *v11; // rax
  size_t v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __m128i v15; // xmm0
  char *v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rsi
  __int64 v21; // rax
  __m128i v22; // [rsp+0h] [rbp-68h] BYREF
  void *v23; // [rsp+10h] [rbp-58h] BYREF
  __m128i v24; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 24);
  v25 = __readfsqword(0x28u);
  if ( a2[2] < v3 )
  {
    *a2 = qvector_reserve(a2, *a2, v3, 24);
  }
  else if ( !v3 )
  {
    return v25 - __readfsqword(0x28u);
  }
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v11 = sub_511DC0((_QWORD *)(*(_QWORD *)(a1 + 16) + 48 * v5), nullptr);
      v23 = nullptr;
      v24 = 0;
      if ( v11 )
      {
        v22.m128i_i64[1] = (__int64)v11;
        v12 = strlen(v11);
        v22.m128i_i64[0] = v12 + 1;
        v23 = (void *)qvector_reserve(&v23, 0, v12 + 1, 1);
        v24.m128i_i64[0] = v22.m128i_i64[0];
        memmove(v23, (const void *)v22.m128i_i64[1], v12);
        *((_BYTE *)v23 + v12) = 0;
      }
      v21 = a2[1];
      v20 = (const char *)*a2;
      v13 = a2[2];
      v14 = v21 + 1;
      if ( (unsigned __int64)&v23 < *a2 || &v23 >= (void **)&v20[24 * v13] )
        break;
      v6 = v23;
      v7 = _mm_loadl_epi64(&v24);
      v23 = nullptr;
      v8 = _mm_loadl_epi64((const __m128i *)&v24.m128i_u64[1]);
      v24 = 0;
      if ( v13 < v14 )
      {
        v22.m128i_i64[1] = v8.m128i_i64[0];
        v22.m128i_i64[0] = v7.m128i_i64[0];
        v19 = qvector_reserve(a2, v20, v21 + 1, 24);
        *a2 = v19;
        v20 = (const char *)v19;
        v21 = a2[1];
        v8 = _mm_loadl_epi64((const __m128i *)&v22.m128i_u64[1]);
        v7 = _mm_loadl_epi64(&v22);
      }
      v9 = (char *)&v20[24 * v21];
      *(_QWORD *)v9 = v6;
      v10 = v23;
      *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v7, v8);
      ++a2[1];
      if ( v10 )
      {
        v24.m128i_i64[0] = 0;
        qfree(v10, v20);
      }
      if ( v3 == ++v5 )
        return v25 - __readfsqword(0x28u);
    }
    if ( v13 < v14 )
    {
      v18 = qvector_reserve(a2, v20, v21 + 1, 24);
      *a2 = v18;
      v20 = (const char *)v18;
      v21 = a2[1];
    }
    v15 = _mm_loadu_si128(&v24);
    ++v5;
    v16 = (char *)&v20[24 * v21];
    *(_QWORD *)v16 = v23;
    *(__m128i *)(v16 + 8) = v15;
    ++a2[1];
  }
  while ( v3 != v5 );
  return v25 - __readfsqword(0x28u);
}
