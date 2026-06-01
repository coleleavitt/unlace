unsigned __int64 __fastcall sub_75C2D0(__int64 a1, __int64 a2)
{
  __m128i *v2; // rdx
  unsigned __int64 result; // rax
  __m128i si128; // xmm0

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(__m128i **)(a2 + 32);
  result = *(_QWORD *)(a2 + 24) - (_QWORD)v2;
  if ( result <= 0x10 )
    return sub_26240F0(a2, "_Null_unspecified", 17);
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E860);
  v2[1].m128i_i8[0] = 100;
  *v2 = si128;
  *(_QWORD *)(a2 + 32) += 17LL;
  return result;
}

