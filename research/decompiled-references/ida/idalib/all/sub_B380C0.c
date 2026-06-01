__m128i *__fastcall sub_B380C0(__int64 a1, const void *a2, unsigned __int32 a3, const __m128i *a4)
{
  __m128i *v6; // rbx
  __int32 v7; // eax
  void *v8; // rax
  __int64 v9; // rdx
  size_t v10; // rdx

  v6 = (__m128i *)sub_9C3B30((__int64 *)(a1 + 2352), 80, 3u);
  *v6 = _mm_loadu_si128(a4);
  v6[1] = _mm_loadu_si128(a4 + 1);
  v7 = a4[2].m128i_i32[0];
  v6[2].m128i_i64[1] = 0;
  v6[2].m128i_i32[0] = v7;
  v6[2].m128i_i16[2] = 383;
  LOBYTE(v7) = v6[2].m128i_i8[6];
  v6[3].m128i_i32[0] = 0;
  v6[3].m128i_i64[1] = 0;
  v6[4].m128i_i64[1] = 0;
  v6[2].m128i_i8[6] = v7 & 0xE0 | 0x18;
  v6[4].m128i_i32[0] = a3;
  v8 = (void *)sub_9C3B30((__int64 *)(a1 + 2352), 8LL * a3, 4u);
  v9 = v6[4].m128i_u32[0];
  v6[4].m128i_i64[1] = (__int64)v8;
  v10 = 8 * v9;
  if ( v10 )
    memmove(v8, a2, v10);
  return v6;
}
