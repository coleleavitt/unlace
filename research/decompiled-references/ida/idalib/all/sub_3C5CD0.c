char __fastcall sub_3C5CD0(__int64 a1, char a2)
{
  unsigned int aflags; // eax

  aflags = get_aflags(a1);
  if ( (a2 & 0xF) != 0 )
  {
    if ( (a2 & 0xF) == 0xF )
      LOBYTE(aflags) = (aflags & 0x300) != 0;
    else
      return (aflags >> 9) & 1;
  }
  else
  {
    return (aflags >> 8) & 1;
  }
  return aflags;
}
