__int64 __fastcall sub_17643C0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  result = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( result != 1 )
  {
    v3 = sub_19A3EF0(*a1, result & 0xFFFFFFFFFFFFFFFELL) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1C36C00(*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 8), v3);
    result = a2;
    if ( *(_QWORD *)(a2 + 16) != v3 )
      return sub_1C36C00(*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 8), v3);
  }
  return result;
}
