__int64 __fastcall dwarf_gdbindex_types_culist_entry(
        __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 v7; // r15
  unsigned int v8; // edx
  int v12; // edx
  __int64 v13; // rax
  _QWORD v15[13]; // [rsp+10h] [rbp-68h] BYREF

  v15[5] = __readfsqword(0x28u);
  if ( !a1 || (v7 = *a1) == 0 )
  {
    _dwarf_error_string(
      0,
      a6,
      264,
      "DW_DLE_GDB_INDEX_INDEX_ERROR: passed in NULL inindexptr to dwarf_gdbindex_types_culist_entry");
    return 1;
  }
  v8 = -1;
  if ( a2 < a1[14] )
  {
    if ( a1[1] + a1[2] >= a1[13] + a2 * a1[15] + (unsigned int)(3 * *((_DWORD *)a1 + 32)) )
    {
      __memcpy_chk();
      __memcpy_chk();
      __memcpy_chk();
      v8 = 0;
      *a3 = 0;
      *a4 = 0;
      *a5 = 0;
      return v8;
    }
    dwarfstring_constructor(v15);
    dwarfstring_append_printf_u(
      v15,
      "DW_DLE_GDB_INDEX_INDEX_ERROR: end offset of data for type index %u is past the end of the section",
      a2);
    v13 = dwarfstring_string(
            v15,
            "DW_DLE_GDB_INDEX_INDEX_ERROR: end offset of data for type index %u is past the end of the section",
            v12);
    _dwarf_error_string(v7, a6, 264, v13);
    dwarfstring_destructor(v15);
    return 1;
  }
  return v8;
}

