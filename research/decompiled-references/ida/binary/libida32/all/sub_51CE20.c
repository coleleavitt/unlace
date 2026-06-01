__int64 __fastcall sub_51CE20(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx

  if ( (*(_BYTE *)(a1 + 52) & 7) != 0 )
    v1 = 1 << ((*(_BYTE *)(a1 + 52) & 7) - 1);
  else
    v1 = (unsigned __int8)getinf(61);
  v2 = 0;
  if ( v1 <= 16 )
  {
    v2 = 2;
    if ( v1 > 1 )
    {
      do
      {
        v1 = (unsigned int)v1 >> 1;
        ++v2;
      }
      while ( v1 != 1 );
    }
    if ( (*(_BYTE *)(a1 + 48) & 0x40) != 0 )
      v2 |= 0x20u;
  }
  return v2;
}

