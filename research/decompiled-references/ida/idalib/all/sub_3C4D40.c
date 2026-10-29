bool __fastcall sub_3C4D40(__int64 a1, __int64 a2, char a3)
{
  int v3; // ecx
  bool result; // al
  int v5; // eax
  int v6; // edx

  v3 = a3 & 0xF;
  if ( v3 == 15 )
  {
    if ( (a2 & 0xF00000) != 0 )
    {
      LOBYTE(v5) = 0;
      v6 = 1;
      while ( (a2 & (15LL << (4 * ((unsigned __int8)v5 + (v6 != 1) + 6)))) != 0 )
      {
        v5 = v6++;
        if ( v5 == 7 )
          return 1;
      }
    }
    return 0;
  }
  else
  {
    result = 1;
    if ( (a3 & 8) == 0 )
      return (a2 & (15LL << (4 * (v3 - (((a3 & 0xE) == 0) - 6))))) != 0;
  }
  return result;
}
