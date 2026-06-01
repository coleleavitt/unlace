__int64 __fastcall sub_53E720(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rax

  if ( !a2 )
    return 0;
  if ( (get_tinfo_property(*a2, 2) & 0x3F) != 0xD )
    return 0;
  v5 = *a2;
  if ( (*a2 & 0x100) != 0 )
    return 0;
  v6 = sub_534260(*(_QWORD *)(*(_QWORD *)a1 + 1824LL), v5);
  if ( !v6 )
    return 0;
  *(_WORD *)(v6 + 68) |= 0x4000u;
  *(_QWORD *)(v6 + 16) = a3;
  *(_DWORD *)(*(_QWORD *)v6 + 44LL) |= 0x400u;
  return 1;
}
