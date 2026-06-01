__m128i *__fastcall sub_8C3AC0(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __m128i *v14; // rbx
  __int64 v15; // r8
  int v16; // r9d
  __int16 v17; // ax
  __int64 v18; // rax
  unsigned __int8 v19; // al
  __m128i v21[4]; // [rsp+0h] [rbp-48h] BYREF

  v14 = (__m128i *)sub_AC40C0(48, a1, 8);
  v17 = v14->m128i_i16[0] & 0xFE00 | 0x55;
  v21[0] = _mm_unpacklo_epi64(
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a6), _mm_cvtsi32_si128(a7)),
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a8), _mm_cvtsi32_si128(HIDWORD(a8))));
  v14->m128i_i16[0] = v17;
  if ( byte_4AD234C )
    sub_AC4570(85);
  v18 = v14->m128i_i64[0];
  v14->m128i_i64[1] = a2;
  v14[1].m128i_i64[0] = a4;
  v14[1].m128i_i64[1] = a5;
  v14->m128i_i64[0] = (unsigned int)v18 & 0xF00001FF | ((unsigned __int64)(a3 & 3) << 9) | 0x280000;
  v19 = sub_76B330((__int64)v14, a1, v12, v13, v15, v16);
  v14->m128i_i8[1] = (v19 << 6) | v14->m128i_i8[1] & 0x3F;
  v14->m128i_i8[2] = v14->m128i_i8[2] & 0xF8 | (v19 >> 2) & 7;
  v14[2] = _mm_load_si128(v21);
  return v14;
}

