__int64 __fastcall sub_1761320(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 )
  {
    result = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
    if ( result == 1 )
      return result;
    v4 = *a1;
    v5 = result & 0xFFFFFFFFFFFFFFFELL;
    v2 = v5;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 16) != v5 )
      return sub_1A894D0(*(_QWORD *)(v4 + 736), *(unsigned int *)(a2 + 8), v2);
  }
  else
  {
    v4 = *a1;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1A894D0(*(_QWORD *)(v4 + 736), *(unsigned int *)(a2 + 8), v2);
  }
  return a2;
}
