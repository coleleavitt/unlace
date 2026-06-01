__int64 __fastcall dwarf_get_rnglist_context_basics(
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
  unsigned int v16; // edx
  __int64 v18; // rax

  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a13,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_rnglist_context_basics()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v16 = -1;
  if ( a2 >= a1[828] )
    return v16;
  v18 = *(_QWORD *)(a1[829] + 8 * a2);
  if ( *(_QWORD *)(v18 + 40) != 43981 )
  {
    _dwarf_error_string(
      0,
      a13,
      81,
      "DW_DLE_DBG_NULL rnglists context not RNGLISTS_MAGIC in dwarf_get_rnglist_context_basics()");
    return 1;
  }
  if ( a3 )
    *a3 = *(_QWORD *)(v18 + 16);
  if ( a4 )
    *a4 = *(_BYTE *)(v18 + 32);
  if ( a5 )
    *a5 = *(_BYTE *)(v18 + 48);
  if ( a6 )
    *a6 = *(_DWORD *)(v18 + 52);
  if ( a7 )
    *a7 = *(_BYTE *)(v18 + 56);
  if ( a8 )
    *a8 = *(_BYTE *)(v18 + 57);
  if ( a9 )
    *a9 = *(_QWORD *)(v18 + 64);
  if ( a10 )
    *a10 = *(_QWORD *)(v18 + 80);
  if ( a11 )
    *a11 = *(_QWORD *)(v18 + 96);
  if ( a12 )
    *a12 = *(_QWORD *)(v18 + 104);
  return 0;
}

