__int64 __fastcall dwarf_get_cie_info_b(
        __int64 a1,
        _QWORD *a2,
        _BYTE *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _WORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _WORD *a10,
        __int64 a11)
{
  _QWORD *v12; // rdi

  if ( !a1 )
  {
    _dwarf_error(0, a11, 94);
    return 1;
  }
  v12 = *(_QWORD **)(a1 + 64);
  if ( !v12 || *v12 != 3959286781LL )
  {
    _dwarf_error_string(0, a11, 95, "DW_DLE_CIE_DBG_NULL: Either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( a3 )
    *a3 = *(_WORD *)(a1 + 92);
  if ( a4 )
    *a4 = *(_QWORD *)(a1 + 8);
  if ( a5 )
    *a5 = *(_QWORD *)(a1 + 16);
  if ( a6 )
    *a6 = *(_QWORD *)(a1 + 24);
  if ( a7 )
    *a7 = *(_QWORD *)(a1 + 32);
  if ( a8 )
    *a8 = *(_QWORD *)(a1 + 48);
  if ( a9 )
    *a9 = *(_QWORD *)a1
        + *(unsigned __int16 *)(a1 + 90)
        + (unsigned __int64)*(unsigned __int16 *)(a1 + 88)
        - (*(_QWORD *)(a1 + 48)
         - *(_QWORD *)(a1 + 40));
  if ( a10 )
    *a10 = *(_WORD *)(a1 + 88);
  *a2 = *(_QWORD *)a1;
  return 0;
}

