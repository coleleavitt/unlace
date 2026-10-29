__int64 __fastcall dwarf_child(unsigned __int64 a1, _QWORD *a2, __int64 a3)
{
  struct Dwarf_Debug_s **v4; // rax
  struct Dwarf_Debug_s *v5; // r14
  unsigned int v6; // r12d
  __m128i *v8; // r15
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  int v11; // edx
  __int64 alloc; // rax
  _BYTE *v13; // rax
  __int64 v14; // rbx
  int abbrev_for_code; // eax
  _QWORD *v16; // r9
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // eax
  int v21; // edx
  __int64 v22; // rax
  _BYTE *v23; // [rsp+0h] [rbp-A8h]
  _QWORD *v24; // [rsp+8h] [rbp-A0h]
  int v25; // [rsp+1Ch] [rbp-8Ch] BYREF
  _BYTE *v26; // [rsp+20h] [rbp-88h] BYREF
  _BYTE *v27; // [rsp+28h] [rbp-80h] BYREF
  __int64 v28; // [rsp+30h] [rbp-78h] BYREF
  __int64 v29; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v30[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v25 = 0;
  v26 = nullptr;
  v27 = nullptr;
  v28 = 0;
  v29 = 0;
  if ( !a1 )
  {
    _dwarf_error(0, a3, 52);
    return 1;
  }
  v4 = *(struct Dwarf_Debug_s ***)(a1 + 16);
  if ( !v4 )
  {
    _dwarf_error(0, a3, 104);
    return 1;
  }
  v5 = *v4;
  if ( !*v4 || *(_QWORD *)v5 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a3,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v8 = (__m128i *)((char *)v5 + 152);
  if ( *(_DWORD *)(a1 + 32) )
    v8 = (__m128i *)((char *)v5 + 104);
  v26 = *(_BYTE **)a1;
  v9 = v26;
  v8[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)a1);
  if ( !*v9 )
    return (unsigned int)-1;
  v23 = (_BYTE *)_dwarf_calculate_info_section_end_ptr(*(_QWORD *)(a1 + 16));
  v6 = sub_15AD0(
         (unsigned __int64)v26,
         *(__int64 **)(a1 + 16),
         (unsigned __int64)v23,
         0,
         0,
         &v25,
         (unsigned __int64 *)&v27,
         a3);
  if ( v6 )
    return v6;
  if ( v26 == v23 )
    return (unsigned int)-1;
  v10 = v27;
  v11 = v25;
  v26 = v27;
  v8[2].m128i_i64[0] = (__int64)v27;
  if ( !v11 )
  {
    if ( v10 < v23 )
    {
      do
      {
        if ( *v10 )
          break;
        v8[2].m128i_i64[0] = (__int64)++v10;
      }
      while ( v10 != v23 );
    }
    return (unsigned int)-1;
  }
  alloc = _dwarf_get_alloc(v5, 8, 1);
  if ( !alloc )
  {
    _dwarf_error(v5, a3, 62);
    return 1;
  }
  v24 = (_QWORD *)alloc;
  *(_QWORD *)alloc = v26;
  *(_QWORD *)(alloc + 16) = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(alloc + 32) = *(_DWORD *)(a1 + 32);
  v6 = _dwarf_leb128_uword_wrapper(v5, &v26, v23, &v28, a3);
  if ( v6 )
  {
    dwarf_dealloc_die(v24);
    return v6;
  }
  v13 = v26;
  v14 = v28;
  v8[2].m128i_i64[0] = (__int64)v26;
  if ( !v14 )
  {
    if ( v13 < v23 )
    {
      do
      {
        if ( *v13 )
          break;
        v8[2].m128i_i64[0] = (__int64)++v13;
      }
      while ( v13 != v23 );
    }
    *a2 = 0;
    dwarf_dealloc(v5, v24, 8u);
    return (unsigned int)-1;
  }
  v24[3] = v14;
  abbrev_for_code = _dwarf_get_abbrev_for_code(v24[2], v14, v24 + 1, &v29, a3);
  v16 = v24;
  if ( abbrev_for_code == 1 )
  {
    dwarf_dealloc(v5, v24, 8u);
    return 1;
  }
  if ( abbrev_for_code == -1 )
  {
    dwarfstring_constructor(v30);
    dwarf_dealloc_die(v24);
    dwarfstring_append_printf_u(v30, "DW_DLE_ABBREV_MISSING: the abbrev code not found  in dwarf_child() is %u. ", v14);
    dwarfstring_append_printf_u(v30, "The highest known code in any compilation unit is %u.", v29);
    v22 = dwarfstring_string(v30, "The highest known code in any compilation unit is %u.", v21);
    _dwarf_error_string(v5, a3, 394, v22);
    dwarfstring_destructor(v30);
    return 1;
  }
  v17 = v24[1];
  if ( *(_QWORD *)(v17 + 72)
    || (v18 = *(_QWORD *)(v17 + 40),
        v19 = _dwarf_calculate_abbrev_section_end_ptr(v24[2]),
        v20 = _dwarf_fill_in_attr_form_abtable(v24[2], v18, v19, v24[1], a3),
        v16 = v24,
        !v20) )
  {
    *a2 = v16;
  }
  else
  {
    v6 = v20;
    dwarf_dealloc_die(v24);
  }
  return v6;
}

