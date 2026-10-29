_BYTE *__fastcall sub_7496E0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  _BYTE *result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v4 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v4) <= 0x1A )
  {
    sub_26240F0(a2, "#pragma omp declare variant", 27);
  }
  else
  {
    *(__m128i *)v4 = _mm_load_si128((const __m128i *)&xmmword_3C7E7B0);
    *(__m128i *)(v4 + 11) = _mm_load_si128((const __m128i *)&xmmword_3C7E7D0);
    *(_QWORD *)(a2 + 32) += 27LL;
  }
  sub_7235D0(a1, a2, a3);
  result = *(_BYTE **)(a2 + 32);
  if ( *(_BYTE **)(a2 + 24) == result )
    return (_BYTE *)sub_26240F0(a2, "\n", 1);
  *result = 10;
  ++*(_QWORD *)(a2 + 32);
  return result;
}

