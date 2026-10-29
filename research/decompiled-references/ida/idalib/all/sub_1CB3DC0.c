unsigned __int64 __fastcall sub_1CB3DC0(__int64 a1, char a2, char a3)
{
  unsigned __int8 v4; // al
  int v5; // edx
  __int64 v6; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx

  v4 = *(_BYTE *)(a1 + 28) & 0x7F;
  v5 = v4;
  if ( (unsigned int)v4 - 53 <= 1 || (v6 = a1, ((v4 + 52) & 0x7Fu) <= 1) )
  {
    v6 = sub_B72ED0(a1);
    v4 = *(_BYTE *)(v6 + 28) & 0x7F;
    v5 = v4;
  }
  if ( (unsigned int)(v5 - 68) <= 6 )
  {
    if ( a2 == 1 || v4 != 71 )
      return v6;
    return 0;
  }
  if ( (unsigned int)(v5 - 59) > 2 )
  {
    if ( v4 == 28 && a3 )
      return v6;
    return 0;
  }
  if ( !sub_B97450(v6) )
    return 0;
  v8 = *(_QWORD *)(v6 + 16);
  v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v8 & 4) != 0 )
    v9 = *(_QWORD *)v9;
  if ( v9 )
    v9 -= 64LL;
  if ( sub_B97230(v9) )
    return sub_B97230(v9);
  if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 60 > 1 )
    return 0;
  return sub_BBF290(v9);
}
