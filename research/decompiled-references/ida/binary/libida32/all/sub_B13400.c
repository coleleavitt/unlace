__m128i *__fastcall sub_B13400(__int64 a1, __int64 a2)
{
  __int64 *v2; // r14
  __m128i *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  const void *v7; // r13
  __m128i *v8; // rbx
  void *v9; // rax
  __int64 v10; // rdx
  size_t v11; // rdx
  __int8 v12; // al
  __int8 v13; // al

  v2 = (__int64 *)(a2 + 2352);
  v4 = (__m128i *)sub_99FDF0((__int64 *)(a2 + 2352), 80, 3u);
  v5 = *(unsigned int *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(const void **)(a1 + 56);
  v8 = v4;
  *v4 = _mm_loadu_si128((const __m128i *)a1);
  v4[1] = _mm_loadu_si128((const __m128i *)(a1 + 16));
  LODWORD(v4) = *(_DWORD *)(a1 + 32);
  v8[2].m128i_i64[1] = v6;
  v8[2].m128i_i32[0] = (int)v4;
  v8[2].m128i_i16[2] = 383;
  LOBYTE(v4) = v8[2].m128i_i8[6];
  v8[3].m128i_i32[0] = v5;
  v8[2].m128i_i8[6] = (unsigned __int8)v4 & 0xE0 | 0x18;
  v9 = (void *)sub_99FDF0(v2, 8 * v5, 4u);
  v10 = v8[3].m128i_u32[0];
  v8[4].m128i_i32[0] = 0;
  v8[3].m128i_i64[1] = (__int64)v9;
  v11 = 8 * v10;
  v8[4].m128i_i64[1] = 0;
  if ( v11 )
    memmove(v9, v7, v11);
  v12 = *(_BYTE *)(a1 + 38) & 1 | v8[2].m128i_i8[6] & 0xFE;
  v8[2].m128i_i8[6] = v12;
  v13 = *(_BYTE *)(a1 + 38) & 2 | v12 & 0xFD;
  v8[2].m128i_i8[6] = v13;
  v8[2].m128i_i8[6] = *(_BYTE *)(a1 + 38) & 4 | v13 & 0xFB;
  sub_B09360((unsigned int *)&v8[4], &v8[4].m128i_i64[1], a2, *(const void **)(a1 + 72), *(_DWORD *)(a1 + 64));
  return v8;
}

