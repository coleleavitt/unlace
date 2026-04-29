bool __fastcall sub_2660C0(_QWORD *a1, _QWORD *a2)
{
  char tinfo_property; // bl
  __int64 tinfo_size; // rbx

  tinfo_property = get_tinfo_property(*a1, 2);
  if ( ((get_tinfo_property(*a2, 2) & 0xF) == 9) != ((tinfo_property & 0xF) == 9) )
    return 0;
  tinfo_size = get_tinfo_size(0, *a1, 0);
  if ( get_tinfo_size(0, *a2, 0) != tinfo_size )
    return 0;
  if ( (get_tinfo_property(*a1, 2) & 0x2F) == 0xD || (get_tinfo_property(*a2, 2) & 0x2F) == 0xD )
    return (unsigned int)lexcompare_tinfo(*a1, *a2, 0) == 0;
  return 1;
}
