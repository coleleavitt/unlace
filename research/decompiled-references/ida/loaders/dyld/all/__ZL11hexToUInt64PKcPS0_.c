__int64 __fastcall hexToUInt64(const char *a1, const char **a2)
{
  const char **v2; // x9
  __int64 v3; // x10
  __int64 v4; // x8
  int v5; // w11
  unsigned __int8 v6; // w12
  char v8; // [xsp+8h] [xbp-8h] BYREF

  if ( a2 )
    v2 = a2;
  else
    v2 = (const char **)&v8;
  if ( a1 )
  {
    if ( *a1 == 48 )
      a1 += 2 * (a1[1] == 120);
    v3 = 0;
    v4 = 0;
    *v2 = a1 + 16;
    while ( 1 )
    {
      v5 = (unsigned __int8)a1[v3];
      v6 = v5 - 48;
      if ( (unsigned int)(v5 - 48) >= 0xA )
      {
        if ( (unsigned int)(v5 - 65) > 5 )
        {
          if ( (unsigned int)(v5 - 97) > 5 )
          {
            *v2 = &a1[v3];
            return v4;
          }
          v6 = v5 - 87;
        }
        else
        {
          v6 = v5 - 55;
        }
      }
      v4 = 16 * v4 + v6;
      if ( ++v3 == 16 )
        return v4;
    }
  }
  return 0;
}
