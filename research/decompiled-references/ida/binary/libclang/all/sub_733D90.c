_WORD *__fastcall sub_733D90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _WORD *result; // rax
  unsigned __int64 v4; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v2) <= 0x22 )
  {
    sub_26240F0(a2, "__attribute__((cmse_nonsecure_entry", 35);
    result = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)result > 1u )
      goto LABEL_5;
  }
  else
  {
    *(__m128i *)v2 = _mm_load_si128((const __m128i *)&xmmword_3C7E6F0);
    *(__m128i *)(v2 + 16) = _mm_load_si128((const __m128i *)&xmmword_3C7E710);
    *(_DWORD *)(v2 + 31) = 2037544046;
    result = (_WORD *)(*(_QWORD *)(a2 + 32) + 35LL);
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

