bool __fastcall sub_898C30(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbp
  bool v5; // al
  bool v6; // al

  v2 = *(_QWORD *)(a1 + 1592) + 232LL * a2;
  if ( (*(_BYTE *)(v2 + 3) & 0x40) == 0 )
    return 0;
  v4 = a1 + 736;
  if ( (*(_BYTE *)(v2 + 12) & 1) != 0 || (*(_BYTE *)(v2 + 76) & 1) != 0 )
    v5 = (unsigned int)sub_182EB00(a1 + 736, v2 + 8, v2 + 72) == 0;
  else
    v5 = *(_DWORD *)(v2 + 8) == *(_DWORD *)(v2 + 72);
  if ( !v5 )
    return 0;
  if ( (*(_BYTE *)(v2 + 28) & 1) != 0 || (*(_BYTE *)(v2 + 92) & 1) != 0 )
  {
    if ( !(unsigned int)sub_182EB00(v4, v2 + 24, v2 + 88) )
      goto LABEL_10;
    return 0;
  }
  if ( *(_DWORD *)(v2 + 24) != *(_DWORD *)(v2 + 88) )
    return 0;
LABEL_10:
  if ( (*(_BYTE *)(v2 + 44) & 1) != 0 || (*(_BYTE *)(v2 + 108) & 1) != 0 )
    v6 = (unsigned int)sub_182EB00(v4, v2 + 40, v2 + 104) == 0;
  else
    v6 = *(_DWORD *)(v2 + 40) == *(_DWORD *)(v2 + 104);
  if ( !v6 )
    return 0;
  if ( (*(_BYTE *)(v2 + 60) & 1) != 0 || (*(_BYTE *)(v2 + 124) & 1) != 0 )
    return (unsigned int)sub_182EB00(v4, v2 + 56, v2 + 120) == 0;
  else
    return *(_DWORD *)(v2 + 56) == *(_DWORD *)(v2 + 120);
}

