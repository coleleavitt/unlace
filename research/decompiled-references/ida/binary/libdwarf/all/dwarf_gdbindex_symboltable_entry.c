__int64 __fastcall dwarf_gdbindex_symboltable_entry(
        __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v6; // r14
  unsigned int v7; // edx
  int v10; // edx
  __int64 v11; // rax
  _QWORD v13[11]; // [rsp+10h] [rbp-58h] BYREF

  v13[5] = __readfsqword(0x28u);
  if ( !a1 || (v6 = *a1) == 0 )
  {
    _dwarf_error_string(
      0,
      a5,
      264,
      "DW_DLE_GDB_INDEX_INDEX_ERROR: passed in NULL inindexptr to dwarf_gdbindex_symboltable_entry");
    return 1;
  }
  v7 = -1;
  if ( a2 < a1[22] )
  {
    if ( a1[1] + a1[2] >= a1[21] + a2 * a1[23] + (unsigned int)(2 * *((_DWORD *)a1 + 48)) )
    {
      __memcpy_chk();
      __memcpy_chk();
      v7 = 0;
      *a3 = 0;
      *a4 = 0;
      return v7;
    }
    dwarfstring_constructor(v13);
    dwarfstring_append_printf_u(
      v13,
      "DW_DLE_GDB_INDEX_INDEX_ERROR: end offset of data for symboltable entry %u is past the end of the section",
      a2);
    v11 = dwarfstring_string(
            v13,
            "DW_DLE_GDB_INDEX_INDEX_ERROR: end offset of data for symboltable entry %u is past the end of the section",
            v10);
    _dwarf_error_string(v6, a5, 264, v11);
    dwarfstring_destructor(v13);
    return 1;
  }
  return v7;
}

