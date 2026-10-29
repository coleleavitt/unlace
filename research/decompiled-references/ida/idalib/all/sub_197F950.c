unsigned __int64 __fastcall sub_197F950(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int16 *v5; // rsi
  unsigned __int64 result; // rax

  v5 = *(unsigned __int16 **)(a2 + 16);
  if ( !v5 )
    return a2;
  result = sub_190CCA0(a1, v5, a3, a4);
  if ( result == 1 )
    return result;
  if ( (result & 0xFFFFFFFFFFFFFFFELL) == *(_QWORD *)(a2 + 16) )
    return a2;
  else
    return sub_1A894D0(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), result & 0xFFFFFFFFFFFFFFFELL);
}
