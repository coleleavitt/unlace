__int64 __fastcall sub_325F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  const char *v5; // r13
  unsigned __int16 v6; // r15
  unsigned int is_full_path; // ebp
  __int64 v10; // rsi
  unsigned __int64 v11; // r12
  unsigned int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 alloc; // rax
  __int64 v19; // r12
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rax
  int v32; // [rsp+3Ch] [rbp-CCh]
  _BYTE v33[32]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v34[32]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v35[32]; // [rsp+80h] [rbp-88h] BYREF
  char v36[40]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+C8h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v5 = *(const char **)(a2 + 8);
  if ( !v5 )
  {
    _dwarf_error(a1, a5, 140);
    return 1;
  }
  v6 = *(_WORD *)(a3 + 24);
  is_full_path = _dwarf_file_name_is_full_path(*(_QWORD *)(a2 + 8));
  if ( !is_full_path )
  {
    dwarfstring_constructor_static(v33, qword_B9120, 300);
    dwarfstring_constructor_static(v34, qword_B8EA0, 300);
    dwarfstring_constructor_fixed(v35, 300);
    dwarfstring_constructor_static(v36, qword_B8D60, 300);
    v10 = *(_QWORD *)(a3 + 280);
    if ( v10 )
      dwarfstring_append();
    v11 = *(_QWORD *)(a2 + 24);
    v32 = v6;
    if ( v6 == 5 )
    {
      v12 = 0;
    }
    else
    {
      v12 = 1;
      if ( !v11 )
      {
        dwarfstring_append();
        if ( !dwarfstring_strlen(v35) )
          goto LABEL_9;
        v13 = dwarfstring_string(v35, v5);
        if ( !(unsigned int)_dwarf_file_name_is_full_path(v13) )
          goto LABEL_9;
        goto LABEL_28;
      }
    }
    if ( *(_QWORD *)(a3 + 152) < v11 )
    {
      dwarfstring_destructor(v33);
      dwarfstring_destructor(v34);
      dwarfstring_destructor(v36);
      dwarfstring_reset(v35, v10);
      dwarfstring_append_printf_u(v35, "DW_DLE_INCL_DIR_NUM_BAD: corrupt include directory index %u unusable,", v11);
      dwarfstring_append_printf_u(v35, " only %u directories present.", *(_QWORD *)(a3 + 152));
      v29 = dwarfstring_string(v35, " only %u directories present.", v28);
      _dwarf_error_string(a1, a5, 60, v29);
      dwarfstring_destructor(v35);
      return 1;
    }
    sub_32420(a3, v11, v12, (__int64)v35);
    dwarfstring_append();
    if ( !dwarfstring_strlen(v35)
      || (v27 = dwarfstring_string(v35, v5), !(unsigned int)_dwarf_file_name_is_full_path(v27)) )
    {
      if ( v32 == 5 )
      {
        if ( v12 )
          goto LABEL_10;
        if ( !v11 )
          goto LABEL_10;
        dwarfstring_reset(v34, v5);
        sub_32420(a3, 0, 0, (__int64)v34);
        if ( !dwarfstring_strlen(v34) )
          goto LABEL_10;
        goto LABEL_23;
      }
LABEL_9:
      if ( !dwarfstring_strlen(v34) )
      {
LABEL_10:
        if ( dwarfstring_strlen(v35) )
          _dwarf_pathjoinl(v33, v35);
        _dwarf_pathjoinl(v33, v36);
        goto LABEL_13;
      }
LABEL_23:
      _dwarf_pathjoinl(v33, v34);
      goto LABEL_10;
    }
LABEL_28:
    _dwarf_pathjoinl(v33, v35);
    _dwarf_pathjoinl(v33, v36);
LABEL_13:
    v14 = dwarfstring_string(v33, v36);
    v15 = dwarfstring_strlen(v33);
    v16 = v15 + 1;
    v17 = v15;
    alloc = _dwarf_get_alloc(a1, 1, v15 + 1);
    v19 = alloc;
    if ( alloc )
    {
      _dwarf_safe_strcpy(alloc, v16, v14, v17);
      *a4 = v19;
      dwarfstring_destructor(v33);
      dwarfstring_destructor(v35);
      dwarfstring_destructor(v34);
      dwarfstring_destructor(v36);
      return is_full_path;
    }
    dwarfstring_destructor(v33);
    dwarfstring_destructor(v35);
    dwarfstring_destructor(v34);
    dwarfstring_destructor(v36);
    _dwarf_error(a1, a5, 62);
    return 1;
  }
  dwarfstring_constructor_static(v35, qword_B9120, 300);
  dwarfstring_constructor_static(v36, qword_B8FE0, 300);
  dwarfstring_append();
  _dwarf_pathjoinl(v35, v36);
  v21 = dwarfstring_string(v35, v36);
  v22 = dwarfstring_strlen(v35);
  v23 = v22 + 1;
  v24 = v22;
  v25 = _dwarf_get_alloc(a1, 1, v22 + 1);
  v26 = v25;
  if ( v25 )
  {
    _dwarf_safe_strcpy(v25, v23, v21, v24);
    *a4 = v26;
    dwarfstring_destructor(v35);
    is_full_path = 0;
    dwarfstring_destructor(v36);
  }
  else
  {
    dwarfstring_destructor(v35);
    is_full_path = 1;
    dwarfstring_destructor(v36);
    _dwarf_error_string(
      a1,
      a5,
      62,
      "DW_DLE_ALLOC_FAIL: Allocation of space for a simple full path from line table header data fails.");
  }
  return is_full_path;
}

