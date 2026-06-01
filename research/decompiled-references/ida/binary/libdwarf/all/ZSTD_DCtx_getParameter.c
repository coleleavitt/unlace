__int64 __fastcall ZSTD_DCtx_getParameter(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // ecx

  if ( a2 == 1002 )
  {
    *a3 = a1[7527];
    return 0;
  }
  else if ( a2 > 0x3EA )
  {
    if ( a2 == 1004 )
    {
      *a3 = a1[7557];
      return 0;
    }
    else
    {
      if ( a2 >= 0x3EC )
      {
        if ( a2 == 1005 )
        {
          *a3 = a1[7558];
          return 0;
        }
        return -40;
      }
      *a3 = a1[7556];
      return 0;
    }
  }
  else if ( a2 == 1000 )
  {
    *a3 = a1[7526];
    return 0;
  }
  else
  {
    if ( a2 <= 0x3E8 )
    {
      if ( a2 == 100 )
      {
        _BitScanReverse(&v3, a1[7566]);
        *a3 = 31 - (v3 ^ 0x1F);
        return 0;
      }
      return -40;
    }
    *a3 = a1[7580];
    return 0;
  }
}

