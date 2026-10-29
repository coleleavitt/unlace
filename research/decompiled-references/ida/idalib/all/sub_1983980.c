unsigned __int64 __fastcall sub_1983980(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rax

  result = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( result != 1 )
  {
    v5 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( v5 == *(_QWORD *)(a2 + 16) )
      return a2;
    else
      return sub_19D7F10(*(_QWORD *)(*a1 + 736), *(_QWORD *)(a2 + 32), v5);
  }
  return result;
}
