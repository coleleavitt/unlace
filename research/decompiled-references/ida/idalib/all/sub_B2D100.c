void *__fastcall sub_B2D100(__m128i *a1, __int64 a2, const __m128i *a3, const void *a4, unsigned __int32 a5)
{
  __int32 v6; // eax
  void *result; // rax
  __int64 v8; // rdx
  size_t v9; // rdx

  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v6 = a3[2].m128i_i32[0];
  a1[2].m128i_i32[2] = a5;
  a1[2].m128i_i32[0] = v6;
  a1[2].m128i_i16[2] = 121;
  a1[2].m128i_i8[6] = a1[2].m128i_i8[6] & 0xE0 | 0x18;
  result = (void *)sub_9C3B30((__int64 *)(a2 + 2352), 8LL * a5, 4u);
  v8 = a1[2].m128i_u32[2];
  a1[3].m128i_i32[2] = 0;
  a1[3].m128i_i64[0] = (__int64)result;
  v9 = 8 * v8;
  a1[4].m128i_i64[0] = 0;
  if ( v9 )
    return memmove(result, a4, v9);
  return result;
}
