char __fastcall sub_B85E0(__int64 a1)
{
  char result; // al
  unsigned int tinfo_size; // r12d

  if ( (get_tinfo_property() & 0xF) == 9 )
    return 1;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
    return (unsigned int)verify_tinfo() == 0;
  tinfo_size = get_tinfo_size();
  result = sub_11A640(tinfo_size);
  if ( result )
  {
    if ( (signed int)tinfo_size >= *(_DWORD *)(a1 + 92) )
      return (get_tinfo_property() & 0xF) != 11;
    return 1;
  }
  return result;
}
