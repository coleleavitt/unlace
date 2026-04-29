bool __fastcall sub_2780A0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  char tinfo_property; // r12
  __int64 v5; // rdi
  char v6; // r12
  unsigned __int64 tinfo_size; // r12
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *a2;
  v9[1] = __readfsqword(0x28u);
  if ( (_BYTE)v3 && ((v3 & 0xE) != 0 || (v3 & 0x30) == 0) )
  {
    v9[0] = get_tinfo_property(v3, 9);
    tinfo_property = get_tinfo_property(v9[0], 2);
    clear_tinfo_t(v9);
    v5 = *a1;
    if ( (tinfo_property & 0x3F) != 0x30 )
    {
      if ( !(_BYTE)v5 || (v5 & 0xE) == 0 && (v5 & 0x30) != 0 )
        return 1;
      v9[0] = 0;
      v9[0] = get_tinfo_property(v5, 9);
      v6 = get_tinfo_property(v9[0], 2);
      clear_tinfo_t(v9);
      if ( (v6 & 0x3F) == 0x30 )
        return 1;
    }
  }
  if ( (get_tinfo_property(*a1, 2) & 0x2F) == 0xD )
    return 0;
  if ( (get_tinfo_property(*a2, 2) & 0x2F) == 0xD )
    return 1;
  if ( (get_tinfo_property(*a1, 2) & 0xF) == 0xB )
    return 0;
  if ( (get_tinfo_property(*a2, 2) & 0xF) == 0xB )
    return 1;
  if ( (get_tinfo_property(*a1, 2) & 0xF) == 9 )
    return 0;
  if ( (get_tinfo_property(*a2, 2) & 0xF) == 9 )
    return 1;
  tinfo_size = get_tinfo_size(0, *a2, 0);
  if ( get_tinfo_size(0, *a1, 0) < tinfo_size )
    return 1;
  if ( !(unsigned int)get_tinfo_property(*a2, 3) )
    return 0;
  return (unsigned int)get_tinfo_property(*a1, 3) == 0;
}
