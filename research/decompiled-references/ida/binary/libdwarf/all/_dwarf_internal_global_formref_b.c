__int64 __fastcall dwarf_internal_global_formref_b(__int64 a1, __int64 a2, Dwarf_Off *a3, int *a4, Dwarf_Error *a5)
{
  unsigned int v9; // r14d
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int16 v14; // si
  int v15; // r8d
  unsigned __int64 v16; // rdx
  const char *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rsi
  Dwarf_Off v22; // rax
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  int v27; // edx
  unsigned __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rdx
  struct Dwarf_Debug_s *v31; // rdi
  int die_given_sig8; // eax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rsi
  unsigned __int8 v37; // al
  unsigned __int8 *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rsi
  __int64 v42; // rsi
  __int64 v43; // r12
  Dwarf_Error v44; // rsi
  const char *v45; // rsi
  __int64 v46; // rax
  unsigned __int16 v47; // [rsp+Ch] [rbp-ACh]
  int v48; // [rsp+Ch] [rbp-ACh]
  int v49; // [rsp+Ch] [rbp-ACh]
  int v50; // [rsp+Ch] [rbp-ACh]
  int v51; // [rsp+Ch] [rbp-ACh]
  int v52; // [rsp+Ch] [rbp-ACh]
  int v53; // [rsp+Ch] [rbp-ACh]
  int v54; // [rsp+Ch] [rbp-ACh]
  int v55; // [rsp+Ch] [rbp-ACh]
  int v56; // [rsp+Ch] [rbp-ACh]
  int v57; // [rsp+Ch] [rbp-ACh]
  int v58; // [rsp+Ch] [rbp-ACh]
  __int64 v59; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+20h] [rbp-98h] BYREF
  Dwarf_Off v61; // [rsp+28h] [rbp-90h] BYREF
  Dwarf_Die v62[4]; // [rsp+30h] [rbp-88h] BYREF
  Dwarf_Off v63[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v64; // [rsp+70h] [rbp-48h]
  unsigned __int64 v65; // [rsp+78h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v59 = 0;
  v60 = 0;
  if ( (unsigned int)sub_1F170(&v59, &v60, a1, (__int64)a5) )
    return 1;
  v11 = v60;
  v9 = 0;
  v12 = _dwarf_calculate_info_section_end_ptr(v60);
  v13 = *(unsigned __int16 *)(a1 + 2);
  v14 = *(_WORD *)(v11 + 18);
  v15 = *(_DWORD *)(v11 + 648);
  v16 = v12;
  if ( (unsigned __int16)v13 > 0x23u )
  {
    if ( (unsigned __int16)(v13 - 7968) > 1u )
      goto LABEL_8;
LABEL_11:
    v19 = *(unsigned __int8 *)(v11 + 16);
    v20 = v59;
    if ( v19 == 4 )
    {
LABEL_46:
      v63[0] = 0;
      v42 = *(_QWORD *)(a1 + 16);
      if ( v16 >= v42 + 4 )
      {
        v57 = v15;
        (*(void (__fastcall **)(Dwarf_Off *, __int64, __int64, __int64))(v20 + 8296))(v63, v42, 4, v13);
        v22 = v63[0];
        v15 = v57;
        goto LABEL_15;
      }
    }
    else
    {
      if ( v19 != 8 )
      {
LABEL_36:
        _dwarf_error(v20, a5, 225);
        return 1;
      }
LABEL_13:
      v63[0] = 0;
      v21 = *(_QWORD *)(a1 + 16);
      if ( v16 >= v21 + 8 )
      {
        v48 = v15;
        (*(void (__fastcall **)(Dwarf_Off *, __int64, __int64))(v20 + 8296))(v63, v21, 8);
        v22 = v63[0];
        v15 = v48;
LABEL_15:
        *a4 = v15;
        *a3 = v22;
        return v9;
      }
    }
    _dwarf_error_string(v20, a5, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    return 1;
  }
  if ( (unsigned __int16)v13 <= 5u )
  {
LABEL_8:
    v47 = *(_WORD *)(a1 + 2);
    v62[0] = nullptr;
    dwarfstring_constructor(v63);
    dwarfstring_append_printf_u(v63, "DW_DLE_BAD_REF_FORM: The form code is 0x%x.. ", v47);
    if ( dwarf_get_FORM_name(v47, (const char **)v62) )
      v62[0] = (Dwarf_Die)"<UnknownFormCode>";
    dwarfstring_append_printf_s();
    v18 = dwarfstring_string(v63, " %s.", v17);
    _dwarf_error_string(v59, a5, 118, v18);
    dwarfstring_destructor(v63);
    return 1;
  }
  switch ( *(_WORD *)(a1 + 2) )
  {
    case 6:
      v34 = v59;
      if ( v14 > 3u )
      {
        sub_1F210(v59, (__int64)a5, 6u, *(_WORD *)a1);
        return 1;
      }
      v63[0] = 0;
      v35 = *(_QWORD *)(a1 + 16);
      if ( v16 < v35 + 4 )
        goto LABEL_45;
      v52 = v15;
      (*(void (__fastcall **)(Dwarf_Off *, __int64, __int64))(v59 + 8296))(v63, v35, 4);
      v22 = v63[0];
      v15 = v52;
      goto LABEL_15;
    case 7:
      v34 = v59;
      if ( v14 > 3u )
      {
        sub_1F210(v59, (__int64)a5, 7u, *(_WORD *)a1);
      }
      else
      {
        v63[0] = 0;
        v36 = *(_QWORD *)(a1 + 16);
        if ( v16 >= v36 + 8 )
        {
          v53 = v15;
          (*(void (__fastcall **)(Dwarf_Off *, __int64, __int64))(v59 + 8296))(v63, v36, 8);
          v22 = v63[0];
          v15 = v53;
          goto LABEL_15;
        }
LABEL_45:
        _dwarf_error_string(v34, a5, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      }
      return 1;
    case 0x10:
      if ( v14 == 2 )
        v37 = *(_BYTE *)(v11 + 32);
      else
        v37 = *(_BYTE *)(v11 + 16);
      v20 = v59;
      v13 = v37;
      if ( v37 == 4 )
        goto LABEL_46;
      if ( v37 != 8 )
        goto LABEL_36;
      goto LABEL_13;
    case 0x11:
      v38 = *(unsigned __int8 **)(a1 + 16);
      if ( (unsigned __int64)v38 >= v16 )
      {
        _dwarf_error_string(v59, a5, 119, "DW_DLE_ATTR_FORM_OFFSET_BAD: DW_FORM_ref1 outside of the section.");
      }
      else
      {
        v28 = *v38;
LABEL_19:
        if ( v28 < *(_QWORD *)(v11 + 8)
                 + *(unsigned __int8 *)(v11 + 17)
                 + (unsigned __int64)*(unsigned __int8 *)(v11 + 16) )
        {
          v22 = *(_QWORD *)(v11 + 72) + v28;
          goto LABEL_15;
        }
        _dwarf_error(v59, a5, 119);
      }
      return 1;
    case 0x12:
      v39 = *(_QWORD *)(a1 + 16);
      v34 = v59;
      v63[0] = 0;
      if ( v16 < v39 + 2 )
        goto LABEL_45;
      v54 = v15;
      (*(void (__fastcall **)(Dwarf_Off *, __int64, __int64))(v59 + 8296))(v63, v39, 2);
      v28 = v63[0];
      v15 = v54;
      goto LABEL_19;
    case 0x13:
      v40 = *(_QWORD *)(a1 + 16);
      v34 = v59;
      v63[0] = 0;
      if ( v16 < v40 + 4 )
        goto LABEL_45;
      v55 = v15;
      (*(void (__fastcall **)(Dwarf_Off *, __int64, __int64))(v59 + 8296))(v63, v40, 4);
      v28 = v63[0];
      v15 = v55;
      goto LABEL_19;
    case 0x14:
      v41 = *(_QWORD *)(a1 + 16);
      v34 = v59;
      v63[0] = 0;
      if ( v16 < v41 + 8 )
        goto LABEL_45;
      v56 = v15;
      (*(void (__fastcall **)(Dwarf_Off *, __int64, __int64))(v59 + 8296))(v63, v41, 8);
      v28 = v63[0];
      v15 = v56;
      goto LABEL_19;
    case 0x15:
      v25 = *(_QWORD *)(a1 + 16);
      v50 = *(_DWORD *)(v11 + 648);
      v62[0] = nullptr;
      v63[0] = 0;
      v26 = dwarf_decode_leb128(v25, v62, v63, v12);
      v15 = v50;
      v27 = v26;
      v28 = v63[0];
      if ( v27 != 1 )
        goto LABEL_19;
      goto LABEL_57;
    case 0x17:
    case 0x1D:
    case 0x1F:
      goto LABEL_11;
    case 0x20:
      v61 = 0;
      v29 = *(__int64 **)(a1 + 16);
      if ( v16 >= (unsigned __int64)(v29 + 1) )
      {
        v30 = *v29;
        v31 = *(struct Dwarf_Debug_s **)(a1 + 32);
        v62[0] = nullptr;
        v64 = v30;
        v63[0] = 0;
        v64 = *v29;
        die_given_sig8 = _dwarf_internal_find_die_given_sig8(v31);
        if ( !die_given_sig8 )
        {
          v33 = dwarf_die_offsets(v62[0], &v61, v63, a5);
          if ( !v33 )
          {
            v51 = *(_DWORD *)(*((_QWORD *)v62[0] + 2) + 648LL);
            dwarf_dealloc_die(v62[0]);
            v15 = v51;
            goto LABEL_25;
          }
          v58 = v33;
          dwarf_dealloc_die(v62[0]);
          die_given_sig8 = v58;
        }
        if ( die_given_sig8 == 1 )
        {
          if ( a5 )
          {
            dwarfstring_constructor_fixed(v62, 400);
            dwarfstring_constructor_fixed(v63, 200);
            dwarf_errmsg(*a5);
            dwarfstring_append();
            dwarfstring_append();
            v43 = v59;
            v44 = *a5;
            dwarf_dealloc_error(v59, *a5);
            *a5 = nullptr;
            v45 = (const char *)dwarfstring_string(v63, (const char *)v44);
            dwarfstring_append();
            dwarfstring_destructor(v63);
            v46 = dwarfstring_string(v62, v45);
            _dwarf_error_string(v43, a5, 228, v46);
            dwarfstring_destructor(v62);
          }
          return 1;
        }
        if ( die_given_sig8 == -1 )
          return (unsigned int)-1;
        v15 = 1;
LABEL_25:
        v22 = v61;
        goto LABEL_15;
      }
      _dwarf_error_string(
        v59,
        a5,
        228,
        "DW_DLE_REF_SIG8_NOT_HANDLED:  Dwarf_Sig8 content runs off the end of its section");
      break;
    case 0x22:
    case 0x23:
      v23 = *(_QWORD *)(a1 + 16);
      v49 = *(_DWORD *)(v11 + 648);
      v62[0] = nullptr;
      v63[0] = 0;
      v24 = dwarf_decode_leb128(v23, v62, v63, v12);
      v15 = v49;
      if ( v24 != 1 )
      {
        v22 = v63[0];
        *(_QWORD *)(a1 + 16) += v62[0];
        goto LABEL_15;
      }
LABEL_57:
      _dwarf_error_string(v59, a5, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
      return 1;
    default:
      goto LABEL_8;
  }
  return 1;
}

