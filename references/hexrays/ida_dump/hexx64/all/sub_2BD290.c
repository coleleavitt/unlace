__int64 __fastcall sub_2BD290(__m128i *a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rax
  __int64 result; // rax

  a1->m128i_i32[0] = 0;
  copy_argloc(a1, a2);
  a1[1].m128i_i64[0] = a2[1].m128i_i64[0];
  v2 = _mm_loadu_si128(a2 + 2);
  v3 = a2[1].m128i_i64[1];
  a2[1].m128i_i64[1] = 0;
  a1[2] = v2;
  a2[2] = 0;
  a1[1].m128i_i64[1] = v3;
  a1[3].m128i_i64[0] = 0;
  copy_tinfo_t(&a1[3], &a2[3]);
  v4 = a2[3].m128i_i64[1];
  v5 = _mm_loadu_si128(a2 + 4);
  a2[3].m128i_i64[1] = 0;
  a1[4] = v5;
  a1[3].m128i_i64[1] = v4;
  v6 = a2[5].m128i_i64[0];
  a2[4] = 0;
  a1[5].m128i_i64[0] = v6;
  result = a2[5].m128i_u32[2];
  a1[5].m128i_i32[2] = result;
  return result;
}
