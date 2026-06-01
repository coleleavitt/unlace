__int64 __fastcall sub_7A1F20(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v2) <= 0x16 )
    return sub_26240F0(a2, "unnamed-global-constant", 23);
  *(__m128i *)v2 = _mm_load_si128((const __m128i *)&xmmword_3C7E8A0);
  *(_QWORD *)(v2 + 15) = 0x746E6174736E6F63LL;
  *(_QWORD *)(a2 + 32) += 23LL;
  return 0x746E6174736E6F63LL;
}

