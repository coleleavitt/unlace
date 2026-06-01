__int64 __fastcall dwarf_get_loclist_head_basics(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        _QWORD *a12,
        _QWORD *a13,
        _DWORD *a14,
        _QWORD *a15,
        _DWORD *a16,
        _QWORD *a17,
        _DWORD *a18,
        _QWORD *a19,
        _QWORD *a20,
        __int64 a21)
{
  _QWORD *v21; // rdx

  if ( !a1 )
  {
    _dwarf_error_string(
      0,
      a21,
      81,
      "DW_DLE_DBG_NULLNULL Dwarf_Loc_Head_c argument passed to dwarf_get_loclist_head_basics()");
    return 1;
  }
  if ( *(int **)(a1 + 56) != &dword_ADAB4 )
  {
    _dwarf_error_string(
      0,
      a21,
      81,
      "DW_DLE_DBG_NULLNULL Dwarf_Loc_Head_c  not set with LOCLISTS_MAGIC in argument passed to dwarf_get_loclist_head_basics()");
    return 1;
  }
  *a2 = *(_WORD *)(a1 + 40);
  *a3 = *(_QWORD *)(a1 + 8);
  *a4 = *(unsigned __int16 *)(a1 + 20);
  *a5 = *(_QWORD *)(a1 + 64);
  *a6 = *(_QWORD *)(a1 + 96);
  *a7 = *(_DWORD *)(a1 + 28);
  *a8 = *(_DWORD *)(a1 + 24);
  *a9 = *(_DWORD *)(a1 + 104);
  v21 = *(_QWORD **)(a1 + 72);
  if ( v21 )
  {
    *a10 = v21[2];
    *a11 = v21[3];
    *a12 = v21[8];
    *a13 = v21[6];
  }
  *a14 = *(_DWORD *)(a1 + 108);
  *a15 = *(_QWORD *)(a1 + 112);
  *a16 = *(_DWORD *)(a1 + 120);
  *a17 = *(_QWORD *)(a1 + 128);
  *a18 = *(_DWORD *)(a1 + 136);
  *a19 = *(_QWORD *)(a1 + 144);
  *a20 = *(_QWORD *)(a1 + 160);
  return 0;
}

