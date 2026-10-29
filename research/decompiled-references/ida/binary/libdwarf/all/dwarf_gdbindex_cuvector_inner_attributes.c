__int64 __fastcall dwarf_gdbindex_cuvector_inner_attributes(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  int v5; // ebx
  __int64 v7; // r13
  int v10; // edx
  __int64 v11; // rax
  _QWORD v12[11]; // [rsp+0h] [rbp-58h] BYREF

  v5 = a3;
  v12[5] = __readfsqword(0x28u);
  if ( a1 && (v7 = *a1) != 0 )
  {
    if ( a1[25] + a3 * a1[27] + a1[27] + a2 + a1[27] < (unsigned __int64)(a1[1] + a1[2]) )
    {
      __memcpy_chk();
      *a4 = 0;
      return 0;
    }
    dwarfstring_constructor(v12);
    dwarfstring_append_printf_u(
      v12,
      "DW_DLE_GDB_INDEX_INDEX_ERROR: end offset of data for cuvector_inner_attribute %u is past the end of the section",
      v5);
    v11 = dwarfstring_string(
            v12,
            "DW_DLE_GDB_INDEX_INDEX_ERROR: end offset of data for cuvector_inner_attribute %u is past the end of the section",
            v10);
    _dwarf_error_string(v7, a5, 264, v11);
    dwarfstring_destructor(v12);
  }
  else
  {
    _dwarf_error_string(
      0,
      a5,
      264,
      "DW_DLE_GDB_INDEX_INDEX_ERROR: passed in NULL indexptr to dwarf_gdbindex_cuvector_length");
  }
  return 1;
}

