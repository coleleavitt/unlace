__m128i *__fastcall sub_B0F7A0(__int64 a1, const void *a2, __int64 a3, __int8 a4, const __m128i *a5)
{
  __m128i *v8; // rbx
  __int32 v9; // eax
  void *v10; // rax
  __int8 v11; // al

  v8 = (__m128i *)sub_99FDF0((__int64 *)(a1 + 2352), 64, 3u);
  *v8 = _mm_loadu_si128(a5);
  v8[1] = _mm_loadu_si128(a5 + 1);
  v9 = a5[2].m128i_i32[0];
  v8[2].m128i_i8[6] &= 0xE0u;
  v8[2].m128i_i32[0] = v9;
  v8[2].m128i_i16[2] = 139;
  v8[2].m128i_i32[2] = a3;
  v10 = (void *)sub_99FDF0((__int64 *)(a1 + 2352), (unsigned int)a3, 0);
  v8[3].m128i_i8[8] = a4;
  v8[3].m128i_i64[0] = (__int64)v10;
  if ( a3 )
    memcpy(v10, a2, v8[2].m128i_u32[2]);
  v11 = v8[2].m128i_i8[2];
  v8[2].m128i_i8[6] |= 4u;
  if ( (v11 & 0xF0) == 0xF0 && !v8->m128i_i64[0] )
    v8[2].m128i_i8[2] = v11 & 0xF;
  return v8;
}

