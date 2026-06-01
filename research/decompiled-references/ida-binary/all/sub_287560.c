__int64 __fastcall sub_287560(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  const __m128i *v13; // r13
  const __m128i *v14; // rbp
  __m128i *v15; // rbx
  __m128i v16; // xmm0
  const __m128i *v17; // rbp
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 result; // rax
  unsigned __int64 v23; // rsi

  v7 = 8;
  v8 = a2 + 1;
  v9 = a2 + 3;
  if ( v9 >= 8 )
    v7 = v9;
  a1->m128i_i64[1] = v7;
  if ( v9 >> 60 )
  {
    v23 = v9 >> 61;
    if ( v23 )
      sub_162118(v7, v23, a3, a4, a5, a6);
    std::__throw_bad_alloc();
  }
  v10 = operator new(8 * v7);
  v11 = a1->m128i_i64[1];
  a1->m128i_i64[0] = v10;
  v12 = (unsigned __int64)(v11 - v8) >> 1;
  v13 = (const __m128i *)(v10 + 8 * v12);
  v14 = (const __m128i *)((char *)v13 + 8 * v8);
  if ( v13 < v14 )
  {
    v15 = (__m128i *)(v10 + 8 * v12);
    do
    {
      v15->m128i_i64[0] = operator new(0x110u);
      v15 = (__m128i *)((char *)v15 + 8);
    }
    while ( v15 < v14 );
  }
  v16 = _mm_loadl_epi64(v13);
  v17 = (const __m128i *)((char *)v14 - 8);
  v18 = v13->m128i_i64[0] + 272;
  a1[1] = _mm_unpacklo_epi64(v16, v16);
  v19 = (__m128i)(unsigned __int64)v18;
  v20 = v17->m128i_i64[0];
  a1[2] = _mm_unpacklo_epi64(v19, (__m128i)(unsigned __int64)v13);
  v21 = _mm_loadl_epi64(v17);
  result = v20 + 272;
  a1[3] = _mm_unpacklo_epi64(v21, v21);
  a1[4] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)(unsigned __int64)v17);
  return result;
}
