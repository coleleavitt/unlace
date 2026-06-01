void *__fastcall sub_B0AA00(__m128i *a1, __int64 a2, const __m128i *a3, const void *a4, __int64 a5)
{
  __int32 v7; // eax
  void *result; // rax

  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v7 = a3[2].m128i_i32[0];
  a1[2].m128i_i32[2] = a5;
  a1[2].m128i_i32[0] = v7;
  a1[2].m128i_i16[2] = 207;
  a1[2].m128i_i8[6] = a1[2].m128i_i8[6] & 0xE0 | 0x10;
  result = (void *)sub_99FDF0((__int64 *)(a2 + 2352), (unsigned int)a5, 0);
  a1[3].m128i_i64[0] = (__int64)result;
  if ( a5 )
    return memcpy(result, a4, a1[2].m128i_u32[2]);
  return result;
}

