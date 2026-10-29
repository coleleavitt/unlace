bool __fastcall sub_B8EBA0(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rdi
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  _BOOL4 v7; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // r9

  if ( (*(_BYTE *)(a1 + 8) & 0x7F) != 0x18 )
    return 0;
  if ( (*(_BYTE *)(a1 + 9) & 0x20) != 0 )
  {
    do
    {
      v10 = *(_QWORD *)(sub_B8C1B0(a1) + 16);
      if ( (v10 & 4) != 0 )
      {
        v9 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_BYTE *)(v9 + 8) & 0x7F) != 0x18 )
          return 0;
      }
      else
      {
        v9 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v9 + 8) & 0x7F) != 0x18 )
          return 0;
      }
      a1 = v9;
    }
    while ( (*(_BYTE *)(v9 + 9) & 0x20) != 0 );
  }
  v1 = *(_QWORD *)(sub_B8C1B0(a1) + 16);
  if ( (v1 & 4) != 0 )
    v2 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(sub_B8EAA0(v2) + 8) & 0x7F) != 0 )
    return 0;
  v4 = *(_QWORD *)(v3 - 8);
  if ( (v4 & 7) != 0 )
    return 0;
  v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(v5 + 16);
  if ( *(_DWORD *)v6 != 3 )
    return 0;
  v7 = *(_WORD *)(v6 + 16) != 29811 || *(_BYTE *)(v6 + 18) != 100;
  return !v7;
}
