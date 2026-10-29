__int64 (__fastcall **__fastcall sub_215DE90(
        __m128i *a1,
        __int32 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8))()
{
  __m128i v8; // xmm0
  __m128i v9; // xmm1

  v8 = _mm_loadu_si128((const __m128i *)&a7);
  a1->m128i_i32[2] = a2;
  v9 = _mm_loadu_si128((const __m128i *)&a8);
  a1[1] = v8;
  a1->m128i_i64[0] = (__int64)off_2BE9660;
  a1[2] = v9;
  return off_2BE9660;
}
