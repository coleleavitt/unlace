__int64 __fastcall dwarf_get_fde_range(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        __int64 a9)
{
  _QWORD *v12; // rdx

  if ( !a1 )
  {
    _dwarf_error(0, a9, 92);
    return 1;
  }
  v12 = (_QWORD *)a1[10];
  if ( !v12 || *v12 != 3959286781LL )
  {
    _dwarf_error_string(0, a9, 93, "DW_DLE_FDE_DBG_NULL: Either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( a2 )
    *a2 = a1[4];
  if ( a3 )
    *a3 = a1[6];
  if ( a4 )
    *a4 = a1[7];
  if ( a5 )
    *a5 = *a1;
  if ( a6 )
    *a6 = a1[1];
  if ( a7 )
    *a7 = a1[2];
  if ( a8 )
    *a8 = a1[7] - a1[18];
  return 0;
}

