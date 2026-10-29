__int64 __fastcall dwarf_get_rnglist_rle(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _DWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        __int64 a9)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // r13
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD v15[11]; // [rsp+0h] [rbp-58h] BYREF

  v15[5] = __readfsqword(0x28u);
  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a9,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_rnglist_rle()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v9 = a1[452];
  if ( a2 < a1[828] && a3 < v9 )
  {
    if ( v9 < a4 )
    {
      _dwarf_error_string(
        a1,
        a9,
        468,
        " DW_DLE_RNGLISTS_ERROR The end offset to dwarf_get_rnglist_rle() is too large for the section");
    }
    else if ( a3 >= a4 )
    {
      _dwarf_error_string(
        a1,
        a9,
        468,
        " DW_DLE_RNGLISTS_ERROR The end offset to dwarf_get_rnglist_rle() is smaller than the entry offset! Corrupt data");
    }
    else
    {
      v11 = a3 + 1;
      if ( a4 >= a3 + 1 )
        return sub_53FB0(
                 (__int64)a1,
                 (unsigned __int8 *)(a1[451] + a3),
                 a3,
                 a1[451] + a4,
                 *(unsigned __int8 *)(*(_QWORD *)(a1[829] + 8 * a2) + 56LL),
                 a5,
                 a6,
                 a7,
                 a8,
                 a9);
      dwarfstring_constructor(v15);
      dwarfstring_append_printf_u(
        v15,
        " DW_DLE_RNGLISTS_ERROR The entry offset+1 (%lu) dwarf_get_rnglist_rle() is too close to the end",
        v11);
      dwarfstring_append_printf_u(v15, " of the offset of the end of the entry (%lu) Apparently corrupt Dwarf", a4);
      v14 = dwarfstring_string(v15, " of the offset of the end of the entry (%lu) Apparently corrupt Dwarf", v13);
      _dwarf_error_string(a1, a9, 468, v14);
      dwarfstring_destructor(v15);
    }
    return 1;
  }
  return 0xFFFFFFFFLL;
}

