__m128i *__fastcall sub_B33B70(__int64 a1, const void *a2, __int64 a3, const __m128i *a4)
{
  __m128i *v6; // rbx
  __int32 v7; // eax
  void *v8; // rax

  v6 = (__m128i *)sub_9C3B30((__int64 *)(a1 + 2352), 56, 3u);
  *v6 = _mm_loadu_si128(a4);
  v6[1] = _mm_loadu_si128(a4 + 1);
  v7 = a4[2].m128i_i32[0];
  v6[2].m128i_i32[2] = a3;
  v6[2].m128i_i32[0] = v7;
  v6[2].m128i_i16[2] = 208;
  v6[2].m128i_i8[6] = v6[2].m128i_i8[6] & 0xE0 | 0x10;
  v8 = (void *)sub_9C3B30((__int64 *)(a1 + 2352), (unsigned int)a3, 0);
  v6[3].m128i_i64[0] = (__int64)v8;
  if ( a3 )
    memcpy(v8, a2, v6[2].m128i_u32[2]);
  if ( (v6[2].m128i_i8[2] & 0xF0) != 0xF0 || v6->m128i_i64[0] )
    return v6;
  v6[2].m128i_i8[2] &= 0xFu;
  return v6;
}
