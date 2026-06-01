__int64 __fastcall dwarf_formref(unsigned __int16 *a1, unsigned __int64 *a2, _DWORD *a3, Dwarf_Error *a4)
{
  unsigned int v8; // ebx
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned int v12; // edi
  int v13; // r8d
  unsigned __int64 v14; // rcx
  const char *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rsi
  struct Dwarf_Die_s *v25; // rdi
  int v26; // eax
  int v27; // [rsp+0h] [rbp-98h]
  int v28; // [rsp+0h] [rbp-98h]
  int v29; // [rsp+0h] [rbp-98h]
  int v30; // [rsp+0h] [rbp-98h]
  unsigned __int64 v31; // [rsp+0h] [rbp-98h]
  int v32; // [rsp+Ch] [rbp-8Ch]
  __int64 v33; // [rsp+10h] [rbp-88h] BYREF
  __int64 v34; // [rsp+18h] [rbp-80h] BYREF
  char *v35; // [rsp+20h] [rbp-78h] BYREF
  char *v36; // [rsp+28h] [rbp-70h] BYREF
  Dwarf_Half v37[20]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  *a2 = 0;
  v33 = 0;
  v34 = 0;
  if ( !(unsigned int)sub_1F170(&v33, &v34, (__int64)a1, (__int64)a4) )
  {
    v10 = v34;
    v8 = 0;
    v11 = _dwarf_calculate_info_section_end_ptr(v34);
    v12 = a1[1];
    v13 = *(_DWORD *)(v10 + 648);
    v14 = v11;
    switch ( a1[1] )
    {
      case 0x11u:
        v19 = **((unsigned __int8 **)a1 + 2);
        goto LABEL_8;
      case 0x12u:
        v23 = *((_QWORD *)a1 + 2);
        v22 = v33;
        *(_QWORD *)v37 = 0;
        if ( v14 < v23 + 2 )
          goto LABEL_22;
        v29 = v13;
        (*(void (__fastcall **)(Dwarf_Half *, __int64, __int64))(v33 + 8296))(v37, v23, 2);
        v19 = *(_QWORD *)v37;
        v13 = v29;
        goto LABEL_8;
      case 0x13u:
        v24 = *((_QWORD *)a1 + 2);
        v22 = v33;
        *(_QWORD *)v37 = 0;
        if ( v14 < v24 + 4 )
          goto LABEL_22;
        v30 = v13;
        (*(void (__fastcall **)(Dwarf_Half *, __int64, __int64))(v33 + 8296))(v37, v24, 4);
        v19 = *(_QWORD *)v37;
        v13 = v30;
        goto LABEL_8;
      case 0x14u:
        v21 = *((_QWORD *)a1 + 2);
        v22 = v33;
        *(_QWORD *)v37 = 0;
        if ( v14 < v21 + 8 )
        {
LABEL_22:
          _dwarf_error_string(v22, a4, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        }
        else
        {
          v28 = v13;
          (*(void (__fastcall **)(Dwarf_Half *, __int64, __int64))(v33 + 8296))(v37, v21, 8);
          v19 = *(_QWORD *)v37;
          v13 = v28;
LABEL_8:
          v20 = *(_QWORD *)(v10 + 8) + *(unsigned __int8 *)(v10 + 17) + (unsigned __int64)*(unsigned __int8 *)(v10 + 16);
          if ( v19 < v20 )
            goto LABEL_9;
          v25 = *((struct Dwarf_Die_s **)a1 + 5);
          v32 = v13;
          v31 = v19;
          v37[0] = 0;
          v26 = dwarf_tag(v25, v37, a4);
          v19 = v31;
          v13 = v32;
          if ( v26 )
          {
            if ( v26 == -1 )
              _dwarf_error(v33, a4, 395);
            return 1;
          }
          if ( v37[0] == 17 || *a1 == 1 || v20 >= v31 )
          {
LABEL_9:
            *a3 = v13;
            *a2 = v19;
            return v8;
          }
          _dwarf_error(v33, a4, 119);
          *a2 = v31;
        }
        break;
      case 0x15u:
        v17 = *((_QWORD *)a1 + 2);
        v27 = *(_DWORD *)(v10 + 648);
        v36 = nullptr;
        *(_QWORD *)v37 = 0;
        v18 = dwarf_decode_leb128(v17, &v36, v37, v11);
        v19 = *(_QWORD *)v37;
        v13 = v27;
        if ( v18 != 1 )
          goto LABEL_8;
        _dwarf_error_string(v33, a4, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
        return 1;
      case 0x20u:
        _dwarf_error(v33, a4, 228);
        return 1;
      default:
        v35 = nullptr;
        v36 = nullptr;
        dwarf_get_FORM_name(v12, (const char **)&v35);
        dwarf_get_AT_name(*a1, (const char **)&v36);
        dwarfstring_constructor(v37);
        dwarfstring_append_printf_u(v37, "DW_DLE_BAD_REF_FORM. The form code is 0x%x ", a1[1]);
        dwarfstring_append();
        dwarfstring_append_printf_s();
        v16 = dwarfstring_string(
                v37,
                " on attribute %s, which does not have an offset for dwarf_formref() to return.",
                v15);
        _dwarf_error_string(v33, a4, 118, v16);
        dwarfstring_destructor(v37);
        return 1;
    }
  }
  return 1;
}

