__m128i *__fastcall sub_12FB670(__m128i *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __m128i v6; // [rsp+0h] [rbp-28h] BYREF
  __int64 v7; // [rsp+10h] [rbp-18h]

  sub_21B7150(&v6, a3, a2);
  v3 = v7;
  v4 = _mm_load_si128(&v6);
  a1[1].m128i_i8[8] = 1;
  a1[1].m128i_i64[0] = v3;
  *a1 = v4;
  return a1;
}
