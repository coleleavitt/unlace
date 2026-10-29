unsigned __int64 __fastcall sub_7B6250(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 i; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx

  for ( i = sub_7A0650(a1 + 48, a2); ; i = *(_QWORD *)(v6 + 8) )
  {
    if ( !i )
      return 0;
    v6 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( (i & 4) == 0 )
      break;
    if ( !v6 )
      BUG();
    v7 = *(_QWORD *)v6;
    if ( (*(_BYTE *)(*(_QWORD *)v6 + 28LL) & 0x7F) == 0x49 && a3 == ((*(_BYTE *)(v7 + 73) & 0x40) == 0) )
      return v7;
  }
  v7 = 0;
  if ( (*(_BYTE *)(v6 + 28) & 0x7F) == 0x49 && ((*(_BYTE *)(v6 + 73) & 0x40) == 0) == a3 )
    return i & 0xFFFFFFFFFFFFFFF8LL;
  return v7;
}

