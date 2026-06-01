__m128i *__fastcall sub_B33FA0(const __m128i *a1, __int64 a2)
{
  __int64 v2; // r13
  const void *v3; // r14
  __m128i *v4; // rbx
  __int32 v5; // eax
  void *v6; // rax
  __int8 v7; // al
  __int8 v8; // al

  v2 = a1[2].m128i_u32[2];
  v3 = (const void *)a1[3].m128i_i64[0];
  v4 = (__m128i *)sub_9C3B30((__int64 *)(a2 + 2352), 56, 3u);
  *v4 = _mm_loadu_si128(a1);
  v4[1] = _mm_loadu_si128(a1 + 1);
  v5 = a1[2].m128i_i32[0];
  v4[2].m128i_i8[6] &= 0xE0u;
  v4[2].m128i_i32[0] = v5;
  v4[2].m128i_i16[2] = 356;
  v4[2].m128i_i32[2] = v2;
  v6 = (void *)sub_9C3B30((__int64 *)(a2 + 2352), v2, 0);
  v4[3].m128i_i64[0] = (__int64)v6;
  if ( v2 )
    memcpy(v6, v3, v4[2].m128i_u32[2]);
  v7 = a1[2].m128i_i8[6] & 1 | v4[2].m128i_i8[6] & 0xFE;
  v4[2].m128i_i8[6] = v7;
  v8 = a1[2].m128i_i8[6] & 2 | v7 & 0xFD;
  v4[2].m128i_i8[6] = v8;
  v4[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v8 & 0xFB;
  return v4;
}
