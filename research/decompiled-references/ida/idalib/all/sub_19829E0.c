unsigned __int64 __fastcall sub_19829E0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rax

  result = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( result != 1 )
  {
    v5 = sub_19A3EF0(*a1, result & 0xFFFFFFFFFFFFFFFELL) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_QWORD *)(a2 + 16) == v5 )
      return a2;
    else
      return sub_1C36C00(*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 8), v5);
  }
  return result;
}
