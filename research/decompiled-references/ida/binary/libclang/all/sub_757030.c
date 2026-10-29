_BYTE *__fastcall sub_757030(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _BYTE *result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v2) <= 0x19 )
  {
    sub_26240F0(a2, "__declspec(strict_gs_check", 26);
    result = *(_BYTE **)(a2 + 32);
    if ( result != *(_BYTE **)(a2 + 24) )
      goto LABEL_5;
  }
  else
  {
    *(__m128i *)v2 = _mm_load_si128((const __m128i *)&xmmword_3C7E7F0);
    *(__m128i *)(v2 + 10) = _mm_load_si128((const __m128i *)&xmmword_3C7E800);
    result = (_BYTE *)(*(_QWORD *)(a2 + 32) + 26LL);
    *(_QWORD *)(a2 + 32) = result;
    if ( result != *(_BYTE **)(a2 + 24) )
    {
LABEL_5:
      *result = 41;
      ++*(_QWORD *)(a2 + 32);
      return result;
    }
  }
  return (_BYTE *)sub_26240F0(a2, ")", 1);
}

