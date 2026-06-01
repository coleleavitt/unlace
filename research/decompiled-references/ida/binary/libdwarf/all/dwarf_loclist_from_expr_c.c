__int64 __fastcall dwarf_loclist_from_expr_c(
        Dwarf_Debug a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        _QWORD *a7,
        _QWORD *a8,
        __int64 a9)
{
  bool v10; // zf
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 alloc; // rax
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // rax
  void *v18; // r13
  void *v19; // [rsp+10h] [rbp-88h]
  _QWORD *v20; // [rsp+10h] [rbp-88h]
  __int64 v22; // [rsp+18h] [rbp-80h]
  _QWORD v24[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+50h] [rbp-48h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v10 = a4 == 8;
  v11 = 0xFFFFFFFFLL;
  if ( v10 )
    v11 = -1;
  v27 = __readfsqword(0x28u);
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a9,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_loclist_from_expr_c()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v19 = (void *)v11;
  alloc = _dwarf_get_alloc(a1, 59, 1);
  v15 = (__int64)v19;
  v16 = a3;
  if ( !alloc )
  {
    _dwarf_error(a1, a9, 62);
    return 1;
  }
  *(_QWORD *)(alloc + 56) = &dword_ADAB4;
  v20 = (_QWORD *)alloc;
  v22 = v15;
  v24[1] = a2;
  v26 = 0;
  v24[0] = v16;
  v25 = 0;
  v17 = _dwarf_get_alloc(a1, 58, 1);
  v18 = (void *)v17;
  if ( !v17 )
  {
    dwarf_dealloc_loc_head_c(v20);
    _dwarf_error(a1, a9, 62);
    return 1;
  }
  *(_QWORD *)(v17 + 16) = &dword_ADAB4;
  *v20 = v17;
  v20[1] = 1;
  v20[4] = 0;
  v20[6] = a1;
  *((_WORD *)v20 + 20) = 0;
  result = _dwarf_fill_in_locdesc_op_c(a1, 0, (__int64)v20, (__int64)v24, a4, a5, a6, 0, v22, 0, a9);
  if ( (_DWORD)result )
  {
    dwarf_dealloc(a1, v18, 0x3Au);
    *v20 = 0;
    v20[1] = 0;
    dwarf_dealloc_loc_head_c(v20);
    return 1;
  }
  *a7 = v20;
  *a8 = 1;
  return result;
}

