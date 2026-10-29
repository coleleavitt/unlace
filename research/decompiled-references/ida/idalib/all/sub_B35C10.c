__m128i *__fastcall sub_B35C10(const __m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  const void *v4; // r12
  __m128i *v5; // rbx
  __int64 v6; // rax
  __int32 v7; // ecx
  void *v8; // rax
  __int64 v9; // rdx
  size_t v10; // rdx
  __int8 v11; // al
  __int8 v12; // al

  v2 = sub_9C3B30((__int64 *)(a2 + 2352), 64, 3u);
  v3 = a1[2].m128i_i64[1];
  v4 = (const void *)a1[3].m128i_i64[1];
  v5 = (__m128i *)v2;
  v6 = a1[3].m128i_u32[0];
  *v5 = _mm_loadu_si128(a1);
  v5[1] = _mm_loadu_si128(a1 + 1);
  v7 = a1[2].m128i_i32[0];
  v5[2].m128i_i8[6] &= 0xE0u;
  v5[2].m128i_i32[0] = v7;
  v5[2].m128i_i64[1] = v3;
  v5[2].m128i_i16[2] = 201;
  v5[3].m128i_i32[0] = v6;
  v8 = (void *)sub_9C3B30((__int64 *)(a2 + 2352), 4 * v6, 4u);
  v9 = v5[3].m128i_u32[0];
  v5[3].m128i_i64[1] = (__int64)v8;
  v10 = 4 * v9;
  if ( v10 )
    memmove(v8, v4, v10);
  v11 = a1[2].m128i_i8[6] & 1 | v5[2].m128i_i8[6] & 0xFE;
  v5[2].m128i_i8[6] = v11;
  v12 = a1[2].m128i_i8[6] & 2 | v11 & 0xFD;
  v5[2].m128i_i8[6] = v12;
  v5[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v12 & 0xFB;
  return v5;
}
