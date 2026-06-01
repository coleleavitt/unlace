__int64 __fastcall dwarf_get_tied_dbg(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rax

  if ( a1 && *a1 == 3959286781LL )
  {
    *a2 = 0;
    v3 = (_QWORD *)a1[4];
    if ( !v3 || v3 == a1 )
    {
      *a2 = a1;
      return 0;
    }
    else
    {
      *a2 = v3;
      return 0;
    }
  }
  else
  {
    _dwarf_error_string(
      0,
      a3,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_tied_dbg()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
}

