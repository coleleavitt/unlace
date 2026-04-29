char __fastcall sub_B5220(__int64 a1, _QWORD *a2)
{
  char result; // al
  unsigned int tinfo_size; // r12d

  if ( (get_tinfo_property(*a2, 2) & 0xF) == 9 )
    return 1;
  if ( (get_tinfo_property(*a2, 2) & 0x2F) == 0xD )
    return (unsigned int)verify_tinfo(*a2) == 0;
  tinfo_size = get_tinfo_size(0, *a2, 0);
  result = sub_118880(tinfo_size);
  if ( result )
  {
    if ( (signed int)tinfo_size >= *(_DWORD *)(a1 + 92) )
      return (get_tinfo_property(*a2, 2) & 0xF) != 11;
    return 1;
  }
  return result;
}
