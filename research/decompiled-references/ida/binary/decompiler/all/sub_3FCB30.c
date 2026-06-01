__int64 __fastcall sub_3FCB30(__int64 a1, __int16 a2, unsigned int a3, unsigned int a4)
{
  char v4; // al
  char v6; // al

  if ( (a2 & 4) != 0 )
  {
    if ( (a2 & 0x100) != 0 )
      return a3;
    v4 = *(_BYTE *)(a1 + 65);
    if ( v4 != 1 && (unsigned __int8)(v4 - 11) > 3u )
      return a3;
    else
      return sub_3EF260(a1, 0, a3);
  }
  else if ( (a2 & 8) != 0 )
  {
    if ( (a2 & 0x200) != 0 )
      return a4;
    v6 = *(_BYTE *)(a1 + 105);
    if ( v6 != 1 && (unsigned __int8)(v6 - 11) > 3u )
      return a4;
    else
      return sub_3EF260(a1, 1, a4);
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}
