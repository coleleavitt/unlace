char __fastcall sub_3C0B60(__int64 a1, char a2)
{
  unsigned int aflags; // eax

  aflags = get_aflags(a1);
  if ( (a2 & 0xF) != 0 )
  {
    if ( (a2 & 0xF) == 0xF )
      LOBYTE(aflags) = (aflags & 0x300000) != 0;
    else
      return (aflags >> 21) & 1;
  }
  else
  {
    return (aflags >> 20) & 1;
  }
  return aflags;
}

