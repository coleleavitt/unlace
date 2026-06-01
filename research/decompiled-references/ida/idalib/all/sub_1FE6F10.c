__int64 __fastcall sub_1FE6F10(__int64 a1, char a2, char a3)
{
  *(_QWORD *)a1 = a1 + 16;
  if ( a2 && a3 )
  {
    *(__m128i *)(a1 + 8) = _mm_load_si128(xmmword_23AAD50);
    *(__m128i *)(a1 + 24) = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    return a1;
  }
  else if ( a3 == 1 || !a2 )
  {
    *(_QWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 8) = 0x600000001LL;
    return a1;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0x100000000LL;
    *(_QWORD *)(a1 + 8) = 0x600000001LL;
    return a1;
  }
}
