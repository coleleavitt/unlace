__int64 __fastcall sub_B3B70(__int64 a1)
{
  char tinfo_property; // al
  unsigned int v2; // edx

  tinfo_property = get_tinfo_property(a1, 2);
  v2 = 0;
  if ( (tinfo_property & 0x3E) == 0 )
    return v2;
  v2 = 1;
  if ( (tinfo_property & 0xFu) <= 8 )
    return v2;
  LOBYTE(v2) = (tinfo_property & 0x3F) == 45;
  return v2;
}
