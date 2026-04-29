__int64 __fastcall sub_2CE6D0(__m128i *a1, const __m128i *a2)
{
  __int32 v2; // eax
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 result; // rax

  a1->m128i_i64[0] = (__int64)&off_4DBBE8;
  a1->m128i_i32[2] = 0;
  copy_argloc(&a1->m128i_u64[1], &a2->m128i_u64[1]);
  a1[1].m128i_i64[1] = a2[1].m128i_i64[1];
  a1[2].m128i_i64[0] = a2[2].m128i_i64[0];
  v2 = a2[2].m128i_i32[2];
  a1[3].m128i_i32[0] = 0;
  a1[2].m128i_i32[2] = v2;
  copy_argloc(&a1[3], &a2[3]);
  a1[4].m128i_i64[0] = a2[4].m128i_i64[0];
  v3 = _mm_loadu_si128(a2 + 5);
  v4 = a2[4].m128i_i64[1];
  a2[4].m128i_i64[1] = 0;
  a1[5] = v3;
  a2[5] = 0;
  a1[4].m128i_i64[1] = v4;
  a1[6].m128i_i64[0] = 0;
  copy_tinfo_t(&a1[6], &a2[6]);
  v5 = a2[6].m128i_i64[1];
  v6 = _mm_loadu_si128(a2 + 7);
  a2[6].m128i_i64[1] = 0;
  a1[7] = v6;
  a1[6].m128i_i64[1] = v5;
  v7 = a2[8].m128i_i64[0];
  a2[7] = 0;
  a1[8].m128i_i64[0] = v7;
  LODWORD(v7) = a2[8].m128i_i32[2];
  a1[9].m128i_i32[0] = 0;
  a1[8].m128i_i32[2] = v7;
  copy_argloc(&a1[9], &a2[9]);
  a1[10].m128i_i64[0] = a2[10].m128i_i64[0];
  a1[10].m128i_i64[1] = a2[10].m128i_i64[1];
  a1[11].m128i_i32[0] = a2[11].m128i_i32[0];
  result = a2[11].m128i_u32[2];
  a1[11].m128i_i32[2] = result;
  return result;
}
