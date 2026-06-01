__int64 __fastcall sub_F26770(__int64 a1)
{
  __int64 v1; // rdi
  __m128i *v2; // rdx
  __m128i si128; // xmm0

  v1 = *(_QWORD *)(a1 + 1096);
  v2 = *(__m128i **)(v1 + 32);
  if ( *(_QWORD *)(v1 + 24) - (_QWORD)v2 <= 0x12u )
    return sub_227BF10(v1, " has rewritten init", 19);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A90D0);
  v2[1].m128i_i8[2] = 116;
  v2[1].m128i_i16[0] = 26990;
  *v2 = si128;
  *(_QWORD *)(v1 + 32) += 19LL;
  return 26990;
}
