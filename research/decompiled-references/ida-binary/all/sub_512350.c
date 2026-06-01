unsigned __int64 __fastcall sub_512350(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rbx
  void *v7; // rbp
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  char *v10; // rax
  void *v11; // rdi
  _QWORD *v12; // rdi
  const char *v13; // rax
  size_t v14; // rbp
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __m128i v17; // xmm0
  char *v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  const char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-70h]
  __m128i v25; // [rsp+10h] [rbp-68h] BYREF
  void *v26; // [rsp+20h] [rbp-58h] BYREF
  __m128i v27; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 64);
  v28 = __readfsqword(0x28u);
  if ( a3 < 0 || v4 < a3 )
    a3 = v4;
  if ( a3 > 0 )
  {
    v6 = v4 - 1;
    v24 = v4 - 1 - a3;
    while ( 1 )
    {
      v12 = nullptr;
      if ( v6 < v4 )
        v12 = (_QWORD *)(*(_QWORD *)(a1 + 56) + 48 * v6);
      v13 = sub_511DC0(v12, nullptr);
      v26 = nullptr;
      v27 = 0;
      if ( v13 )
      {
        v25.m128i_i64[1] = (__int64)v13;
        v14 = strlen(v13);
        v25.m128i_i64[0] = v14 + 1;
        v26 = (void *)qvector_reserve(&v26, 0, v14 + 1, 1);
        v27.m128i_i64[0] = v25.m128i_i64[0];
        memmove(v26, (const void *)v25.m128i_i64[1], v14);
        *((_BYTE *)v26 + v14) = 0;
      }
      v23 = *(_QWORD *)(a2 + 8);
      v22 = *(const char **)a2;
      v15 = *(_QWORD *)(a2 + 16);
      v16 = v23 + 1;
      if ( (unsigned __int64)&v26 < *(_QWORD *)a2 || &v26 >= (void **)&v22[24 * v15] )
      {
        if ( v15 < v16 )
        {
          v20 = qvector_reserve(a2, v22, v23 + 1, 24);
          *(_QWORD *)a2 = v20;
          v22 = (const char *)v20;
          v23 = *(_QWORD *)(a2 + 8);
        }
        v17 = _mm_loadu_si128(&v27);
        --v6;
        v18 = (char *)&v22[24 * v23];
        *(_QWORD *)v18 = v26;
        *(__m128i *)(v18 + 8) = v17;
        ++*(_QWORD *)(a2 + 8);
        if ( v6 == v24 )
          return v28 - __readfsqword(0x28u);
      }
      else
      {
        v7 = v26;
        v8 = _mm_loadl_epi64(&v27);
        v26 = nullptr;
        v9 = _mm_loadl_epi64((const __m128i *)&v27.m128i_u64[1]);
        v27 = 0;
        if ( v15 < v16 )
        {
          v25.m128i_i64[1] = v9.m128i_i64[0];
          v25.m128i_i64[0] = v8.m128i_i64[0];
          v21 = qvector_reserve(a2, v22, v23 + 1, 24);
          *(_QWORD *)a2 = v21;
          v22 = (const char *)v21;
          v9 = _mm_loadl_epi64((const __m128i *)&v25.m128i_u64[1]);
          v23 = *(_QWORD *)(a2 + 8);
          v8 = _mm_loadl_epi64(&v25);
        }
        v10 = (char *)&v22[24 * v23];
        *(_QWORD *)v10 = v7;
        v11 = v26;
        *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v8, v9);
        ++*(_QWORD *)(a2 + 8);
        if ( v11 )
        {
          v27.m128i_i64[0] = 0;
          qfree(v11, v22);
        }
        if ( --v6 == v24 )
          return v28 - __readfsqword(0x28u);
      }
      v4 = *(_QWORD *)(a1 + 64);
    }
  }
  return v28 - __readfsqword(0x28u);
}
