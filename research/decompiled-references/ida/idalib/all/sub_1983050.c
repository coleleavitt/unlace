unsigned __int64 __fastcall sub_1983050(__int64 *a1, unsigned __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi

  result = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 24), a3, a4);
  if ( result != 1 )
  {
    v6 = result & 0xFFFFFFFFFFFFFFFELL;
    result = a2;
    if ( v6 != *(_QWORD *)(a2 + 24) )
      return sub_1E53EF0(*a1, v6);
  }
  return result;
}
