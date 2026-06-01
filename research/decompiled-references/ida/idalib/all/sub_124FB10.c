__m128i *__fastcall sub_124FB10(__m128i *a1, __m128 *a2)
{
  char *v3; // rdi
  __int64 v4; // rax
  __m128i v5; // xmm1
  const __m128i *v7; // rax
  __m128i v8; // xmm2
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  double v11[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = (char *)a2[22].m128_u64[0];
  if ( v3 == (char *)a2[22].m128_u64[1] )
  {
    v7 = *(const __m128i **)(a2[23].m128_u64[1] - 8);
    v8 = _mm_loadu_si128(v7 + 30);
    v9 = v7[31].m128i_i64[0];
    *a1 = v8;
    a1[1].m128i_i64[0] = v9;
    operator delete(v3);
    v10 = a2[23].m128_u64[1];
    v11[0] = *(double *)(v10 - 8);
    a2[22] = _mm_loadh_ps(v11);
    *(_QWORD *)&v11[0] = v10 - 8;
    a2[23] = _mm_loadh_ps(v11);
    return a1;
  }
  else
  {
    v4 = *((_QWORD *)v3 - 1);
    v5 = _mm_loadu_si128((const __m128i *)(v3 - 24));
    a2[22].m128_u64[0] = (unsigned __int64)(v3 - 24);
    a1[1].m128i_i64[0] = v4;
    *a1 = v5;
    return a1;
  }
}
