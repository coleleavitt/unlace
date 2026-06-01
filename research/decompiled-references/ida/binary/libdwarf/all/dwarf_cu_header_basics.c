__int64 __fastcall dwarf_cu_header_basics(
        __int64 a1,
        _WORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        __int64 a11)
{
  __int64 v11; // rax

  if ( !a1 )
  {
    _dwarf_error(0, a11, 52);
    return 1;
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( !v11 )
  {
    _dwarf_error(0, a11, 104);
    return 1;
  }
  if ( !*(_QWORD *)v11 || **(_QWORD **)v11 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a11,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( a2 )
    *a2 = *(_WORD *)(v11 + 18);
  if ( a3 )
    *a3 = *(_DWORD *)(a1 + 32);
  if ( a4 )
    *a4 = *(_DWORD *)(v11 + 360);
  if ( a5 )
    *a5 = *(unsigned __int8 *)(v11 + 16);
  if ( a6 )
    *a6 = *(unsigned __int8 *)(v11 + 32);
  if ( a7 )
    *a7 = *(unsigned __int8 *)(v11 + 17);
  if ( a8 )
  {
    if ( *(_DWORD *)(v11 + 336) )
      *a8 = v11 + 82;
    else
      *a8 = 0;
  }
  if ( a9 )
    *a9 = *(_QWORD *)(v11 + 72);
  if ( a10 )
    *a10 = *(_QWORD *)(v11 + 8) + *(unsigned __int8 *)(v11 + 17) + (unsigned __int64)*(unsigned __int8 *)(v11 + 16);
  return 0;
}

