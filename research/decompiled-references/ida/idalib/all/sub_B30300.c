void *__fastcall sub_B30300(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        const void *a5,
        unsigned __int32 a6)
{
  __int32 v7; // eax
  void *result; // rax
  __int64 v9; // rdx
  size_t v10; // rdx

  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v7 = a3[2].m128i_i32[0];
  a1[3].m128i_i32[0] = a6;
  a1[2].m128i_i32[0] = v7;
  a1[2].m128i_i16[2] = 383;
  LOBYTE(v7) = a1[2].m128i_i8[6];
  a1[2].m128i_i64[1] = a4;
  a1[2].m128i_i8[6] = v7 & 0xE0 | 0x18;
  result = (void *)sub_9C3B30((__int64 *)(a2 + 2352), 8LL * a6, 4u);
  v9 = a1[3].m128i_u32[0];
  a1[4].m128i_i32[0] = 0;
  a1[3].m128i_i64[1] = (__int64)result;
  v10 = 8 * v9;
  a1[4].m128i_i64[1] = 0;
  if ( v10 )
    return memmove(result, a5, v10);
  return result;
}
