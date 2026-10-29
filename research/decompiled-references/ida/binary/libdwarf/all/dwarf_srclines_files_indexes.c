__int64 __fastcall dwarf_srclines_files_indexes(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r10

  if ( *(_DWORD *)a1 == -804450031 )
  {
    v6 = *(_QWORD *)(a1 + 240);
    v7 = *(_QWORD *)(a1 + 232);
    if ( v6 < 0 )
    {
      _dwarf_error_string(
        *(_QWORD *)(a1 + 288),
        a5,
        499,
        "DW_DLE_LINE_INDEX_WRONG Call to dwarf_srclines_subprog_data finds an Impossible file entry index value");
    }
    else if ( v7 < 0 )
    {
      _dwarf_error_string(
        *(_QWORD *)(a1 + 288),
        a5,
        500,
        "DW_DLE_LINE_COUNT_WRONG Call to dwarf_srclines_subprog_data finds an Impossible file count index value");
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 248);
      if ( v8 >= 0 )
      {
        *a2 = v6;
        *a3 = v7;
        *a4 = v8;
        return 0;
      }
      _dwarf_error_string(
        *(_QWORD *)(a1 + 288),
        a5,
        499,
        "DW_DLE_LINE_INDEX_WRONG Call to dwarf_srclines_subprog_data finds an Impossible endindex value");
    }
  }
  else
  {
    _dwarf_error(0, a5, 305);
  }
  return 1;
}

