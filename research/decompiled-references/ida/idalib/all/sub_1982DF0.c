unsigned __int64 __fastcall sub_1982DF0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rax

  result = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 24), a3, a4);
  if ( result != 1 )
  {
    v5 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( v5 == *(_QWORD *)(a2 + 24) )
      return a2;
    else
      return sub_190C990(*a1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v5, a3, a4);
  }
  return result;
}
