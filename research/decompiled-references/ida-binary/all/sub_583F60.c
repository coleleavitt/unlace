_QWORD *__fastcall sub_583F60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i a9,
        __m128 a10)
{
  __m128i v10; // xmm0
  __m128i v12; // [rsp+10h] [rbp-48h]
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h]
  __m128i v15; // [rsp+30h] [rbp-28h] BYREF
  __m128i v16; // [rsp+40h] [rbp-18h] BYREF

  v13 = a3;
  v15.m128i_i64[0] = (__int64)&v13;
  v14 = a4;
  v15.m128i_i64[1] = (__int64)sub_55C910;
  v16.m128i_i32[0] = a5;
  v16.m128i_i64[1] = 0;
  v10 = _mm_load_si128(&v15);
  v12 = _mm_load_si128(&v16);
  return sub_580DC0(
           a1,
           a2,
           v10,
           v12,
           a9,
           a10,
           a3,
           a4,
           a5,
           a6,
           v10.m128i_i64[0],
           v10.m128i_i64[1],
           v12.m128i_i32[0],
           v12.m128i_i64[1]);
}
