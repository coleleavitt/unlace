__int64 __fastcall dwarf_close_str_offsets_table_access(_QWORD *a1, __int64 a2)
{
  struct Dwarf_Debug_s *v2; // rax

  if ( !a1 )
  {
    _dwarf_error(0, a2, 402);
    return 1;
  }
  v2 = (struct Dwarf_Debug_s *)a1[1];
  if ( !v2 )
  {
    _dwarf_error(0, a2, 403);
    return 1;
  }
  if ( *a1 != 3141330 )
  {
    _dwarf_error(a1[1], a2, 404);
    return 1;
  }
  *a1 = 57005;
  dwarf_dealloc(v2, a1, 0x40u);
  return 0;
}

