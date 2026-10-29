__int64 __fastcall sub_2157570(__int64 a1, const __m128i *a2)
{
  int v2; // edx
  __int64 result; // rax

  sub_111DFC0((__int64 *)a1);
  v2 = a2[1].m128i_i8[0] & 1;
  result = v2 | *(_BYTE *)(a1 + 16) & 0xFEu;
  *(_BYTE *)(a1 + 16) = v2 | *(_BYTE *)(a1 + 16) & 0xFE;
  if ( (_BYTE)v2 )
  {
    result = a2->m128i_i64[0];
    a2->m128i_i64[0] = 0;
    *(_QWORD *)a1 = result;
  }
  else
  {
    *(__m128i *)a1 = _mm_load_si128(a2);
  }
  return result;
}
