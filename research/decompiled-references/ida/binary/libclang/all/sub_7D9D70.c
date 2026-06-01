_BYTE *__fastcall sub_7D9D70(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i *v4; // rdx
  _BYTE *result; // rax

  v4 = *(__m128i **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v4 <= 0xFu )
  {
    sub_26240F0(a2, "<template param ", 16);
  }
  else
  {
    *v4 = _mm_load_si128((const __m128i *)&xmmword_3C7E980);
    *(_QWORD *)(a2 + 32) += 16LL;
  }
  sub_7D9CE0(a1, (char *)a2, a3);
  result = *(_BYTE **)(a2 + 32);
  if ( *(_BYTE **)(a2 + 24) == result )
    return (_BYTE *)sub_26240F0(a2, ">", 1);
  *result = 62;
  ++*(_QWORD *)(a2 + 32);
  return result;
}

