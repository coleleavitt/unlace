char __fastcall sub_539710(__int64 *a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 *a4, char a5)
{
  unsigned __int64 v6; // rdx
  char tinfo_property; // bp
  char v8; // cl
  char result; // al

  v6 = *a3;
  if ( (a5 & 8) == 0 )
    return sub_538360(a1, a2, v6, *a4, a5 & 0x20);
  tinfo_property = get_tinfo_property(v6, 2);
  v8 = get_tinfo_property(*a4, 2);
  result = tinfo_property == 0 || v8 == 0;
  if ( result )
    return 0;
  if ( ((v8 & 0xF) == 9) == ((tinfo_property & 0xF) == 9) )
    return ((tinfo_property & 0x2F) == 13) ^ ((v8 & 0x2F) != 13);
  return result;
}

