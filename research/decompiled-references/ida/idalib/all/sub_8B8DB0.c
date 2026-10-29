unsigned __int64 *__fastcall sub_8B8DB0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *result; // rax
  unsigned __int64 *v3; // rdx
  unsigned __int64 v4; // rdx
  int v5; // ecx
  unsigned __int64 v6; // rcx

  result = *(unsigned __int64 **)(a1 + 56);
  v3 = *(unsigned __int64 **)(a1 + 88);
  if ( result == v3 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    v4 = 0;
  }
  else if ( a2 >= *result )
  {
    v6 = result[1];
    if ( a2 < v6 )
      return result;
    if ( v6 == a2 )
      return v3;
    v5 = *(_DWORD *)(a1 + 24);
    v4 = (int)(-1431655765 * (((__int64)result - *(_QWORD *)(a1 + 16)) >> 3) + 1);
  }
  else
  {
    v4 = 0;
    v5 = -1431655765 * (((__int64)result - *(_QWORD *)(a1 + 16)) >> 3) + 1;
  }
  v3 = sub_8B8B40((_QWORD *)a1, a2, v4, v5);
  result = *(unsigned __int64 **)(a1 + 88);
  if ( result != v3 && *v3 == a2 )
    return v3;
  if ( v3 != *(unsigned __int64 **)(a1 + 16) && result != v3 - 3 && a2 >= *(v3 - 3) && a2 < *(v3 - 2) )
    return v3 - 3;
  return result;
}
