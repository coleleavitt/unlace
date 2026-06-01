unsigned __int64 __fastcall sub_125C20(__int64 *a1, const char **a2, int a3)
{
  const char **v3; // rbp
  void *v5; // r14
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // rax
  void *v9; // rdi
  const char *v10; // r15
  size_t v11; // rax
  __int64 v12; // r13
  size_t v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  const char **v23; // [rsp+8h] [rbp-70h]
  __m128i v24; // [rsp+10h] [rbp-68h] BYREF
  void *v25; // [rsp+20h] [rbp-58h] BYREF
  __m128i v26; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v3 = a2;
  v27 = __readfsqword(0x28u);
  v23 = &a2[a3];
  do
  {
    while ( 1 )
    {
      v10 = *v3;
      v25 = nullptr;
      v26 = 0;
      if ( v10 )
      {
        v11 = strlen(v10);
        v12 = v11 + 1;
        v13 = v11;
        v25 = (void *)qvector_reserve();
        v26.m128i_i64[0] = v12;
        memmove(v25, v10, v13);
        *((_BYTE *)v25 + v13) = 0;
      }
      v22 = a1[1];
      v21 = *a1;
      v14 = a1[2];
      v15 = v22 + 1;
      if ( (unsigned __int64)&v25 < *a1 || (unsigned __int64)&v25 >= v21 + 24 * v14 )
        break;
      v5 = v25;
      v6 = _mm_loadl_epi64(&v26);
      v25 = nullptr;
      v7 = _mm_loadl_epi64((const __m128i *)&v26.m128i_u64[1]);
      v26 = 0;
      if ( v14 < v15 )
      {
        v24.m128i_i64[1] = v7.m128i_i64[0];
        v24.m128i_i64[0] = v6.m128i_i64[0];
        v20 = qvector_reserve();
        *a1 = v20;
        v21 = v20;
        v7 = _mm_loadl_epi64((const __m128i *)&v24.m128i_u64[1]);
        v22 = a1[1];
        v6 = _mm_loadl_epi64(&v24);
      }
      v8 = v21 + 24 * v22;
      *(_QWORD *)v8 = v5;
      v9 = v25;
      *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v6, v7);
      ++a1[1];
      if ( v9 )
      {
        v26.m128i_i64[0] = 0;
        qfree();
      }
      if ( v23 == ++v3 )
        return v27 - __readfsqword(0x28u);
    }
    if ( v14 < v15 )
    {
      v19 = qvector_reserve();
      *a1 = v19;
      v21 = v19;
      v22 = a1[1];
    }
    v16 = _mm_loadu_si128(&v26);
    ++v3;
    v17 = v21 + 24 * v22;
    *(_QWORD *)v17 = v25;
    *(__m128i *)(v17 + 8) = v16;
    ++a1[1];
  }
  while ( v23 != v3 );
  return v27 - __readfsqword(0x28u);
}

