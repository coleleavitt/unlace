__int64 __fastcall sub_51B30(__int64 *a1, __int16 a2, _WORD *a3, _QWORD *a4, _QWORD *a5, __int64 a6)
{
  __int64 *v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  int abbrev_for_code; // eax
  __int64 v11; // r14
  _QWORD *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // r13
  unsigned __int64 v16; // rbx
  __int64 result; // rax
  unsigned __int64 v18; // rax
  __int16 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // rax
  const char *v30; // rdx
  __int64 v31; // rax
  __int64 v33; // [rsp+10h] [rbp-C8h]
  __int64 v34; // [rsp+10h] [rbp-C8h]
  __int16 v35; // [rsp+18h] [rbp-C0h]
  __int64 v36; // [rsp+28h] [rbp-B0h]
  __int64 v40; // [rsp+48h] [rbp-90h]
  _QWORD *v41; // [rsp+50h] [rbp-88h] BYREF
  __int64 v42; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-78h] BYREF
  __int64 v44; // [rsp+68h] [rbp-70h] BYREF
  _QWORD v45[13]; // [rsp+70h] [rbp-68h] BYREF

  v45[5] = __readfsqword(0x28u);
  v7 = (__int64 *)a1[2];
  v42 = 0;
  if ( !v7 )
  {
    _dwarf_error(0, a6, 104);
    return 1;
  }
  v8 = *v7;
  v9 = _dwarf_calculate_info_section_end_ptr(v7);
  abbrev_for_code = _dwarf_get_abbrev_for_code(v7, *(_QWORD *)a1[1], &v41, &v42, a6);
  if ( abbrev_for_code == 1 )
    return 1;
  if ( abbrev_for_code == -1 )
  {
    dwarfstring_constructor(v45);
    dwarfstring_append_printf_u(
      v45,
      "DW_DLE_CU_DIE_NO_ABBREV_LIST There is no abbrev present for code %u in this compilation unit. ",
      *(_QWORD *)a1[1]);
    dwarfstring_append_printf_u(v45, "The highest known code in any compilation unit is %u.", v42);
    v29 = dwarfstring_string(v45, "The highest known code in any compilation unit is %u.", v28);
    _dwarf_error_string(v8, a6, 256, v29);
    dwarfstring_destructor(v45);
    return 1;
  }
  v11 = v41[5];
  v36 = _dwarf_calculate_abbrev_section_end_ptr(v7);
  v33 = *a1;
  v43 = 0;
  v44 = 0;
  if ( (unsigned int)dwarf_decode_leb128(v33, &v44, &v43, v9) == 1 )
  {
    dwarfstring_constructor(v45);
    dwarfstring_append_printf_u(
      v45,
      "DW_DLE_DIE_BAD: In building an attrlist we run off the end of the DIE while skipping  the DIE tag, seeing the leb length as 0x%u ",
      v44);
    v25 = dwarfstring_string(
            v45,
            "DW_DLE_DIE_BAD: In building an attrlist we run off the end of the DIE while skipping  the DIE tag, seeing th"
            "e leb length as 0x%u ",
            v24);
    v26 = 112;
    v27 = v25;
LABEL_26:
    _dwarf_error_string(v8, a6, v26, v27);
    dwarfstring_destructor(v45);
    return 1;
  }
  v12 = v41;
  v13 = v44;
  if ( v41[9] )
  {
    if ( v41[10] )
      goto LABEL_7;
    goto LABEL_31;
  }
  v40 = v44;
  result = _dwarf_fill_in_attr_form_abtable(v7, v11, v36, v41, a6);
  if ( (_DWORD)result )
    return result;
  v12 = v41;
  v13 = v40;
  if ( !v41[10] || !v41[9] )
  {
LABEL_31:
    dwarfstring_constructor(v45);
    dwarfstring_append_printf_s();
    v31 = dwarfstring_string(v45, "DW_DLE_ALLOC_FAIL : Attempt to malloc space for %s failed", v30);
    v26 = 62;
    v27 = v31;
    goto LABEL_26;
  }
LABEL_7:
  if ( !v12[6] )
    return 0xFFFFFFFFLL;
  v14 = v33;
  v34 = v8;
  v15 = 0;
  v16 = v13 + v14;
  while ( 1 )
  {
    v43 = 0;
    v19 = *(_WORD *)(v12[9] + 2 * v15);
    v20 = *(unsigned __int16 *)(v12[10] + 2 * v15);
    if ( v20 == 22 )
    {
      v35 = *(_WORD *)(v12[9] + 2 * v15);
      v44 = 0;
      v45[0] = 0;
      v23 = dwarf_decode_leb128(v16, &v44, v45, v9);
      v19 = v35;
      if ( v23 == 1 )
      {
        _dwarf_error_string(v34, a6, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
        return 1;
      }
      v20 = LOWORD(v45[0]);
      v16 += v44;
      if ( LOWORD(v45[0]) == 22 )
      {
        _dwarf_error_string(
          v34,
          a6,
          114,
          "DW_DLE_ATTR_FORM_BAD: A DW_FORM_indirect in an abbreviation  indirects to another DW_FORM_indirect, which is inappropriate.");
        return 1;
      }
    }
    v21 = 0;
    if ( v20 == 33 )
    {
      v22 = v41[11];
      if ( !v22 )
      {
        _dwarf_error_string(
          v34,
          a6,
          114,
          "DW_DLE_ATTR_FORM_BAD: A DW_FORM_implicit_const in an abbreviation has no implicit const value. Corrupt dwarf.");
        return 1;
      }
      v21 = *(_QWORD *)(v22 + 8 * v15);
    }
    if ( v19 == a2 )
      break;
    result = _dwarf_get_size_of_val(
               v34,
               v20,
               *(unsigned __int16 *)(a1[2] + 18),
               *(unsigned __int8 *)(a1[2] + 32),
               v16,
               *(unsigned __int8 *)(a1[2] + 16),
               (__int64)&v43,
               v9,
               a6);
    if ( (_DWORD)result )
      return result;
    v18 = v9 - v16;
    if ( v9 < v16 )
      v18 = 0;
    if ( v18 < v43 )
    {
      _dwarf_error_string(
        v34,
        a6,
        113,
        "DW_DLE_DIE_ABBREV_BAD: in calculating the size of a value based on abbreviation data we find there is not enough"
        " room in the .debug_info section to contain the attribute value.");
      return 1;
    }
    v12 = v41;
    v16 += v43;
    if ( (unsigned __int64)++v15 >= v41[6] )
      return 0xFFFFFFFFLL;
  }
  *a3 = v20;
  if ( a5 )
    *a5 = v21;
  *a4 = v16;
  return 0;
}

