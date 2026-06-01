__int64 __fastcall dwarf_get_locdesc_entry_e(
        __int64 a1,
        unsigned __int64 a2,
        _BYTE *a3,
        _QWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        __int64 *a11,
        _BYTE *a12,
        _QWORD *a13,
        _QWORD *a14,
        __int64 a15)
{
  __int64 v16; // rax

  if ( !a1 || *(int **)(a1 + 56) != &dword_ADAB4 )
  {
    _dwarf_error_string(
      0,
      a15,
      81,
      "DW_DLE_DBG_NULL: Dwarf_Loc_Head_c NULL or not marked LOCLISTS_MAGIC in calling dwarf_get_locdesc_entry_d()");
    return 1;
  }
  if ( a2 >= *(_QWORD *)(a1 + 8) )
  {
    _dwarf_error(*(_QWORD *)(a1 + 48), a15, 312);
    return 1;
  }
  v16 = *(_QWORD *)a1 + 152 * a2;
  *a3 = *(_BYTE *)(v16 + 2);
  *a4 = *(_QWORD *)(v16 + 24);
  *a5 = *(_QWORD *)(v16 + 40);
  *a7 = *(_QWORD *)(v16 + 32);
  *a8 = *(_QWORD *)(v16 + 48);
  *a6 = *(_DWORD *)(v16 + 4);
  *a9 = *(unsigned __int16 *)(v16 + 104);
  *a11 = v16;
  *a12 = *(_WORD *)v16;
  *a13 = *(_QWORD *)(v16 + 120);
  *a14 = *(_QWORD *)(v16 + 128);
  if ( a10 )
    *a10 = *(_QWORD *)(v16 + 8);
  return 0;
}

