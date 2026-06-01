char __fastcall sub_98370(unsigned int a1, __int64 a2, unsigned int a3)
{
  char result; // al

  if ( (a1 & 4) != 0 )
    return (a1 & 0xFFFFFFFB) == 0;
  result = 1;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 34LL) & 0x40) == 0 )
      return (unsigned int)sub_982B0(a1, a2, a3) == 0;
  }
  return result;
}

