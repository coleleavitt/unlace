__int64 __fastcall sub_3B3510(unsigned int a1, _QWORD *a2)
{
  char tinfo_property; // al
  unsigned int v3; // edx

  tinfo_property = get_tinfo_property(*a2, 2);
  v3 = 0;
  if ( (tinfo_property & 0x2F) == 0xD )
    return get_numbered_type_name(0, a1) != 0;
  return v3;
}
