__int64 __fastcall dwarf_die_abbrev_global_offset(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD **v6; // rcx
  _QWORD *v7; // rcx
  __int64 v9; // rdi

  if ( !a1 )
  {
    _dwarf_error(0, a4, 52);
    return 1;
  }
  v6 = *(_QWORD ***)(a1 + 16);
  if ( !v6 )
  {
    _dwarf_error(0, a4, 104);
    return 1;
  }
  v7 = *v6;
  if ( !v7 || *v7 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v9 = *(_QWORD *)(a1 + 8);
  if ( !v9 )
  {
    _dwarf_error(v7, a4, 110);
    return 1;
  }
  *a2 = *(_QWORD *)(v9 + 24);
  *a3 = *(_QWORD *)(v9 + 48);
  return 0;
}

