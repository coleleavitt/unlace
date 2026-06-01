__int64 __fastcall sub_A86360(__int64 a1, __int64 a2)
{
  __m128i si128; // xmm0

  if ( *(_BYTE *)(a1 + 128) )
  {
    sub_A860D0(a1, (char **)a2);
    sub_A86210((char ***)(a1 + 64), (char ***)(a2 + 64));
    return a1;
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    *(_QWORD *)a1 = a1 + 24;
    *(__m128i *)(a1 + 8) = si128;
    if ( *(_QWORD *)(a2 + 8) )
      sub_A860D0(a1, (char **)a2);
    *(_QWORD *)(a1 + 64) = a1 + 80;
    *(_QWORD *)(a1 + 72) = 0x600000000LL;
    if ( *(_DWORD *)(a2 + 72) )
      sub_A86210((char ***)(a1 + 64), (char ***)(a2 + 64));
    *(_BYTE *)(a1 + 128) = 1;
    return a1;
  }
}
