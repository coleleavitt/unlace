__m128i *__fastcall sub_B13A00(__int64 a1, __int64 a2)
{
  __int64 *v2; // r14
  __m128i *v4; // rax
  __int64 v5; // rsi
  const void *v6; // r13
  __m128i *v7; // rbx
  void *v8; // rax
  __int64 v9; // rdx
  size_t v10; // rdx
  __int8 v11; // al
  __int8 v12; // al

  v2 = (__int64 *)(a2 + 2352);
  v4 = (__m128i *)sub_99FDF0((__int64 *)(a2 + 2352), 72, 3u);
  v5 = *(unsigned int *)(a1 + 40);
  v6 = *(const void **)(a1 + 48);
  v7 = v4;
  *v4 = _mm_loadu_si128((const __m128i *)a1);
  v4[1] = _mm_loadu_si128((const __m128i *)(a1 + 16));
  LODWORD(v4) = *(_DWORD *)(a1 + 32);
  v7[2].m128i_i32[2] = v5;
  v7[2].m128i_i32[0] = (int)v4;
  v7[2].m128i_i16[2] = 123;
  v7[2].m128i_i8[6] = v7[2].m128i_i8[6] & 0xE0 | 0x18;
  v8 = (void *)sub_99FDF0(v2, 8 * v5, 4u);
  v9 = v7[2].m128i_u32[2];
  v7[3].m128i_i32[2] = 0;
  v7[3].m128i_i64[0] = (__int64)v8;
  v10 = 8 * v9;
  v7[4].m128i_i64[0] = 0;
  if ( v10 )
    memmove(v8, v6, v10);
  v11 = *(_BYTE *)(a1 + 38) & 1 | v7[2].m128i_i8[6] & 0xFE;
  v7[2].m128i_i8[6] = v11;
  v12 = *(_BYTE *)(a1 + 38) & 2 | v11 & 0xFD;
  v7[2].m128i_i8[6] = v12;
  v7[2].m128i_i8[6] = *(_BYTE *)(a1 + 38) & 4 | v12 & 0xFB;
  sub_B09360(&v7[3].m128i_u32[2], (__m128i *)v7[4].m128i_i64, a2, *(const void **)(a1 + 64), *(_DWORD *)(a1 + 56));
  return v7;
}

