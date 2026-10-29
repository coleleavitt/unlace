__int64 __fastcall dwarf_get_line_section_name_from_die(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD **v5; // rdx
  _QWORD *v6; // rdx
  unsigned int v7; // ecx

  if ( a3 )
    *a3 = 0;
  if ( !a1 )
  {
    _dwarf_error(0, a3, 52);
    return 1;
  }
  v5 = *(_QWORD ***)(a1 + 16);
  if ( !v5 )
  {
    _dwarf_error(0, a3, 104);
    return 1;
  }
  v6 = *v5;
  if ( !v6 || *v6 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a3,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v7 = -1;
  if ( !v6[133] )
    return v7;
  *a2 = v6[155];
  return 0;
}

