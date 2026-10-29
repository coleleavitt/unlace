char __fastcall sub_E67DB0(__int64 a1, __int64 a2)
{
  char result; // al
  int v3; // edx
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r8

  if ( *(_WORD *)(a2 + 4) != 1 )
    return 0;
  v3 = *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD *)(a2 + 16);
  if ( v3 == 1 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    result = 1;
    v8 = v4 >> 5;
    if ( v7 && (unsigned int)v8 < *(_DWORD *)(v7 - 4) )
      return (*(_DWORD *)(v7 + 4 * v8) & (1 << v4)) == 0;
  }
  else if ( v3 == 2 )
  {
    return v4 < *(_DWORD *)(a1 + 16);
  }
  else
  {
    if ( v3 )
    {
      sub_1872CE0("");
      sub_1873130(114, 58);
    }
    v5 = *(_QWORD *)(a1 + 8);
    v6 = v4 >> 5;
    if ( !v5 || (unsigned int)v6 >= *(_DWORD *)(v5 - 4) )
      return 0;
    return (*(_DWORD *)(v5 + 4 * v6) & (1 << v4)) != 0;
  }
  return result;
}

