__m128i *__fastcall sub_8C3C20(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i *v15; // rbx
  __int64 v16; // r8
  int v17; // r9d
  __int16 v18; // ax
  __int64 v19; // rax
  unsigned __int8 v20; // al
  __m128i v22[4]; // [rsp+0h] [rbp-48h] BYREF

  v15 = (__m128i *)sub_AC40C0(48, a1, 8);
  v18 = v15->m128i_i16[0] & 0xFE00 | 0x56;
  v22[0] = _mm_unpacklo_epi64(
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a7), _mm_cvtsi32_si128(a8)),
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a9), _mm_cvtsi32_si128(HIDWORD(a9))));
  v15->m128i_i16[0] = v18;
  if ( byte_4AD234C )
    sub_AC4570(86);
  v19 = v15->m128i_i64[0];
  v15->m128i_i64[1] = a2;
  v15[1].m128i_i64[0] = a5;
  v15[1].m128i_i64[1] = a6;
  v15->m128i_i64[0] = (unsigned int)v19 & 0xF00001FF
                    | ((unsigned __int64)(a3 & 3) << 9)
                    | ((unsigned __int64)(a4 & 0x7F) << 19);
  v20 = sub_76B330((__int64)v15, a1, v13, v14, v16, v17);
  v15->m128i_i8[1] = (v20 << 6) | v15->m128i_i8[1] & 0x3F;
  v15->m128i_i8[2] = v15->m128i_i8[2] & 0xF8 | (v20 >> 2) & 7;
  v15[2] = _mm_load_si128(v22);
  return v15;
}

