char __fastcall sub_3F0900(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx

  v1 = *(unsigned __int16 *)(a1 + 24);
  if ( (unsigned __int16)v1 > 0x1E6u )
  {
    if ( (unsigned __int16)v1 > 0x367u )
    {
      LOBYTE(v1) = 0;
    }
    else if ( (unsigned __int16)v1 <= 0x32Du )
    {
      if ( (unsigned __int16)v1 > 0x326u )
        LOBYTE(v1) = (unsigned __int16)(v1 - 808) <= 3u;
      else
        LOBYTE(v1) = (unsigned __int16)v1 > 0x323u;
    }
    else
    {
      v3 = 0x2003C000000F3CFLL;
      LOWORD(v1) = v1 - 814;
      LOBYTE(v1) = _bittest64(&v3, v1);
    }
  }
  else if ( (unsigned __int16)v1 > 0x1D7u )
  {
    LOWORD(v1) = v1 - 472;
    v2 = 20801;
    LOBYTE(v1) = _bittest64(&v2, v1);
  }
  else if ( (_WORD)v1 == 172 )
  {
    LOBYTE(v1) = 1;
  }
  else if ( (unsigned __int16)v1 <= 0xACu )
  {
    if ( (unsigned __int16)v1 > 0x1Fu )
      LOBYTE(v1) = (_WORD)v1 == 49;
    else
      LOBYTE(v1) = (unsigned __int16)v1 > 0x1Du;
  }
  else if ( (unsigned __int16)v1 > 0x103u )
  {
    LOBYTE(v1) = (unsigned __int16)(v1 - 274) <= 1u;
  }
  else
  {
    LOBYTE(v1) = (unsigned __int16)v1 > 0x100u;
  }
  return v1;
}
