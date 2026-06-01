__int64 __fastcall is_lzero(unsigned int a1, char a2)
{
  unsigned int v2; // r12d
  __int64 aflags; // rax

  v2 = 0;
  if ( (unsigned __int8)leading_zero_important() )
    return v2;
  v2 = getinf_flag(44, 128);
  aflags = get_aflags(a1);
  if ( (a2 & 0xF) == 0 )
  {
    if ( (aflags & 0x10000) != 0 )
      return v2 ^ 1;
    return v2;
  }
  if ( (a2 & 0xF) == 0xF )
  {
    if ( (aflags & 0x30000) != 0 )
      return v2 ^ 1;
    return v2;
  }
  if ( (aflags & 0x20000) != 0 )
    return v2 ^ 1;
  return v2;
}

