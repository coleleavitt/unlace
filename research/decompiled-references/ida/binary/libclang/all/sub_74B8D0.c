unsigned __int64 __fastcall sub_74B8D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(_QWORD *)(a2 + 32);
  result = *(_QWORD *)(a2 + 24) - v2;
  if ( result <= 0x12 )
    return sub_26240F0(a2, "__unsafe_unretained", 19);
  *(__m128i *)v2 = _mm_load_si128((const __m128i *)&xmmword_3C7E7E0);
  *(_DWORD *)(v2 + 15) = 1684369001;
  *(_QWORD *)(a2 + 32) += 19LL;
  return result;
}

