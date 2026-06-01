__int64 __fastcall dwarf_get_fde_instr_bytes(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx

  if ( !a1 )
  {
    _dwarf_error(0, a4, 92);
    return 1;
  }
  v6 = (_QWORD *)a1[10];
  if ( !v6 || *v6 != 3959286781LL )
  {
    _dwarf_error_string(0, a4, 93, "DW_DLE_FDE_DBG_NULL: Either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v8 = a1[8];
  v9 = a1[9] - v8;
  *a2 = v8;
  *a3 = v9;
  return 0;
}

