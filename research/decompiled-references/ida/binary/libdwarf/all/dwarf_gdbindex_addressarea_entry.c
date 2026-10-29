__int64 __fastcall dwarf_gdbindex_addressarea_entry(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 v9; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v15; // edx
  __int64 v16; // rax
  _BYTE v18[40]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  if ( a1 && (v9 = *a1) != 0 )
  {
    if ( a2 >= a1[18] )
    {
      _dwarf_error(*a1, a6, 264);
    }
    else
    {
      v11 = a1[17] + a2 * a1[19];
      if ( a1[1] + a1[2] >= (unsigned __int64)(v11 + 20) )
      {
        v12 = *(unsigned int *)(v11 + 16);
        v13 = *(_QWORD *)(v11 + 8);
        *a3 = *(_QWORD *)v11;
        *a4 = v13;
        *a5 = v12;
        return 0;
      }
      dwarfstring_constructor(v18);
      dwarfstring_append_printf_u(
        v18,
        "DW_DLE_GDB_INDEX_INDEX_ERROR: end offset of data for  dwarf_gdbindex_addressarea_entry %u is past the end of the section",
        a2);
      v16 = dwarfstring_string(
              v18,
              "DW_DLE_GDB_INDEX_INDEX_ERROR: end offset of data for  dwarf_gdbindex_addressarea_entry %u is past the end of the section",
              v15);
      _dwarf_error_string(v9, a6, 264, v16);
      dwarfstring_destructor(v18);
    }
  }
  else
  {
    _dwarf_error_string(
      0,
      a6,
      264,
      "DW_DLE_GDB_INDEX_INDEX_ERROR: passed in NULL inindexptr to dwarf_gdbindex_addressarea_entry");
  }
  return 1;
}

