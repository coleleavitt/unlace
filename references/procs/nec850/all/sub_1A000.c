__int64 __fastcall sub_1A000(__int64 a1, _DWORD *a2, __int64 *a3)
{
  unsigned __int64 tinfo_size; // r13
  char tinfo_property; // al

  if ( (get_tinfo_property(*a3, 2) & 0x3F) == 1 )
    return 1;
  tinfo_size = get_tinfo_size(0, *a3, 0);
  if ( tinfo_size != -1 )
  {
    tinfo_property = get_tinfo_property(*a3, 2);
    if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
    {
      if ( tinfo_size <= 8 )
      {
        if ( !a2 )
          return 1;
        goto LABEL_14;
      }
    }
    else if ( (get_tinfo_property(*a3, 2) & 0x2F) == 0xD )
    {
      if ( !a2 )
        return 1;
      if ( !*(_DWORD *)(a1 + 264) )
      {
        cleanup_argloc(a2);
        return 1;
      }
      if ( tinfo_size > 8 || !(unsigned __int8)sub_18EB0(a3) )
      {
LABEL_11:
        *a2 = 3;
        a2[2] = 10;
        return 1;
      }
LABEL_14:
      if ( tinfo_size > 4 )
      {
        *a2 = 4;
        a2[2] = 720906;
        return 1;
      }
      goto LABEL_11;
    }
  }
  return 0;
}
