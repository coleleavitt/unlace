__int64 __fastcall dwarf_fill_in_locdesc_op_c(
        Dwarf_Debug a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        __int128 a8,
        char a9,
        __int64 a10)
{
  __int64 *v10; // r11
  __int64 v13; // rax
  __int64 v14; // rsi
  void **v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rax
  int loc_expr_op; // eax
  __int64 alloc; // rax
  __int64 v20; // rax
  void *v21; // r12
  void *v22; // r8
  __int64 *v23; // r11
  __int64 v24; // r14
  _BYTE *v25; // r13
  __int64 v26; // r12
  void *v27; // rsi
  unsigned __int16 *v28; // r12
  unsigned __int16 v29; // ax
  __int64 v30; // rcx
  char v31; // dl
  char v32; // al
  __int64 result; // rax
  unsigned __int64 v34; // rdx
  int v35; // edx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  void *v38; // rbx
  void *v39; // rsi
  void *v40; // rbx
  void *v41; // rsi
  void *v42; // rbx
  void *v43; // rsi
  int v44; // edx
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // r13
  void *v48; // rsi
  void *v49; // [rsp+10h] [rbp-108h]
  void *v50; // [rsp+10h] [rbp-108h]
  void *v52; // [rsp+10h] [rbp-108h]
  __int64 *v53; // [rsp+18h] [rbp-100h]
  __int64 v55; // [rsp+30h] [rbp-E8h]
  __int64 *v57; // [rsp+40h] [rbp-D8h]
  unsigned __int16 v58; // [rsp+4Ah] [rbp-CEh]
  void *v59; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v64; // [rsp+78h] [rbp-A0h] BYREF
  _BYTE v65[32]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-78h]
  __int64 v67; // [rsp+A8h] [rbp-70h]
  __int64 v68; // [rsp+B0h] [rbp-68h]
  __int64 v69; // [rsp+B8h] [rbp-60h]
  __int64 v70; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v71; // [rsp+D8h] [rbp-40h]

  v10 = a3;
  v71 = __readfsqword(0x28u);
  v13 = *a3;
  v59 = nullptr;
  v60 = 0;
  v55 = v13;
  LOWORD(v13) = *((_WORD *)a3 + 20);
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v58 = v13;
  v14 = a4[1];
  if ( v14 )
  {
    if ( *a4 )
    {
      if ( (unsigned int)_dwarf_what_section_are_we(a1, v14, &v63, &v60, &v61, &v62) )
      {
        _dwarf_error(a1, a10, 344);
        return 1;
      }
      result = _dwarf_loc_block_sanity_check(a1, a4, a10);
      if ( (_DWORD)result )
        return result;
      v14 = v62;
      v10 = a3;
    }
    else
    {
      v14 = 0;
    }
  }
  v57 = v10;
  v15 = &v59;
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    v64 = 0;
    loc_expr_op = _dwarf_read_loc_expr_op((int)a1, (int)a4, v16, a7, a6, a5, v17, v14, (__int64)&v64, (__int64)v65, a10);
    if ( loc_expr_op == 1 )
    {
      v38 = v59;
      while ( v38 )
      {
        v39 = v38;
        v38 = *((void **)v38 + 6);
        dwarf_dealloc(a1, v39, 0x25u);
      }
      return 1;
    }
    if ( loc_expr_op == -1 )
      break;
    if ( *a4 < ++v16 )
    {
      v40 = v59;
      while ( v40 )
      {
        v41 = v40;
        v40 = *((void **)v40 + 6);
        dwarf_dealloc(a1, v41, 0x25u);
      }
      _dwarf_error_string(
        a1,
        a10,
        478,
        "DW_DLE_LOCATION_ERROR:  We have counted more operators in a location expression than there are bytes in the bloc"
        "k. Corrupt DWARF");
      return 1;
    }
    alloc = _dwarf_get_alloc(a1, 37, 1);
    if ( !alloc )
    {
      v42 = v59;
      while ( v42 )
      {
        v43 = v42;
        v42 = *((void **)v42 + 6);
        dwarf_dealloc(a1, v43, 0x25u);
      }
      _dwarf_error(a1, a10, 62);
      return 1;
    }
    *(_BYTE *)alloc = v65[0];
    *(_QWORD *)(alloc + 40) = v69;
    *(_QWORD *)(alloc + 8) = v66;
    *(_QWORD *)(alloc + 16) = v67;
    *(_QWORD *)(alloc + 24) = v68;
    *(_QWORD *)(alloc + 32) = v70;
    *v15 = (void *)alloc;
    v15 = (void **)(alloc + 48);
    v17 = v64;
    if ( *a4 < v64 )
      break;
    v14 = v62;
  }
  v20 = _dwarf_get_alloc(a1, 57, v16);
  v21 = v59;
  v22 = (void *)v20;
  if ( !v20 )
  {
    v47 = 0;
    _dwarf_error(a1, a10, 62);
    if ( v16 )
    {
      do
      {
        v48 = v21;
        ++v47;
        v21 = *((void **)v21 + 6);
        dwarf_dealloc(a1, v48, 0x25u);
      }
      while ( v47 != v16 );
    }
    return 1;
  }
  v23 = v57;
  if ( v16 )
  {
    v49 = (void *)v20;
    v24 = 0;
    v25 = v59;
    v26 = v20;
    do
    {
      v27 = v25;
      ++v24;
      v26 += 80;
      *(_BYTE *)(v26 - 80) = *v25;
      *(_QWORD *)(v26 - 48) = *((_QWORD *)v25 + 1);
      *(_QWORD *)(v26 - 40) = *((_QWORD *)v25 + 2);
      *(_QWORD *)(v26 - 32) = *((_QWORD *)v25 + 3);
      *(_QWORD *)(v26 - 16) = *((_QWORD *)v25 + 4);
      *(_QWORD *)(v26 - 24) = *((_QWORD *)v25 + 5);
      v25 = *((_BYTE **)v25 + 6);
      dwarf_dealloc(a1, v27, 0x25u);
    }
    while ( v24 != v16 );
    v22 = v49;
    v23 = v57;
  }
  v28 = (unsigned __int16 *)(v55 + 152 * a2);
  v29 = *((_WORD *)v23 + 20);
  if ( v29 == 2 )
  {
    *((_BYTE *)v28 + 2) = a9;
    v32 = a9;
    goto LABEL_30;
  }
  if ( v29 > 2u )
  {
    if ( v29 != 5 )
    {
      v52 = v22;
      v53 = v23;
      dwarfstring_constructor(v65);
      dwarfstring_append_printf_u(
        v65,
        "DW_DLE_LOCATION_ERROR: An impossible DW_LKIND value of %u encountered, likely internal libdwarf error or data corruption",
        *((unsigned __int16 *)v53 + 20));
      v45 = dwarfstring_string(
              v65,
              "DW_DLE_LOCATION_ERROR: An impossible DW_LKIND value of %u encountered, likely internal libdwarf error or data corruption",
              v44);
      _dwarf_error_string(a1, a10, 478, v45);
      dwarfstring_destructor(v65);
      dwarf_dealloc(a1, v52, 0x39u);
      return 1;
    }
    v32 = *((_BYTE *)v28 + 2);
LABEL_30:
    v28[52] = v16;
    *((_QWORD *)v28 + 14) = v22;
    *v28 = v58;
    *((_QWORD *)v28 + 15) = a4[3];
    v34 = a4[4];
    *((_QWORD *)v28 + 3) = a8;
    *((_QWORD *)v28 + 16) = v34;
    *((_QWORD *)v28 + 5) = *((_QWORD *)&a8 + 1);
    if ( v58 != 2 )
    {
      if ( (unsigned __int8)v32 <= 8u )
        goto LABEL_39;
      v50 = v22;
      dwarfstring_constructor(v65);
      dwarfstring_append_printf_s();
      dwarfstring_append_printf_u(v65, "%u) the DW_LLE value is not properly set", *v28);
      goto LABEL_33;
    }
LABEL_49:
    if ( (unsigned __int8)v32 <= 4u )
      goto LABEL_39;
LABEL_24:
    v50 = v22;
    dwarfstring_constructor(v65);
    dwarfstring_append_printf_s();
    dwarfstring_append_printf_u(v65, "%u) the DW_LLEX value is not properly set", *v28);
LABEL_33:
    dwarfstring_append_printf_u(v65, " but is %u  which is a libdwarf bug", *((unsigned __int8 *)v28 + 2));
    v36 = dwarfstring_string(v65, " but is %u  which is a libdwarf bug", v35);
    _dwarf_error_string(a1, a10, 478, v36);
    dwarfstring_destructor(v65);
    dwarf_dealloc(a1, v50, 0x39u);
    *((_QWORD *)v28 + 14) = 0;
    return 1;
  }
  if ( !v29 )
  {
    v31 = 7;
    v32 = 7;
LABEL_38:
    *((_BYTE *)v28 + 2) = v31;
    v28[52] = v16;
    *((_QWORD *)v28 + 14) = v22;
    *v28 = v58;
    *((_QWORD *)v28 + 15) = a4[3];
    v37 = a4[4];
    *((_QWORD *)v28 + 3) = a8;
    *((_QWORD *)v28 + 16) = v37;
    *((_QWORD *)v28 + 5) = *((_QWORD *)&a8 + 1);
    if ( v58 != 2 )
      goto LABEL_39;
    goto LABEL_49;
  }
  if ( a8 == 0 )
  {
    *((_BYTE *)v28 + 2) = 0;
    v28[52] = v16;
    *((_QWORD *)v28 + 14) = v22;
    *v28 = v58;
    *((_QWORD *)v28 + 15) = a4[3];
    v46 = a4[4];
    *((_QWORD *)v28 + 3) = 0;
    *((_QWORD *)v28 + 16) = v46;
    *((_QWORD *)v28 + 5) = 0;
    goto LABEL_39;
  }
  v30 = 0xFFFFFFFFLL;
  v31 = 4;
  if ( a5 == 8 )
    v30 = -1;
  v32 = 4;
  if ( v30 != (_QWORD)a8 )
    goto LABEL_38;
  *((_BYTE *)v28 + 2) = 6;
  v28[52] = v16;
  *((_QWORD *)v28 + 14) = v22;
  *v28 = v58;
  *((_QWORD *)v28 + 15) = a4[3];
  *((_QWORD *)v28 + 16) = a4[4];
  *((_QWORD *)v28 + 3) = a8;
  *((_QWORD *)v28 + 5) = *((_QWORD *)&a8 + 1);
  if ( v58 == 2 )
    goto LABEL_24;
LABEL_39:
  *((_DWORD *)v28 + 1) = 0;
  return 0;
}

