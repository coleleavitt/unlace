_BYTE *__fastcall sub_741170(__int64 a1, __int64 a2)
{
  __m128i *v2; // rdx
  __m128i si128; // xmm0
  _BYTE *result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(__m128i **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v2 <= 0x13u )
  {
    sub_26240F0(a2, "__declspec(allocator", 20);
    result = *(_BYTE **)(a2 + 32);
    if ( result != *(_BYTE **)(a2 + 24) )
      goto LABEL_5;
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E760);
    v2[1].m128i_i32[0] = 1919906913;
    *v2 = si128;
    result = (_BYTE *)(*(_QWORD *)(a2 + 32) + 20LL);
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

