unsigned __int64 __fastcall sub_19FC20(__m128i *a1, __int32 a2)
{
  unsigned __int64 result; // rax

  a1[2].m128i_i64[1] = (__int64)&a1[1].m128i_i64[1];
  a1[3].m128i_i64[0] = (__int64)&a1[1].m128i_i64[1];
  a1[1].m128i_i32[2] = 0;
  a1[2].m128i_i64[0] = 0;
  a1[3].m128i_i64[1] = 0;
  a1[4].m128i_i64[0] = 0;
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_2365E0, (__m128i)(unsigned __int64)&off_235A00);
  result = sub_1770B0(&a1->m128i_i64[1], 0);
  a1[5].m128i_i32[0] = a2;
  return result;
}

