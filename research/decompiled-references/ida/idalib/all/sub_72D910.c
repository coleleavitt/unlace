__int64 __fastcall sub_72D910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  char *v8; // rsi
  __m128i si128; // xmm0
  __int64 v10; // rax

  if ( a5 <= 0x43 || strcmp((const char *)a4, "VCD") )
  {
    sub_35A790((char **)a1);
    return 0;
  }
  if ( *(_BYTE *)(a4 + 10) != 1 )
  {
    v8 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) <= 0x1Eu )
    {
      v10 = qvector_reserve(a1, v8, 31, 1);
      *(_QWORD *)a1 = v10;
      v8 = (char *)v10;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8300);
    *(_QWORD *)(a1 + 8) = 31;
    *(__m128i *)v8 = si128;
    *(__m128i *)(v8 + 14) = _mm_load_si128((const __m128i *)&xmmword_23A8310);
    *(_BYTE *)(*(_QWORD *)a1 + 30LL) = 0;
    return 0;
  }
  if ( a2 )
  {
    *(_QWORD *)a2 = *(_QWORD *)(a4 + 16);
    if ( a4 + 24 != a2 + 8 )
      *(__m128i *)(a2 + 8) = _mm_loadu_si128((const __m128i *)(a4 + 24));
  }
  if ( a3 )
  {
    *(_QWORD *)a3 = *(_QWORD *)(a4 + 40);
    if ( a4 + 48 != a3 + 8 )
      *(__m128i *)(a3 + 8) = _mm_loadu_si128((const __m128i *)(a4 + 48));
  }
  return 1;
}
