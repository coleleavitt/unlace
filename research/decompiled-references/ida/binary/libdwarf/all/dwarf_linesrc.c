__int64 __fastcall dwarf_linesrc(__int64 a1, __int64 *a2, __int64 a3)
{
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 64) )
      return sub_33100(*(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 16), a2, (__int64)"dwarf_linesrc", a3);
    _dwarf_error(0, a3, 102);
  }
  else
  {
    _dwarf_error(0, a3, 59);
  }
  return 1;
}

