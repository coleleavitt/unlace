__int64 __fastcall sub_1809330(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // ax
  char v5; // al

  while ( 1 )
  {
    while ( 1 )
    {
      v3 = *(_WORD *)a2 & 0x1FF;
      if ( v3 <= 0x4Eu )
        break;
      if ( v3 <= 0x58u )
        goto LABEL_10;
      if ( ((v3 + 394) & 0x1FFu) > 1 )
        return sub_1809200(a1, *(_QWORD *)(a2 + 8));
      if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) - 19 > 1 || !(unsigned __int8)sub_1809330(a1, *(_QWORD *)(a2 + 16)) )
        return 0;
LABEL_6:
      a2 = *(_QWORD *)(a2 + 24);
    }
    if ( v3 == 20 )
      goto LABEL_6;
    if ( v3 != 4 )
      return sub_1809200(a1, *(_QWORD *)(a2 + 8));
    v5 = *(_BYTE *)(a2 + 2) >> 3;
    if ( ((v5 + 28) & 0x1Fu) > 1 && v5 != 9 )
      return 0;
LABEL_10:
    a2 = *(_QWORD *)(a2 + 16);
  }
}
