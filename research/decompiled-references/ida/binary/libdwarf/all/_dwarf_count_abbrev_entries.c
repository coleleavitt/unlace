__int64 __fastcall dwarf_count_abbrev_entries(
        __int64 a1,
        int a2,
        const char *a3,
        unsigned __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 v9; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  const char *v13; // r15
  unsigned __int64 v14; // r13
  int v15; // eax
  _OWORD *v17; // rdx
  _BOOL4 v18; // ecx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rax
  int v24; // [rsp+Ch] [rbp-1F4h]
  __int64 v25; // [rsp+10h] [rbp-1F0h]
  const char *v28; // [rsp+50h] [rbp-1B0h] BYREF
  unsigned int v29[2]; // [rsp+58h] [rbp-1A8h] BYREF
  _OWORD v30[4]; // [rsp+78h] [rbp-188h] BYREF
  _BYTE v31[264]; // [rsp+B8h] [rbp-148h] BYREF
  unsigned __int64 v32; // [rsp+1C0h] [rbp-40h]

  v9 = 0;
  v32 = __readfsqword(0x28u);
  v24 = 0;
  v25 = 0;
  memset(v30, 0, 60);
  memset(v31, 0, 0x100u);
  while ( 1 )
  {
    v28 = nullptr;
    *(_QWORD *)v29 = 0;
    if ( (unsigned int)dwarf_decode_leb128(a3, &v28, v29, a4) == 1 )
    {
LABEL_24:
      _dwarf_error_string(a1, a8, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
      return 1;
    }
    v12 = *(_QWORD *)v29;
    v13 = &a3[(_QWORD)v28];
    if ( *(_QWORD *)v29 > 0x3FFFu )
    {
      _dwarf_error(a1, a8, 451);
      return 1;
    }
    v28 = nullptr;
    *(_QWORD *)v29 = 0;
    if ( (unsigned int)dwarf_decode_leb128(v13, &v28, v29, a4) == 1 )
      goto LABEL_24;
    v14 = *(_QWORD *)v29;
    a3 = &v13[(_QWORD)v28];
    if ( !(unsigned int)_dwarf_valid_form_we_know(*(_QWORD *)v29, v12) )
      break;
    v15 = dword_B8CC4;
    if ( dword_B8CC4 )
      goto LABEL_14;
    if ( v12 > 0xFF )
    {
      if ( v24 <= 0 )
      {
        *((_WORD *)v30 + v24++) = v12;
        goto LABEL_14;
      }
      v17 = v30;
      do
      {
        v18 = *(_WORD *)v17 == (unsigned __int16)v12;
        v17 = (_OWORD *)((char *)v17 + 2);
        v15 |= v18;
      }
      while ( v17 != (_OWORD *)((char *)v30 + 2 * v24) );
      if ( v24 <= 28 )
        *((_WORD *)v30 + v24++) = v12;
    }
    else
    {
      v15 = (char)v31[v12];
      v31[v12] = 1;
    }
    if ( v15 )
    {
      v28 = nullptr;
      dwarfstring_constructor(v29);
      dwarfstring_append_printf_u(v29, "DW_DLE_ABBREV_ATTR_DUPLICATION: Abbreviation attribute 0x%x is duplicated", v12);
      dwarf_get_AT_name(v12, &v28);
      dwarfstring_append_printf_s();
      dwarfstring_append_printf_u(v29, " abbrev block offset 0x%x", a2);
      v21 = dwarfstring_string(v29, " abbrev block offset 0x%x", v20);
      _dwarf_error_string(a1, a8, 452, v21);
      dwarfstring_destructor(v29);
      *a5 = v9;
      *a6 = v25;
      return 1;
    }
LABEL_14:
    if ( v14 == 33 )
    {
      ++v25;
      *(_QWORD *)v29 = 0;
      if ( (unsigned int)_dwarf_skip_leb128(a3, v29, a4) == 1 )
      {
        _dwarf_error_string(a1, a8, 329, "DW_DLE_LEB_IMPROPER: skipping leb128 runs past allowed area.a");
        return 1;
      }
      a3 += *(_QWORD *)v29;
      v11 = v9 + 1;
      if ( v9 == 340 )
      {
LABEL_33:
        dwarfstring_constructor(v29);
        dwarfstring_append_printf_u(
          v29,
          "DW_DLE_ABBREV_ATTR_DUPLICATION: Abbreviation count of %u is so high it is nonsensical and possibly a Denial of Service attack",
          341);
        v23 = dwarfstring_string(
                v29,
                "DW_DLE_ABBREV_ATTR_DUPLICATION: Abbreviation count of %u is so high it is nonsensical and possibly a Den"
                "ial of Service attack",
                v22);
        _dwarf_error_string(a1, a8, 452, v23);
        dwarfstring_destructor(v29);
        *a5 = 340;
        *a6 = v25;
        return 1;
      }
      if ( (unsigned __int64)a3 >= a4 )
        goto LABEL_18;
    }
    else
    {
      v11 = v9 + 1;
      if ( v9 == 340 )
        goto LABEL_33;
      if ( (unsigned __int64)a3 >= a4 || !(v14 | v12) )
      {
LABEL_18:
        *a5 = v9;
        *a6 = v25;
        *a7 = a3;
        return 0;
      }
    }
    v9 = v11;
  }
  dwarfstring_constructor(v29);
  dwarfstring_append_printf_u(v29, "DW_DLE_UNKNOWN_FORM: Abbrev form 0x%x", v14);
  if ( v12 )
  {
    dwarfstring_append_printf_u(v29, " DW_DLE_UNKNOWN_FORM: Abbrev form 0x%x", v14);
    dwarfstring_append_printf_u(v29, " with attribute 0x%x", v12);
  }
  else
  {
    dwarfstring_append_printf_u(v29, " DW_DLE_UNKNOWN_FORM(really unknown attr): Abbrev form 0x%x", v14);
    dwarfstring_append_printf_u(v29, " with attribute 0x%x", 0);
  }
  dwarfstring_append();
  v19 = dwarfstring_string(v29, " so abbreviations unusable. ");
  _dwarf_error_string(a1, a8, 321, v19);
  dwarfstring_destructor(v29);
  return 1;
}

