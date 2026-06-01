__int64 __fastcall sub_1AC9C0(unsigned int a1, _QWORD *a2, __int64 a3)
{
  char tinfo_property; // al
  unsigned int v5; // edx

  tinfo_property = get_tinfo_property(*a2, 2);
  v5 = 0;
  if ( (tinfo_property & 0x2F) == 0xD )
    return (unsigned __int8)is_type_choosable(a3, a1);
  return v5;
}
