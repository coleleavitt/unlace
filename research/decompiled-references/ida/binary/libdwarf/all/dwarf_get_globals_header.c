__int64 __fastcall dwarf_get_globals_header(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        __int64 a9)
{
  __int64 v9; // rax
  _QWORD *v11; // rdx

  if ( !a1 )
  {
    _dwarf_error(0, a9, 125);
    return 1;
  }
  v9 = *(_QWORD *)(a1 + 16);
  if ( !v9 )
  {
    _dwarf_error(0, a9, 126);
    return 1;
  }
  v11 = *(_QWORD **)(v9 + 8);
  if ( !v11 || *v11 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a9,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_globals_header()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( a2 )
    *a2 = *(_DWORD *)(v9 + 16);
  if ( a3 )
    *a3 = *(_QWORD *)(v9 + 32);
  if ( a4 )
    *a4 = *(unsigned __int8 *)(v9 + 24);
  if ( a5 )
    *a5 = *(unsigned __int8 *)(v9 + 25);
  if ( a6 )
    *a6 = *(unsigned __int16 *)(v9 + 28);
  if ( a7 )
    *a7 = *(_QWORD *)(v9 + 48);
  if ( a8 )
    *a8 = *(_QWORD *)(v9 + 56);
  return 0;
}

