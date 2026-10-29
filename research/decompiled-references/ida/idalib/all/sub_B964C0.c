__int64 __fastcall sub_B964C0(__int64 a1, __int64 a2)
{
  __m128i *v2; // rdx
  __m128i si128; // xmm0

  v2 = *(__m128i **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v2 <= 0x16u )
    return sub_227BF10(a2, "unnamed-global-constant", 23);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E30);
  v2[1].m128i_i32[0] = 1953721967;
  v2[1].m128i_i16[2] = 28257;
  *v2 = si128;
  v2[1].m128i_i8[6] = 116;
  *(_QWORD *)(a2 + 32) += 23LL;
  return 28257;
}
