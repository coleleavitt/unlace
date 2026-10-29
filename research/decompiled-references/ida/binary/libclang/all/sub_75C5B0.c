unsigned __int64 __fastcall sub_75C5B0(__int64 a1, __int64 a2)
{
  __m128i *v2; // rdx
  unsigned __int64 result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(__m128i **)(a2 + 32);
  result = *(_QWORD *)(a2 + 24) - (_QWORD)v2;
  if ( result <= 0xF )
    return sub_26240F0(a2, "_Nullable_result", 16);
  *v2 = _mm_load_si128((const __m128i *)&xmmword_3C7E870);
  *(_QWORD *)(a2 + 32) += 16LL;
  return result;
}

