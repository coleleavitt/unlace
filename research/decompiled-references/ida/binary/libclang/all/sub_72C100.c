unsigned __int64 __fastcall sub_72C100(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(_QWORD *)(a2 + 32);
  result = *(_QWORD *)(a2 + 24) - v2;
  if ( result <= 0x19 )
    return sub_26240F0(a2, "__arm_streaming_compatible", 26);
  *(__m128i *)v2 = _mm_load_si128((const __m128i *)&xmmword_3C7E6D0);
  *(__m128i *)(v2 + 10) = _mm_load_si128((const __m128i *)&xmmword_3C7E6E0);
  *(_QWORD *)(a2 + 32) += 26LL;
  return result;
}

