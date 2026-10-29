__m128i *__fastcall sub_B12BB0(const __m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  const void *v3; // r12
  __m128i *v4; // rbx
  __int64 v5; // rax
  __int32 v6; // edx
  void *v7; // rax
  __int64 v8; // rdx
  size_t v9; // rdx
  __int8 v10; // al
  __int8 v11; // al

  v2 = sub_99FDF0((__int64 *)(a2 + 2352), 56, 3u);
  v3 = (const void *)a1[3].m128i_i64[0];
  v4 = (__m128i *)v2;
  v5 = a1[2].m128i_u32[2];
  *v4 = _mm_loadu_si128(a1);
  v4[1] = _mm_loadu_si128(a1 + 1);
  v6 = a1[2].m128i_i32[0];
  v4[2].m128i_i8[6] &= 0xE0u;
  v4[2].m128i_i32[0] = v6;
  v4[2].m128i_i16[2] = 158;
  v4[2].m128i_i32[2] = v5;
  v7 = (void *)sub_99FDF0((__int64 *)(a2 + 2352), 8 * v5, 4u);
  v8 = v4[2].m128i_u32[2];
  v4[3].m128i_i64[0] = (__int64)v7;
  v9 = 8 * v8;
  if ( v9 )
    memmove(v7, v3, v9);
  v10 = a1[2].m128i_i8[6] & 1 | v4[2].m128i_i8[6] & 0xFE;
  v4[2].m128i_i8[6] = v10;
  v11 = a1[2].m128i_i8[6] & 2 | v10 & 0xFD;
  v4[2].m128i_i8[6] = v11;
  v4[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v11 & 0xFB;
  return v4;
}

