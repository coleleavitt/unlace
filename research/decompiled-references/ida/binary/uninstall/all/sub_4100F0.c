__int64 __fastcall sub_4100F0(_DWORD *a1)
{
  int v1; // ecx
  unsigned int v2; // edx

  if ( a1[9] == 1 )
    v1 = 1 - a1[11];
  else
    v1 = a1[11];
  v2 = 0;
  if ( (v1 & 3) == 0 )
  {
    LOBYTE(v2) = 1;
    if ( a1[10] )
    {
      if ( v1 != 400 * (v1 / 400) )
        return v1 != 100 * (v1 / 100);
    }
  }
  return v2;
}

