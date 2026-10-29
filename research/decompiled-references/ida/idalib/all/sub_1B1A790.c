__int64 __fastcall sub_1B1A790(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 v4; // rdx
  int v5; // eax

  v2 = *(_WORD *)a2 & 0x1FF;
  if ( v2 <= 0x75u )
  {
    if ( v2 == 4 )
      return sub_1B1A860();
  }
  else if ( v2 <= 0x77u )
  {
    return sub_1B1A860();
  }
  if ( v2 <= 0x46u )
  {
    if ( v2 < 0x2Fu )
    {
      if ( v2 )
      {
        if ( v2 <= 0x2Du )
          return sub_1B1A860();
        if ( (*(_WORD *)sub_BFB9F0(*(_QWORD *)(a2 + 16)) & 0x1FF) != 0x62 )
          return 0;
        v4 = *(_QWORD *)(a2 + 24);
        v5 = *(_BYTE *)(v4 + 28) & 0x7F;
        if ( (unsigned int)(v5 - 40) > 6 && (unsigned int)(v5 - 49) > 2 )
          return 0;
        return sub_1B1A330(a1, a2, v4);
      }
LABEL_21:
      BUG();
    }
    return sub_1B1A860();
  }
  if ( v2 != 71 )
  {
    if ( v2 <= 0x100u )
      return sub_1B1A860();
    goto LABEL_21;
  }
  v4 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)(v4 + 28) & 0x7Fu) - 40 > 6 )
    return 0;
  return sub_1B1A330(a1, a2, v4);
}
