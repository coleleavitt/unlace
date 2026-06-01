__int64 __fastcall dwarf_get_loclist_context_basics(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _BYTE *a4,
        _BYTE *a5,
        _DWORD *a6,
        _BYTE *a7,
        _BYTE *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        _QWORD *a12,
        __int64 a13)
{
  __int64 result; // rax
  __int64 v14; // rax

  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a13,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_loclist_context_basics()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  result = 0xFFFFFFFFLL;
  if ( a2 < a1[830] )
  {
    v14 = *(_QWORD *)(a1[831] + 8 * a2);
    if ( !v14 || *(int **)(v14 + 32) != &dword_ADAB4 )
    {
      _dwarf_error_string(
        a1,
        a13,
        81,
        "DW_DLE_DBG_NULLcontext NULL or not LOCLISTS_MAGIC found in dwarf_get_loclist_context_basics()");
      return 1;
    }
    if ( a3 )
      *a3 = *(_QWORD *)(v14 + 16);
    if ( a4 )
      *a4 = *(_BYTE *)(v14 + 40);
    if ( a5 )
      *a5 = *(_BYTE *)(v14 + 41);
    if ( a6 )
      *a6 = *(unsigned __int16 *)(v14 + 44);
    if ( a7 )
      *a7 = *(_BYTE *)(v14 + 42);
    if ( a8 )
      *a8 = *(_BYTE *)(v14 + 43);
    if ( a9 )
      *a9 = *(_QWORD *)(v14 + 48);
    if ( a10 )
      *a10 = *(_QWORD *)(v14 + 64);
    if ( a11 )
      *a11 = *(_QWORD *)(v14 + 80);
    if ( a12 )
      *a12 = *(_QWORD *)(v14 + 88);
    return 0;
  }
  return result;
}

