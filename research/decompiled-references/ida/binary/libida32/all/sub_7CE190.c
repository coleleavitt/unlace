void __fastcall sub_7CE190(const char **a1, const char *a2, const __m128i *a3)
{
  const char *v3; // r13
  const char *v5; // rbp
  __int128 v6; // xmm0
  size_t v7; // r14
  __m128i v8; // xmm1
  __int64 v9; // rbx
  size_t v10; // r14
  void *v11; // rax
  void *v12; // rax

  v3 = a2;
  if ( a1[2] < a2 )
  {
    a2 = *a1;
    *a1 = (const char *)qvector_reserve(a1, *a1, v3, 72);
  }
  v5 = a1[1];
  if ( v5 < v3 )
  {
    v6 = 0;
    do
    {
      v8 = _mm_loadu_si128(a3);
      v9 = (__int64)&(*a1)[72 * (_QWORD)v5];
      *(_QWORD *)(v9 + 16) = 0;
      *(__m128i *)v9 = v8;
      *(_OWORD *)(v9 + 24) = v6;
      v10 = a3[1].m128i_u64[1];
      if ( v10 )
      {
        v11 = (void *)qalloc_or_throw(a3[1].m128i_i64[1], a2);
        *(_QWORD *)(v9 + 32) = v10;
        *(_QWORD *)(v9 + 16) = v11;
        a2 = (const char *)a3[1].m128i_i64[0];
        memcpy(v11, a2, v10);
        *(_QWORD *)(v9 + 24) = v10;
        v6 = 0;
      }
      *(_QWORD *)(v9 + 40) = 0;
      *(_OWORD *)(v9 + 48) = v6;
      v7 = a3[3].m128i_u64[0];
      if ( v7 )
      {
        v12 = (void *)qalloc_or_throw(a3[3].m128i_i64[0], a2);
        *(_QWORD *)(v9 + 40) = v12;
        *(_QWORD *)(v9 + 56) = v7;
        a2 = (const char *)a3[2].m128i_i64[1];
        memcpy(v12, a2, v7);
        *(_QWORD *)(v9 + 48) = v7;
        v6 = 0;
      }
      ++v5;
      *(_BYTE *)(v9 + 64) = a3[4].m128i_i8[0];
    }
    while ( v3 != v5 );
  }
  a1[1] = v3;
}

