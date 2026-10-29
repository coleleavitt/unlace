__int64 __fastcall sub_B157E0(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int32 a4,
        __int32 a5,
        __int64 a6,
        __int8 a7,
        unsigned __int32 a8)
{
  __int32 v8; // eax

  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v8 = a3[2].m128i_i32[0];
  a1[2].m128i_i8[6] &= 0xE0u;
  a1[2].m128i_i32[0] = v8;
  a1[2].m128i_i16[2] = 295;
  a1[2].m128i_i32[2] = a4;
  a1[3].m128i_i8[8] = a7;
  a1[2].m128i_i32[3] = a5;
  a1[3].m128i_i64[0] = a6;
  a1[3].m128i_i32[3] = a8;
  return a8;
}
