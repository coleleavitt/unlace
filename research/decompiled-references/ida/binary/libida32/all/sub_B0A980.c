void *__fastcall sub_B0A980(__m128i *a1, __int64 a2, const __m128i *a3, __int64 a4, const void *a5, __int64 a6)
{
  __int32 v8; // eax
  void *result; // rax

  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v8 = a3[2].m128i_i32[0];
  a1[2].m128i_i8[6] &= 0xE0u;
  a1[2].m128i_i32[0] = v8;
  a1[2].m128i_i16[2] = 206;
  a1[2].m128i_i64[1] = a4;
  a1[3].m128i_i32[0] = a6;
  result = (void *)sub_99FDF0((__int64 *)(a2 + 2352), (unsigned int)a6, 0);
  a1[3].m128i_i64[1] = (__int64)result;
  if ( a6 )
    return memcpy(result, a5, a1[3].m128i_u32[0]);
  return result;
}

