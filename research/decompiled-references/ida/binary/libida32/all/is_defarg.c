bool __fastcall is_defarg(__int64 a1, char a2)
{
  int v2; // ecx
  bool result; // al
  int v4; // eax
  int v5; // esi

  v2 = a2 & 0xF;
  if ( v2 == 15 )
  {
    if ( (a1 & 0xF00000) != 0 )
    {
      LOBYTE(v4) = 0;
      v5 = 1;
      while ( (a1 & (15LL << (4 * ((unsigned __int8)v4 + (v5 != 1) + 6)))) != 0 )
      {
        v4 = v5++;
        if ( v4 == 7 )
          return 1;
      }
    }
    return 0;
  }
  else
  {
    result = 1;
    if ( (a2 & 8) == 0 )
      return (a1 & (15LL << (4 * (v2 - (((a2 & 0xE) == 0) - 6))))) != 0;
  }
  return result;
}

