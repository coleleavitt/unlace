unsigned __int64 __fastcall sub_494890(__int64 *a1, __m128i *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  __m128i *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  __int8 *v11; // r8
  size_t v12; // r12
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  size_t v18; // r12
  void *v19; // rax
  void *v20; // rax
  __int64 v21; // rax
  __int8 *v22; // [rsp+8h] [rbp-40h]

  result = 0x8E38E38E38E38E39LL;
  v5 = a4 - a3;
  v6 = 0x8E38E38E38E38E39LL * ((a4 - a3) >> 4);
  if ( v6 )
  {
    v7 = a2;
    v8 = a1[1];
    v9 = a3;
    v11 = &a2->m128i_i8[-*a1];
    if ( a1[2] < v6 + v8 )
    {
      v22 = &a2->m128i_i8[-*a1];
      v21 = qvector_reserve(a1, *a1, v6 + v8, 144);
      v11 = v22;
      *a1 = v21;
      v7 = (__m128i *)&v22[v21];
      v8 = a1[1];
    }
    for ( result = (unsigned __int64)memmove(&v7->m128i_i8[v5], v7, 144 * v8 - (_QWORD)v11);
          a4 != v9;
          v7[-1].m128i_i8[8] = result )
    {
      v17 = _mm_loadu_si128((const __m128i *)v9);
      v7[1].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v7[1] + 8) = 0;
      *v7 = v17;
      v18 = *(_QWORD *)(v9 + 24);
      if ( v18 )
      {
        v19 = (void *)qalloc_or_throw(*(_QWORD *)(v9 + 24));
        v7[2].m128i_i64[0] = v18;
        v7[1].m128i_i64[0] = (__int64)v19;
        memcpy(v19, *(const void **)(v9 + 16), v18);
        v7[1].m128i_i64[1] = v18;
      }
      v7[2].m128i_i64[1] = 0;
      v7[3] = 0;
      v12 = *(_QWORD *)(v9 + 48);
      if ( v12 )
      {
        v20 = (void *)qalloc_or_throw(*(_QWORD *)(v9 + 48));
        v7[2].m128i_i64[1] = (__int64)v20;
        v7[3].m128i_i64[1] = v12;
        memcpy(v20, *(const void **)(v9 + 40), v12);
        v7[3].m128i_i64[0] = v12;
      }
      v7[4].m128i_i64[0] = 0;
      copy_tinfo_t(&v7[4]);
      v13 = *(_QWORD *)(v9 + 120);
      v14 = _mm_loadu_si128((const __m128i *)(v9 + 72));
      v9 += 144;
      v7 += 9;
      v7[-2].m128i_i64[1] = v13;
      LODWORD(v13) = *(_DWORD *)(v9 - 16);
      *(__m128i *)((char *)v7 - 72) = v14;
      v15 = _mm_loadu_si128((const __m128i *)(v9 - 56));
      v7[-1].m128i_i32[0] = v13;
      LODWORD(v13) = *(_DWORD *)(v9 - 12);
      *(__m128i *)((char *)v7 - 56) = v15;
      v16 = _mm_loadu_si128((const __m128i *)(v9 - 40));
      v7[-1].m128i_i32[1] = v13;
      result = *(unsigned __int8 *)(v9 - 8);
      *(__m128i *)((char *)v7 - 40) = v16;
    }
    a1[1] += v6;
  }
  return result;
}
