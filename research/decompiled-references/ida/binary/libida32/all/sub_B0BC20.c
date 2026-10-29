void *__fastcall sub_B0BC20(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int32 a4,
        __int32 a5,
        int a6,
        void *src,
        __int64 a8)
{
  __int32 v8; // eax
  void *result; // rax

  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v8 = a3[2].m128i_i32[0];
  a1[2].m128i_i8[6] &= 0xE0u;
  a1[2].m128i_i32[0] = v8;
  a1[2].m128i_i16[2] = 327;
  a1[2].m128i_i32[2] = a4;
  a1[2].m128i_i32[3] = a5;
  a1[3].m128i_i32[0] = a8;
  result = (void *)sub_99FDF0((__int64 *)(a2 + 2352), (unsigned int)a8, 0);
  a1[3].m128i_i64[1] = (__int64)result;
  if ( a8 )
    return memcpy(result, src, a1[3].m128i_u32[0]);
  return result;
}

