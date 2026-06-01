__m128i *__fastcall sub_B0FAF0(const __m128i *a1, __int64 a2)
{
  __int64 v2; // r13
  __m128i *v3; // rax
  __int32 v4; // r14d
  __m128i *v5; // rbx
  void *v6; // rax
  __int8 v7; // al
  __int8 v8; // al
  void *src; // [rsp+8h] [rbp-40h]

  v2 = a1[2].m128i_u32[2];
  src = (void *)a1[3].m128i_i64[0];
  v3 = (__m128i *)sub_99FDF0((__int64 *)(a2 + 2352), 64, 3u);
  v4 = a1[3].m128i_i32[2];
  v5 = v3;
  *v3 = _mm_loadu_si128(a1);
  v3[1] = _mm_loadu_si128(a1 + 1);
  LODWORD(v3) = a1[2].m128i_i32[0];
  v5[2].m128i_i8[6] &= 0xE0u;
  v5[2].m128i_i32[0] = (int)v3;
  v5[2].m128i_i16[2] = 386;
  v5[2].m128i_i32[2] = v2;
  v6 = (void *)sub_99FDF0((__int64 *)(a2 + 2352), v2, 0);
  v5[3].m128i_i32[2] = v4;
  v5[3].m128i_i64[0] = (__int64)v6;
  if ( v2 )
    memcpy(v6, src, v5[2].m128i_u32[2]);
  v7 = a1[2].m128i_i8[6] & 1 | v5[2].m128i_i8[6] & 0xFE;
  v5[2].m128i_i8[6] = v7;
  v8 = a1[2].m128i_i8[6] & 2 | v7 & 0xFD;
  v5[2].m128i_i8[6] = v8;
  v5[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v8 & 0xFB;
  return v5;
}

