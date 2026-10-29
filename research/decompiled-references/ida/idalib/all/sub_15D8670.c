char __fastcall sub_15D8670(__int64 a1)
{
  char result; // al
  unsigned __int16 v2; // dx

  result = 0;
  if ( (*(_BYTE *)(a1 + 35) & 2) == 0 )
  {
    v2 = *(_WORD *)(a1 + 32);
    if ( v2 <= 0xD3u )
    {
      if ( v2 < 0xD2u && v2 != 37 )
      {
        if ( v2 <= 0x25u )
          return v2 == 16;
        result = 1;
        if ( v2 != 54 )
          return v2 == 192;
        return result;
      }
      return 1;
    }
    if ( v2 <= 0x11Eu )
    {
      if ( v2 < 0x11Au )
        return v2 == 263;
      return 1;
    }
    result = 1;
    if ( v2 != 288 )
      return v2 == 290;
  }
  return result;
}
