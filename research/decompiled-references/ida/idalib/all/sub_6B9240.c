__int64 __fastcall sub_6B9240(__int64 a1, _QWORD *a2)
{
  __int64 tinfo_property; // rax
  __int64 tinfo_size; // rax

  if ( (get_tinfo_property(*a2, 2) & 0x2F) == 0xD )
  {
    tinfo_property = get_tinfo_property(*a2, 309);
    if ( tinfo_property )
      return sub_6B91C0(a1, tinfo_property);
  }
  tinfo_size = get_tinfo_size(0, *a2, 0);
  *(_BYTE *)(a1 + 10) = 0;
  *(_QWORD *)a1 = tinfo_size;
  *(_WORD *)(a1 + 8) = 0;
  return 0;
}
