__int64 __fastcall dwarf_get_die_section_name(_QWORD *a1, int a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi
  __int64 result; // rax

  if ( a1 && *a1 == 3959286781LL )
  {
    v4 = a1 + 45;
    v5 = a1 + 74;
    result = 0xFFFFFFFFLL;
    if ( a2 )
      v5 = v4;
    if ( v5[1] )
    {
      *a3 = v5[23];
      return 0;
    }
  }
  else
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_die_section_name()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  return result;
}

