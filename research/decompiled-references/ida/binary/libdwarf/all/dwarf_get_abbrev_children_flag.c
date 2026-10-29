__int64 __fastcall dwarf_get_abbrev_children_flag(__int64 a1, _QWORD *a2, __int64 a3)
{
  if ( a1 )
  {
    *a2 = *(unsigned __int8 *)(a1 + 16);
    return 0;
  }
  else
  {
    _dwarf_error(0, a3, 110);
    return 1;
  }
}

