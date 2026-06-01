__int64 __fastcall dwarf_attr(unsigned __int64 a1, unsigned __int16 a2, __int64 *a3, __int64 a4)
{
  _QWORD **v4; // r14
  _QWORD *v6; // r15
  __int64 result; // rax
  __int64 v9; // rax
  __int64 alloc; // rax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rax
  const char *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-A0h]
  unsigned __int16 v17; // [rsp+1Eh] [rbp-8Ah] BYREF
  __int64 v18; // [rsp+20h] [rbp-88h] BYREF
  __int64 v19; // [rsp+28h] [rbp-80h] BYREF
  __int64 v20; // [rsp+30h] [rbp-78h] BYREF
  __int64 v21; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v22[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-40h]

  v4 = *(_QWORD ***)(a1 + 16);
  v23 = __readfsqword(0x28u);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( !a1 )
  {
    _dwarf_error(0, a4, 52);
    return 1;
  }
  if ( !v4 )
  {
    _dwarf_error(0, a4, 104);
    return 1;
  }
  v6 = *v4;
  if ( !*v4 || *v6 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( (unsigned int)_dwarf_get_abbrev_for_code(v4, **(_QWORD **)(a1 + 8), &v20, &v21, a4) == 1 )
    return 1;
  v9 = v20;
  if ( !*(_QWORD *)(v20 + 72) )
  {
    v16 = *(_QWORD *)(v20 + 40);
    v13 = _dwarf_calculate_abbrev_section_end_ptr(v4);
    result = _dwarf_fill_in_attr_form_abtable(*(_QWORD *)(a1 + 16), v16, v13, v20, a4);
    if ( (_DWORD)result )
      return result;
    v9 = v20;
  }
  if ( !*(_QWORD *)(v9 + 80) )
  {
    dwarfstring_constructor(v22);
    dwarfstring_append_printf_s();
    v15 = dwarfstring_string(v22, "DW_DLE_ALLOC_FAIL : Attempt to malloc space for %s failed", v14);
    _dwarf_error_string(v6, a4, 62, v15);
    dwarfstring_destructor(v22);
    return 1;
  }
  result = sub_51B30((__int64 *)a1, a2, &v17, &v18, &v19, a4);
  if ( (_DWORD)result == 1 )
    return 1;
  if ( (_DWORD)result != -1 )
  {
    alloc = _dwarf_get_alloc(v6, 10, 1);
    if ( alloc )
    {
      v11 = v17;
      *(_WORD *)(alloc + 4) = v17;
      *(_DWORD *)alloc = a2 | (v11 << 16);
      v12 = v19;
      *(__m128 *)(alloc + 8) = _mm_loadh_ps((const double *)&v18);
      *(_QWORD *)(alloc + 24) = v12;
      *(__m128i *)(alloc + 32) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)a1);
      *a3 = alloc;
      return 0;
    }
    _dwarf_error_string(v6, a4, 62, "DW_DLE_ALLOC_FAIL allocating a single Dwarf_Attribute in function dwarf_attr().");
    return 1;
  }
  return result;
}

