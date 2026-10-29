__int64 __fastcall dwarf_get_loclist_lle(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        unsigned __int8 **a11,
        __int64 a12)
{
  unsigned __int64 v12; // r10
  __int64 v13; // rax

  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a12,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_loclist_lle()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v12 = a1[830];
  if ( !v12 || a2 >= v12 )
    return 0xFFFFFFFFLL;
  v13 = *(_QWORD *)(a1[831] + 8 * a2);
  if ( !v13 || *(int **)(v13 + 32) != &dword_ADAB4 )
  {
    _dwarf_error_string(
      a1,
      a12,
      81,
      "DW_DLE_DBG_NULLcontext NULL or not LOCLISTS_MAGIC found in dwarf_get_loclist_lle()");
    return 1;
  }
  return sub_3C0D0(
           (__int64)a1,
           (unsigned __int8 *)(a3 + a1[422]),
           a3,
           a1[422] + a4,
           *(unsigned __int8 *)(v13 + 42),
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}

