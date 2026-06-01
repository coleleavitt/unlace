__int64 __fastcall dwarf_srclines_subprog_count(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdx

  if ( a1 && *(_DWORD *)a1 == -804450031 )
  {
    if ( !a2 )
      return 0;
    v4 = *(_QWORD *)(a1 + 264);
    if ( v4 >= 0 )
    {
      *a2 = v4;
      return 0;
    }
    _dwarf_error_string(
      *(_QWORD *)(a1 + 288),
      a3,
      500,
      "DW_DLE_LINE_COUNT_WRONG Call to dwarf_srclines_subprog_count finds an Impossible subprogs count");
  }
  else
  {
    _dwarf_error(0, a3, 305);
  }
  return 1;
}

