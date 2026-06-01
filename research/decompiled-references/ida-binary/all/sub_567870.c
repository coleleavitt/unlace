bool __fastcall sub_567870(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __m128i v8; // xmm0
  __m128i v10; // [rsp+10h] [rbp-18h]

  v8 = _mm_loadu_si128((const __m128i *)&a7);
  v10 = _mm_loadu_si128((const __m128i *)&a8);
  return (unsigned __int16)sub_567570(
                             a1,
                             a2,
                             a3,
                             a4,
                             a5,
                             a6,
                             v8.m128i_i32[0],
                             v8.m128i_i64[1],
                             (unsigned __int8 *)v10.m128i_i64[0],
                             v10.m128i_i64[1]) == 0xFFFF;
}
