__int64 __fastcall dwarf_sec_group_sizes(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, __int64 a6)
{
  if ( a1 && *(_QWORD *)a1 == 3959286781LL )
  {
    *a2 = *(unsigned int *)(a1 + 212);
    *a3 = *(unsigned int *)(a1 + 208);
    *a4 = *(unsigned int *)(a1 + 200);
    *a5 = *(unsigned int *)(a1 + 216);
    return 0;
  }
  else
  {
    _dwarf_error_string(
      0,
      a6,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_sec_group_sizes()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
}

