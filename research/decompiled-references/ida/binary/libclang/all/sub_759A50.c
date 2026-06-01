_WORD *__fastcall sub_759A50(__int64 a1, __int64 a2)
{
  __m128i *v2; // rax
  __m128i si128; // xmm0
  _WORD *result; // rax
  unsigned __int64 v5; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(__m128i **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v2 <= 0x20u )
  {
    sub_26240F0(a2, "__attribute__((swift_objc_members", 33);
    result = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)result > 1u )
      goto LABEL_5;
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E810);
    v2[2].m128i_i8[0] = 115;
    *v2 = si128;
    v2[1] = _mm_load_si128((const __m128i *)&xmmword_3C7E830);
    result = (_WORD *)(*(_QWORD *)(a2 + 32) + 33LL);
    v5 = *(_QWORD *)(a2 + 24) - (_QWORD)result;
    *(_QWORD *)(a2 + 32) = result;
    if ( v5 > 1 )
    {
LABEL_5:
      *result = 10537;
      *(_QWORD *)(a2 + 32) += 2LL;
      return result;
    }
  }
  return (_WORD *)sub_26240F0(a2, "))", 2);
}

