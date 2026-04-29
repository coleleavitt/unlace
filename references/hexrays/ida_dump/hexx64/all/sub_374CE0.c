__int64 __fastcall sub_374CE0(__int64 a1, unsigned __int64 a2, int a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned __int64 v8; // rcx
  int v9; // eax

  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 1128) + 8LL);
  if ( !v3 )
    return 0;
  v4 = 24;
  v5 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v5 )
    goto LABEL_11;
  v6 = 0;
  if ( (*(_BYTE *)v5 & 2) != 0 )
    return v6;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v5 + 24);
      v4 = v5 + 24;
      if ( a2 >= v8 )
        break;
      v5 = *(_QWORD *)(v5 + 8);
      if ( (*(_BYTE *)v5 & 2) != 0 )
        return 0;
    }
    if ( v8 >= a2 )
      break;
    v5 = *(_QWORD *)(v5 + 16);
    if ( (*(_BYTE *)v5 & 2) != 0 )
      return 0;
  }
  if ( v3 == (_QWORD *)v5 )
    return 0;
LABEL_11:
  v6 = 0;
  if ( (*(_BYTE *)(v4 + 56) & 0x3F) == 0x30 )
    return v6;
  v9 = *(_DWORD *)(v4 + 64);
  if ( a3 == 1 )
  {
    LOBYTE(v6) = v9 == 1;
    return v6;
  }
  else
  {
    if ( (unsigned int)(a3 - 2) > 1 )
    {
      LOBYTE(v6) = v9 <= 0;
      return v6;
    }
    LOBYTE(v6) = v9 > 1;
    return v6;
  }
}
