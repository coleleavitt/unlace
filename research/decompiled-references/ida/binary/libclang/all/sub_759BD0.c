_WORD *__fastcall sub_759BD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _WORD *result; // rax
  unsigned __int64 v4; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v2) <= 0x1B )
  {
    sub_26240F0(a2, "__attribute__((swift_private", 28);
    result = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)result > 1u )
      goto LABEL_5;
  }
  else
  {
    *(__m128i *)v2 = _mm_load_si128((const __m128i *)&xmmword_3C7E810);
    *(__m128i *)(v2 + 12) = _mm_load_si128((const __m128i *)&xmmword_3C7E840);
    result = (_WORD *)(*(_QWORD *)(a2 + 32) + 28LL);
    v4 = *(_QWORD *)(a2 + 24) - (_QWORD)result;
    *(_QWORD *)(a2 + 32) = result;
    if ( v4 > 1 )
    {
LABEL_5:
      *result = 10537;
      *(_QWORD *)(a2 + 32) += 2LL;
      return result;
    }
  }
  return (_WORD *)sub_26240F0(a2, "))", 2);
}

