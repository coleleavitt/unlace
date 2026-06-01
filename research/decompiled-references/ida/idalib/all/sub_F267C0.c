__int64 __fastcall sub_F267C0(__int64 a1)
{
  __int64 v1; // rdi
  __m128i *v2; // rdx
  __m128i si128; // xmm0

  v1 = *(_QWORD *)(a1 + 1096);
  v2 = *(__m128i **)(v1 + 32);
  if ( *(_QWORD *)(v1 + 24) - (_QWORD)v2 <= 0x1Bu )
    return sub_227BF10(v1, " openmp_standalone_directive", 28);
  si128 = _mm_load_si128(xmmword_23A90E0);
  qmemcpy(&v2[1], "ne_directive", 12);
  *v2 = si128;
  *(_QWORD *)(v1 + 32) += 28LL;
  return 0x63657269645F656ELL;
}
