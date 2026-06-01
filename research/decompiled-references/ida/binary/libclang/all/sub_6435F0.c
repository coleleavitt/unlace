__int64 __fastcall sub_6435F0(__int64 a1, __int64 a2)
{
  __m128i si128; // xmm0
  __int16 v3; // ax
  __m128i v4; // xmm0
  __int64 result; // rax
  __m128i v6; // xmm0

  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  *(_QWORD *)a1 = a1 + 24;
  *(__m128i *)(a1 + 8) = si128;
  if ( *(_QWORD *)(a2 + 8) )
    sub_63DE60(a1, (unsigned __int8 **)a2);
  v3 = *(_WORD *)(a2 + 104);
  *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 56));
  v4 = _mm_loadu_si128((const __m128i *)(a2 + 72));
  *(_WORD *)(a1 + 104) = v3;
  result = *(unsigned __int8 *)(a2 + 106);
  *(__m128i *)(a1 + 72) = v4;
  v6 = _mm_loadu_si128((const __m128i *)(a2 + 88));
  *(_BYTE *)(a1 + 106) = result;
  *(__m128i *)(a1 + 88) = v6;
  return result;
}

