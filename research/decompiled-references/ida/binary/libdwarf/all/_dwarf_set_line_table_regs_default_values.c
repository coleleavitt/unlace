__int64 __fastcall dwarf_set_line_table_regs_default_values(__m128i *a1, __int64 a2, __int32 a3)
{
  __m128i si128; // xmm0
  __m128i v5; // xmm0

  *a1 = _mm_load_si128((const __m128i *)&xmmword_A34A0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_A34B0);
  a1[5].m128i_i64[0] = 0;
  a1[1] = si128;
  a1[2] = _mm_load_si128((const __m128i *)&xmmword_A34C0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_A34D0);
  a1[2].m128i_i32[0] = a3;
  a1[3] = v5;
  a1[4] = _mm_load_si128((const __m128i *)&xmmword_A34E0);
  return 0;
}

