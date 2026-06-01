char __fastcall sub_8AEDF0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  __int64 v7; // rdx
  __int64 v8; // rsi
  bool v9; // al

  if ( (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1
    || (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    LOBYTE(v5) = sub_184DFA0(a1, a2, a3);
  }
  else if ( (*(_BYTE *)(a2 + 4) & 1) != 0 || (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    v5 = (unsigned int)sub_182EB00(a1, a2, a3) >> 31;
  }
  else
  {
    LOBYTE(v5) = *(_DWORD *)a2 < *(_DWORD *)a3;
  }
  if ( (_BYTE)v5 )
    return 1;
  v7 = a3 + 32;
  v8 = a2 + 32;
  if ( (*(_BYTE *)(a2 + 52) & 1) != 0
    || *(_DWORD *)(a2 + 48) != 1
    || (*(_BYTE *)(a3 + 52) & 1) != 0
    || *(_DWORD *)(a3 + 48) != 1 )
  {
    if ( !(unsigned __int8)sub_184DFA0(a1, v8, v7) )
      return 0;
  }
  else if ( (*(_BYTE *)(a2 + 36) & 1) != 0 || (*(_BYTE *)(a3 + 36) & 1) != 0 )
  {
    if ( (int)sub_182EB00(a1, v8, v7) >= 0 )
      return 0;
  }
  else if ( *(_DWORD *)(a2 + 32) >= *(_DWORD *)(a3 + 32) )
  {
    return 0;
  }
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 || (*(_BYTE *)(a3 + 4) & 1) != 0 )
    v9 = (unsigned int)sub_182EB00(a1, a2, a3) == 0;
  else
    v9 = *(_DWORD *)a2 == *(_DWORD *)a3;
  if ( !v9 )
    return 0;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 || (*(_BYTE *)(a3 + 20) & 1) != 0 )
    return (unsigned int)sub_182EB00(a1, a2 + 16, a3 + 16) == 0;
  else
    return *(_DWORD *)(a2 + 16) == *(_DWORD *)(a3 + 16);
}

