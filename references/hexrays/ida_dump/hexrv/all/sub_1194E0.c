__int64 __fastcall sub_1194E0(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)a1 > *(_DWORD *)a2 )
    return 1;
  v2 = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a1 + 4) < v2 )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(a1 + 4) > v2 )
    return 1;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v3 < v4 )
    return 0xFFFFFFFFLL;
  if ( v4 < v3 )
    return 1;
  result = sub_119580(a1 + 32, a2 + 32);
  if ( !(_DWORD)result )
  {
    result = sub_119580(a1 + 48, a2 + 48);
    if ( !(_DWORD)result )
      return sub_119580(a1 + 64, a2 + 64);
  }
  return result;
}
