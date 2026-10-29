__int64 __fastcall dwarf_get_loclist_offset_index_value(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a6,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_loclist_offset_index_value()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  result = 0xFFFFFFFFLL;
  if ( a2 < *(_QWORD *)(a1 + 6640) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 6648) + 8 * a2);
    if ( !v7 || *(int **)(v7 + 32) != &dword_ADAB4 )
    {
      _dwarf_error_string(
        a1,
        a6,
        81,
        "DW_DLE_DBG_NULLcontext NULL or not LOCLISTS_MAGIC found in dwarf_get_loclist_offset_index_value()");
      return 1;
    }
    if ( a3 < *(_QWORD *)(v7 + 48) )
    {
      v8 = *(unsigned __int8 *)(v7 + 40);
      v9 = *(_QWORD *)(v7 + 72);
      v15[0] = 0;
      v10 = v8 * a3 + v9;
      if ( __CFADD__(v8, v10) )
      {
        _dwarf_error_string(a1, a6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
        return 1;
      }
      if ( *(_QWORD *)(v7 + 112) < (unsigned __int64)(v8 + v10) )
      {
        _dwarf_error_string(a1, a6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        return 1;
      }
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v15, v10, v8);
      v11 = v15[0];
      if ( v15[0] >= *(_QWORD *)(v7 + 24) )
      {
        _dwarf_error_string(a1, a6, 469, "DW_DLE_LOCLISTS_ERROR: An lle target offset value is Too large to be real");
        return 1;
      }
      if ( a4 )
        *a4 = v15[0];
      if ( a5 )
        *a5 = *(_QWORD *)(v7 + 64) + v11;
      return 0;
    }
  }
  return result;
}

