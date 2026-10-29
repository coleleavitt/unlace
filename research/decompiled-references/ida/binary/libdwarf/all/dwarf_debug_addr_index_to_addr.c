__int64 __fastcall dwarf_debug_addr_index_to_addr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi

  if ( !a1 )
  {
    _dwarf_error(0, a4, 52);
    return 1;
  }
  v4 = *(_QWORD **)(a1 + 16);
  if ( !v4 )
  {
    _dwarf_error(0, a4, 104);
    return 1;
  }
  if ( !*v4 || *(_QWORD *)*v4 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  return _dwarf_look_in_local_and_tied_by_index(*v4, v4, a2, a3, a4);
}

