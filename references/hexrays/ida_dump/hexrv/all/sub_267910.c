bool __fastcall sub_267910(_QWORD *a1, __int64 a2)
{
  char tinfo_property; // al
  __int64 v4; // r12
  char v5; // bl

  tinfo_property = get_tinfo_property(*a1, 2);
  if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
    return 0;
  v4 = *(int *)(a2 + 40);
  if ( v4 != get_tinfo_size(0, *a1, 0) || (get_tinfo_property(*a1, 2) & 0xF) == 0xB )
    return 0;
  v5 = get_tinfo_property(*a1, 2);
  return ((get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) == 9) == ((v5 & 0xF) == 9);
}
