__int64 __fastcall dwarf_attr_offset(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD **v6; // rcx
  _QWORD *v7; // rcx
  __int64 v9; // rcx

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
  if ( *(_DWORD *)(a1 + 32) )
    v9 = v7[45];
  else
    v9 = v7[74];
  *a3 = *(_QWORD *)(a2 + 16) - v9;
  return 0;
}

