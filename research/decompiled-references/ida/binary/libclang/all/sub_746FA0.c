_BYTE *__fastcall sub_746FA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _BYTE *result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v2) <= 0x15 )
  {
    sub_26240F0(a2, "__declspec(no_init_all", 22);
    result = *(_BYTE **)(a2 + 32);
    if ( result != *(_BYTE **)(a2 + 24) )
      goto LABEL_5;
  }
  else
  {
    *(__m128i *)v2 = _mm_load_si128((const __m128i *)&xmmword_3C7E7A0);
    *(_QWORD *)(v2 + 14) = 0x6C6C615F74696E69LL;
    result = (_BYTE *)(*(_QWORD *)(a2 + 32) + 22LL);
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

