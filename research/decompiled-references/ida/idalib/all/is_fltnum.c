bool __fastcall is_fltnum(__int64 a1, char a2)
{
  int v2; // ecx
  bool result; // al
  char v4; // cl
  int i; // eax

  v2 = a2 & 0xF;
  if ( v2 == 15 )
  {
    for ( i = 0; i != 8; ++i )
    {
      if ( (a1 & (15LL << (4 * ((unsigned __int8)i + (i > 1) + 5)))) == 12LL << (4 * ((unsigned __int8)i + (i > 1) + 5)) )
        return 1;
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( (a2 & 8) == 0 )
    {
      v4 = 4 * (v2 - (((a2 & 0xE) == 0) - 6));
      return (a1 & (15LL << v4)) == 12LL << v4;
    }
  }
  return result;
}
