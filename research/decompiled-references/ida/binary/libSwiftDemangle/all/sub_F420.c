bool __fastcall sub_F420(__int64 a1)
{
  unsigned __int16 v1; // cx

  v1 = *(_WORD *)(a1 + 16);
  if ( v1 > 0xA8u )
  {
    if ( v1 > 0xF3u )
      return v1 != 330;
    else
      return v1 <= 0xCEu || !((0x1000000005uLL >> ((unsigned __int8)v1 + 49)) & 1);
  }
  else if ( v1 > 0x6Eu )
  {
    return !((0x300000000000101uLL >> ((unsigned __int8)v1 - 111)) & 1);
  }
  else
  {
    return v1 != 30 && v1 != 67;
  }
}

