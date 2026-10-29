__int64 __fastcall dwarf_internal_read_loclists_header(
        __int64 a1,
        int a2,
        __int64 a3,
        size_t a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        __int64 a10)
{
  __int64 v10; // r15
  __int64 v12; // rbp
  size_t v14; // rdx
  size_t v15; // rsi
  char v16; // di
  __int64 v17; // r9
  bool v18; // zf
  unsigned __int64 v19; // r15
  size_t v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // edx
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rax
  void *v34; // rax
  unsigned __int64 v35; // rbx
  __int64 v36; // rbp
  unsigned int unaligned_ck_wrapper; // eax
  int v39; // [rsp+8h] [rbp-A0h]
  int v40; // [rsp+8h] [rbp-A0h]
  __int64 v41; // [rsp+8h] [rbp-A0h]
  unsigned int v42; // [rsp+8h] [rbp-A0h]
  int v44; // [rsp+18h] [rbp-90h]
  __int64 v45; // [rsp+18h] [rbp-90h]
  __int64 v47; // [rsp+28h] [rbp-80h]
  unsigned int v48; // [rsp+30h] [rbp-78h]
  unsigned __int64 v49; // [rsp+38h] [rbp-70h]
  size_t nmemb[13]; // [rsp+40h] [rbp-68h] BYREF

  v10 = a5 + 4;
  nmemb[5] = __readfsqword(0x28u);
  nmemb[0] = 0;
  if ( a6 < a5 + 4 )
    goto LABEL_24;
  v12 = a5;
  (*(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 8296))(nmemb, a5, 4);
  v14 = nmemb[0];
  if ( nmemb[0] == 0xFFFFFFFF )
  {
    nmemb[0] = 0;
    if ( a6 < v12 + 12 )
      goto LABEL_24;
    (*(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 8296))(nmemb, v10, 8);
    v14 = nmemb[0];
    if ( a4 >= nmemb[0] )
    {
      v49 = 8;
      v15 = nmemb[0] + 12;
      v10 = v12 + 12;
      v16 = 4;
      v48 = 8;
      goto LABEL_6;
    }
LABEL_34:
    _dwarf_create_area_len_error(a1, a10, v14, a4);
    return 1;
  }
  if ( !nmemb[0] )
  {
    if ( !*(_BYTE *)(a1 + 8360) || *(_BYTE *)(a1 + 232) != 8 )
    {
      v49 = 4;
      v15 = 4;
      v16 = 0;
      v48 = 4;
      goto LABEL_6;
    }
    v10 = v12 + 8;
    if ( a6 < v12 + 8 )
      goto LABEL_24;
    (*(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 8296))(nmemb, v12, 8);
    v14 = nmemb[0];
    if ( a4 >= nmemb[0] )
    {
      v49 = 8;
      v15 = nmemb[0] + 8;
      v16 = 0;
      v48 = 8;
LABEL_6:
      if ( a4 >= v15 )
        goto LABEL_7;
LABEL_22:
      v44 = v14;
      dwarfstring_constructor(nmemb);
      dwarfstring_append_printf_u(nmemb, "DW_DLE_SECTION_SIZE_ERROR: A .debug_loclists area size of 0x%x ", v44);
      dwarfstring_append_printf_u(nmemb, "at offset 0x%x ", a7);
      dwarfstring_append_printf_u(nmemb, "is larger than the entire section size of 0x%x. Corrupt DWARF.", a4);
      v27 = dwarfstring_string(nmemb, "is larger than the entire section size of 0x%x. Corrupt DWARF.", v26);
      v28 = 435;
      v29 = v27;
LABEL_23:
      _dwarf_error_string(a1, a10, v28, v29);
      dwarfstring_destructor(nmemb);
      return 1;
    }
    goto LABEL_34;
  }
  if ( a4 < nmemb[0] )
    goto LABEL_34;
  v49 = 4;
  v15 = nmemb[0] + 4;
  v16 = 0;
  v48 = 4;
  if ( a4 < nmemb[0] + 4 )
    goto LABEL_22;
LABEL_7:
  *(_QWORD *)(a8 + 24) = v15;
  *(_QWORD *)a8 = a1;
  *(_QWORD *)(a8 + 8) = a3;
  *(_BYTE *)(a8 + 41) = v16;
  *(_QWORD *)(a8 + 16) = a7;
  nmemb[0] = 0;
  *(_BYTE *)(a8 + 40) = v48;
  if ( a6 < v10 + 2 )
  {
LABEL_24:
    _dwarf_error_string(a1, a10, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    return 1;
  }
  (*(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 8296))(nmemb, v10, 2);
  if ( nmemb[0] != 5 )
  {
    v39 = nmemb[0];
    dwarfstring_constructor(nmemb);
    dwarfstring_append_printf_u(
      nmemb,
      "DW_DLE_VERSION_STAMP_ERROR: The version should be 5 but we find %u instead.",
      v39);
    v31 = dwarfstring_string(nmemb, "DW_DLE_VERSION_STAMP_ERROR: The version should be 5 but we find %u instead.", v30);
    v28 = 48;
    v29 = v31;
    goto LABEL_23;
  }
  LODWORD(nmemb[0]) = 0;
  *(_WORD *)(a8 + 44) = 5;
  if ( a6 < v10 + 3 )
    goto LABEL_24;
  (*(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 8296))(nmemb, v10 + 2, 1);
  if ( ((LODWORD(nmemb[0]) - 2) & 0xFFFFFFFD) != 0 && LODWORD(nmemb[0]) != 8 )
  {
    v40 = nmemb[0];
    dwarfstring_constructor(nmemb);
    dwarfstring_append_printf_u(nmemb, " DW_DLE_ADDRESS_SIZE_ERROR: The address size of %u is not supported.", v40);
    v33 = dwarfstring_string(nmemb, " DW_DLE_ADDRESS_SIZE_ERROR: The address size of %u is not supported.", v32);
    v28 = 50;
    v29 = v33;
    goto LABEL_23;
  }
  *(_BYTE *)(a8 + 42) = nmemb[0];
  LODWORD(nmemb[0]) = 0;
  if ( a6 < v10 + 4 )
    goto LABEL_24;
  (*(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 8296))(nmemb, v10 + 3, 1);
  v17 = v10 + 4;
  v18 = LOBYTE(nmemb[0]) == 0;
  *(_BYTE *)(a8 + 43) = nmemb[0];
  if ( !v18 )
  {
    _dwarf_error_string(
      a1,
      a10,
      469,
      "DW_DLE_LOCLISTS_ERROR:  The debug_loclists segment selector size is non-zero. Not supported.");
    return 1;
  }
  nmemb[0] = 0;
  v19 = v10 + 8;
  if ( a6 < v19 )
    goto LABEL_24;
  (*(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 8296))(nmemb, v17, 4);
  v20 = nmemb[0];
  *(_QWORD *)(a8 + 48) = nmemb[0];
  if ( v20 >= a4 / v49 )
  {
    _dwarf_error_string(
      a1,
      a10,
      469,
      "dbg,DW_DLE_LOCLISTS_ERROR:  The debug_loclists offset table entry count exceeds the section length, Corrupt dwarf");
    return 1;
  }
  v21 = v19 - v12;
  if ( !v20 )
  {
LABEL_19:
    *(_QWORD *)(a8 + 96) = v12;
    *(_QWORD *)(a8 + 64) = v21 + a7;
    *(_QWORD *)(a8 + 80) = v20 + v21 + a7;
    v22 = *(_QWORD *)(a8 + 24);
    v23 = v22 + v12;
    v24 = *(_QWORD *)(a8 + 16) + v22;
    *(_QWORD *)(a8 + 88) = v24;
    *(_QWORD *)(a8 + 112) = v23;
    *a9 = v24;
    return 0;
  }
  *(_QWORD *)(a8 + 72) = v19;
  if ( !a2 )
  {
LABEL_18:
    v20 *= v49;
    goto LABEL_19;
  }
  v34 = calloc(v20, 8u);
  *(_QWORD *)(a8 + 56) = v34;
  if ( !v34 )
  {
    _dwarf_error_string(a1, a10, 62, "dbg,DW_DLE_ALLOC_CAIL:  The debug_loclists offset table cannot be allocated.");
    return 1;
  }
  v45 = v19 - v12;
  v41 = a1;
  v35 = v19;
  v47 = v12;
  v36 = 0;
  while ( 1 )
  {
    nmemb[0] = 0;
    unaligned_ck_wrapper = _dwarf_read_unaligned_ck_wrapper(v41, nmemb, v35, v48, a6, a10);
    if ( unaligned_ck_wrapper )
      break;
    *(_QWORD *)(*(_QWORD *)(a8 + 56) + 8 * v36++) = nmemb[0];
    v35 += v49;
    if ( v20 == v36 )
    {
      v21 = v45;
      v12 = v47;
      goto LABEL_18;
    }
  }
  v42 = unaligned_ck_wrapper;
  free(*(void **)(a8 + 56));
  *(_QWORD *)(a8 + 56) = 0;
  return v42;
}

