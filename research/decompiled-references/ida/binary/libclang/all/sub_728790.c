_WORD *__fastcall sub_728790(__int64 a1, __int64 a2)
{
  __m128i *v2; // rdx
  _WORD *result; // rax
  unsigned __int64 v4; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(__m128i **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v2 <= 0x1Fu )
  {
    sub_26240F0(a2, "__attribute__((analyzer_noreturn", 32);
    result = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)result > 1u )
      goto LABEL_5;
  }
  else
  {
    *v2 = _mm_load_si128((const __m128i *)&xmmword_3C7E6A0);
    v2[1] = _mm_load_si128((const __m128i *)&xmmword_3C7E6B0);
    result = (_WORD *)(*(_QWORD *)(a2 + 32) + 32LL);
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

