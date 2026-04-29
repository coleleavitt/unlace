char __fastcall sub_BDF0(unsigned __int16 a1)
{
  __int64 v1; // rax

  if ( a1 > 0xA1u )
  {
    LOBYTE(v1) = 0;
    if ( a1 <= 0x149u )
    {
      if ( a1 > 0x112u )
        return (0x606E0100000003uLL >> ((unsigned __int8)a1 - 19)) & 1;
      else
        LOBYTE(v1) = a1 == 245 || a1 == 265;
    }
  }
  else if ( a1 > 0x85u )
  {
    return (0xC110001uLL >> ((unsigned __int8)a1 + 122)) & 1;
  }
  else if ( (unsigned __int16)(a1 - 50) > 0x2Bu )
  {
    LOBYTE(v1) = 0;
  }
  else
  {
    return (0xDC6010000EFuLL >> ((unsigned __int8)a1 - 50)) & 1;
  }
  return v1;
}
