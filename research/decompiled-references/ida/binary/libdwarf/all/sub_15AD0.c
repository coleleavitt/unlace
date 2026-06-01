__int64 __fastcall sub_15AD0(
        unsigned __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        _DWORD *a6,
        unsigned __int64 *a7,
        __int64 a8)
{
  __int64 v9; // rax
  int v10; // r13d
  int abbrev_for_code; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rcx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r12
  __int64 v18; // rbx
  __int16 v19; // r9
  int v20; // eax
  __int64 result; // rax
  int v22; // esi
  unsigned __int64 v23; // r13
  __int64 v24; // rdx
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdi
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  const char *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  int v38; // edx
  __int64 v39; // rax
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v45; // [rsp+20h] [rbp-B8h]
  __int64 v46; // [rsp+30h] [rbp-A8h]
  __int64 v48; // [rsp+40h] [rbp-98h]
  __int16 v50; // [rsp+4Ch] [rbp-8Ch]
  __int16 v51; // [rsp+4Ch] [rbp-8Ch]
  __int64 v52; // [rsp+58h] [rbp-80h] BYREF
  __int64 v53; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v54; // [rsp+68h] [rbp-70h] BYREF
  _QWORD v55[13]; // [rsp+70h] [rbp-68h] BYREF

  v9 = *a2;
  v55[5] = __readfsqword(0x28u);
  v42 = v9;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55[0] = 0;
  if ( (unsigned int)dwarf_decode_leb128(a1, &v54, v55, a3) == 1 )
  {
LABEL_33:
    _dwarf_error_string(v42, a8, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
    return 1;
  }
  v10 = v55[0];
  v45 = v54;
  if ( !v55[0] )
  {
    _dwarf_error(v42, a8, 106);
    return 1;
  }
  abbrev_for_code = _dwarf_get_abbrev_for_code(a2, v55[0], &v52, &v53, a8);
  if ( abbrev_for_code == 1 )
    return 1;
  if ( abbrev_for_code == -1 )
  {
    dwarfstring_constructor(v55);
    dwarfstring_append_printf_u(
      v55,
      " DW_DLE_NEXT_DIE_NO_ABBREV_LIST There is no abbrev present for code %u in this compilation unit. ",
      v10);
    dwarfstring_append_printf_u(v55, "The highest known code in any compilation unit is %u.", v53);
    v39 = dwarfstring_string(v55, "The highest known code in any compilation unit is %u.", v38);
    v35 = 254;
    v36 = v39;
    goto LABEL_51;
  }
  v12 = v52;
  *a6 = *(unsigned __int16 *)(v52 + 10);
  v46 = *(_QWORD *)(v12 + 40);
  v13 = _dwarf_calculate_abbrev_section_end_ptr(a2);
  v14 = (_QWORD *)v52;
  v48 = v13;
  if ( !*(_QWORD *)(v52 + 72) )
  {
    result = _dwarf_fill_in_attr_form_abtable(a2, v46, v13, v52, a8);
    if ( (_DWORD)result )
      return result;
    v14 = (_QWORD *)v52;
  }
  v15 = a1 + v45;
  if ( !v14[6] )
  {
LABEL_25:
    *a7 = v15;
    return 0;
  }
  v16 = a1 + v45;
  v18 = 0;
  while ( 1 )
  {
    v19 = *(_WORD *)(v14[9] + 2 * v18);
    v20 = *(unsigned __int16 *)(v14[10] + 2 * v18);
    if ( (_WORD)v20 == 33 )
    {
      v50 = *(_WORD *)(v14[9] + 2 * v18);
      v55[0] = 0;
      if ( (unsigned int)_dwarf_skip_leb128(v46, v55, v48) == 1 )
      {
        _dwarf_error_string(v42, a8, 329, "DW_DLE_LEB_IMPROPER: skipping leb128 runs past allowed area.a");
        return 1;
      }
      if ( v50 == 1 && (a5 & 1) != 0 )
      {
LABEL_37:
        _dwarf_error(v42, a8, 253);
        return 1;
      }
      v46 += v55[0];
      goto LABEL_17;
    }
    if ( (_WORD)v20 == 22 )
    {
      v51 = *(_WORD *)(v14[9] + 2 * v18);
      v54 = 0;
      v55[0] = 0;
      v37 = dwarf_decode_leb128(v16, &v54, v55, a3);
      v19 = v51;
      if ( v37 == 1 )
        goto LABEL_33;
      v16 += v54;
      v20 = v55[0];
      if ( LOWORD(v55[0]) == 33 || LOWORD(v55[0]) == 22 )
      {
        _dwarf_error_string(
          v42,
          a8,
          253,
          "DW_DLE_NEXT_DIE_WRONG_FORM:  Reading Attriutes: an indirect  or implicit_const form leads to one of the same. "
          "Which is not handled. Corrupt Dwarf");
        return 1;
      }
    }
    if ( v19 == 1 && (a5 & 1) != 0 )
      break;
    v22 = (unsigned __int16)v20;
    if ( (_WORD)v20 )
    {
LABEL_39:
      v30 = *((unsigned __int8 *)a2 + 32);
      v31 = *a2;
      v54 = 0;
      result = _dwarf_get_size_of_val(
                 v31,
                 v22,
                 *((unsigned __int16 *)a2 + 9),
                 v30,
                 v16,
                 *((unsigned __int8 *)a2 + 16),
                 (__int64)&v54,
                 a3,
                 a8);
      if ( (_DWORD)result )
        return result;
      v32 = a3 - v16;
      if ( a3 < v16 )
        v32 = 0;
      if ( v32 < v54 )
      {
        dwarfstring_constructor(v55);
        v33 = "DW_DLE_NEXT_DIE_PAST_END: the DIE value just checked is %u bytes long, and that would extend past the end of the section.";
        dwarfstring_append_printf_u(
          v55,
          "DW_DLE_NEXT_DIE_PAST_END: the DIE value just checked is %u bytes long, and that would extend past the end of the section.",
          v54);
      }
      else
      {
        v16 += v54;
        if ( a3 >= v16 )
          goto LABEL_17;
        dwarfstring_constructor(v55);
        dwarfstring_append_printf_u(
          v55,
          "DW_DLE_NEXT_DIE_PAST_END: the DIE value just checked is %u bytes long, and puts us past the end of the section",
          v54);
        v33 = " which is 0x%x";
        dwarfstring_append_printf_u(v55, " which is 0x%x", a3);
      }
      v34 = dwarfstring_string(v55, v33);
      v35 = 252;
      v36 = v34;
      goto LABEL_51;
    }
LABEL_17:
    v14 = (_QWORD *)v52;
    if ( (unsigned __int64)++v18 >= *(_QWORD *)(v52 + 48) )
    {
      v15 = v16;
      goto LABEL_25;
    }
  }
  switch ( v20 )
  {
    case 16:
      v22 = 16;
      goto LABEL_39;
    case 17:
      v23 = v16;
      v24 = 1;
      v25 = a1;
      v55[0] = 0;
      if ( a3 < v23 + 1 )
        goto LABEL_27;
      goto LABEL_20;
    case 18:
      v23 = v16;
      v24 = 2;
      v25 = a1;
      v55[0] = 0;
      if ( a3 < v23 + 2 )
        goto LABEL_27;
      goto LABEL_20;
    case 19:
      v23 = v16;
      v24 = 4;
      v25 = a1;
      v55[0] = 0;
      if ( a3 < v23 + 4 )
        goto LABEL_27;
      goto LABEL_20;
    case 20:
      v23 = v16;
      v24 = 8;
      v25 = a1;
      v55[0] = 0;
      if ( a3 < v23 + 8 )
      {
LABEL_27:
        _dwarf_error_string(v42, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        return 1;
      }
LABEL_20:
      (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(v42 + 8296))(v55, v23, v24);
      v26 = v55[0];
LABEL_21:
      *a6 = 0;
      v27 = a3 - a4;
      if ( a3 < a4 )
        v27 = 0;
      if ( v27 < v26 )
      {
        _dwarf_error_string(
          v42,
          a8,
          413,
          "DW_DLE_SIBLING_OFFSET_WRONG the offset makes the new die ptr off the end of the section. Corrupt dwarf");
        return 1;
      }
      v15 = v26 + a4;
      if ( v25 < v26 + a4 )
        goto LABEL_25;
      dwarfstring_constructor(v55);
      dwarfstring_append_printf_u(
        v55,
        "DW_DLE_SIBLING_OFFSET_WRONG the DW_AT_sibling offset (%u) puts the sibling DIE ptr equal to or less then the cur"
        "rent DIE ptr. Corrupt dwarf",
        v26);
      v41 = dwarfstring_string(
              v55,
              "DW_DLE_SIBLING_OFFSET_WRONG the DW_AT_sibling offset (%u) puts the sibling DIE ptr equal to or less then t"
              "he current DIE ptr. Corrupt dwarf",
              v40);
      v35 = 413;
      v36 = v41;
      break;
    case 21:
      v28 = v16;
      v25 = a1;
      v54 = 0;
      v55[0] = 0;
      v29 = dwarf_decode_leb128(v28, &v54, v55, a3);
      v26 = v55[0];
      if ( v29 == 1 )
        goto LABEL_33;
      goto LABEL_21;
    default:
      goto LABEL_37;
  }
LABEL_51:
  _dwarf_error_string(v42, a8, v35, v36);
  dwarfstring_destructor(v55);
  return 1;
}

