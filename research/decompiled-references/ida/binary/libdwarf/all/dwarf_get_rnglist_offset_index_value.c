__int64 __fastcall dwarf_get_rnglist_offset_index_value(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  int v17; // [rsp+8h] [rbp-60h]
  _QWORD v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v21[5] = __readfsqword(0x28u);
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a6,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_rnglist_offset_index_value()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v8 = *(_QWORD *)(a1 + 6632);
  result = 0xFFFFFFFFLL;
  if ( v8 && a2 < *(_QWORD *)(a1 + 6624) )
  {
    v9 = *(_QWORD *)(v8 + 8 * a2);
    if ( *(_QWORD *)(v9 + 40) != 43981 )
    {
      _dwarf_error_string(0, a6, 81, "DW_DLE_DBG_NULL rnglists context magic wrong not RNGLISTS_MAGIC");
      return 1;
    }
    if ( a3 < *(_QWORD *)(v9 + 64) )
    {
      v10 = *(unsigned __int8 *)(v9 + 32);
      v11 = a3 * v10;
      if ( a3 * v10 >= *(_QWORD *)(v9 + 24) )
      {
        _dwarf_error_string(
          a1,
          a6,
          506,
          "DW_DLE_RLE_ERROR: a .debug_rnglists[.dwo] section offset is greater than this rnglists table length");
        return 1;
      }
      if ( *(_QWORD *)(v9 + 104) < (unsigned __int64)(v11 + v10 + *(_QWORD *)(v9 + 80)) )
      {
        v17 = a3;
        dwarfstring_constructor(v21);
        dwarfstring_append_printf_u(
          v21,
          "DW_DLE_RNGLISTS_ERROR dwarf_get_rnglist_offset_index_value()  Offset for index %u is too large. ",
          v17);
        v15 = dwarfstring_string(
                v21,
                "DW_DLE_RNGLISTS_ERROR dwarf_get_rnglist_offset_index_value()  Offset for index %u is too large. ",
                v14);
        _dwarf_error_string(a1, a6, 468, v15);
        dwarfstring_destructor(v21);
        return 1;
      }
      v12 = *(_QWORD *)(v9 + 88) + v11;
      v21[0] = 0;
      if ( __CFADD__(v10, v12) )
      {
        _dwarf_error_string(a1, a6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
        return 1;
      }
      if ( *(_QWORD *)(v9 + 128) < (unsigned __int64)(v10 + v12) )
      {
        _dwarf_error_string(a1, a6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        return 1;
      }
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v21, v12, v10);
      v13 = *(_QWORD *)(v9 + 80);
      if ( v13 >= *(_QWORD *)(a1 + 3616) )
      {
        _dwarf_error_string(
          a1,
          a6,
          468,
          "DW_DLE_RNGLISTS_ERROR: The offset of a rnglists entry is past its allowed space");
        return 1;
      }
      if ( a4 )
        *a4 = v21[0];
      if ( a5 )
        *a5 = v13;
      return 0;
    }
  }
  return result;
}

