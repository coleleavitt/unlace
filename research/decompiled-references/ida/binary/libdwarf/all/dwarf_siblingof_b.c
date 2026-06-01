__int64 __fastcall dwarf_siblingof_b(_QWORD *a1, __int64 a2, unsigned int a3, _QWORD *a4, __int64 a5)
{
  __int64 v5; // r10

  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_siblingof_b()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( !a2 )
  {
    if ( a3 )
      v5 = a1[13];
    else
      v5 = a1[19];
    return sub_16100(a1, a2, v5, a3, a4, a5);
  }
  v5 = *(_QWORD *)(a2 + 16);
  if ( !v5 )
  {
    _dwarf_error(0, a5, 104);
    return 1;
  }
  if ( *(_QWORD *)v5 && **(_QWORD **)v5 == 3959286781LL )
  {
    a3 = *(_DWORD *)(v5 + 648);
    return sub_16100(a1, a2, v5, a3, a4, a5);
  }
  _dwarf_error_string(
    0,
    a5,
    81,
    "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
  return 1;
}

