__m128i *__fastcall sub_B33910(const __m128i *a1, __int64 a2)
{
  __int64 v2; // r13
  const void *v3; // r14
  __m128i *v4; // rbx
  __int64 v5; // rax
  __int32 v6; // edx
  void *v7; // rax
  __int8 v8; // al
  __int8 v9; // al

  v2 = a1[3].m128i_u32[0];
  v3 = (const void *)a1[3].m128i_i64[1];
  v4 = (__m128i *)sub_9C3B30((__int64 *)(a2 + 2352), 64, 3u);
  v5 = a1[2].m128i_i64[1];
  *v4 = _mm_loadu_si128(a1);
  v4[1] = _mm_loadu_si128(a1 + 1);
  v6 = a1[2].m128i_i32[0];
  v4[2].m128i_i8[6] &= 0xE0u;
  v4[2].m128i_i32[0] = v6;
  v4[2].m128i_i16[2] = 327;
  v4[2].m128i_i64[1] = v5;
  v4[3].m128i_i32[0] = v2;
  v7 = (void *)sub_9C3B30((__int64 *)(a2 + 2352), v2, 0);
  v4[3].m128i_i64[1] = (__int64)v7;
  if ( v2 )
    memcpy(v7, v3, v4[3].m128i_u32[0]);
  v8 = a1[2].m128i_i8[6] & 1 | v4[2].m128i_i8[6] & 0xFE;
  v4[2].m128i_i8[6] = v8;
  v9 = a1[2].m128i_i8[6] & 2 | v8 & 0xFD;
  v4[2].m128i_i8[6] = v9;
  v4[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v9 & 0xFB;
  return v4;
}
