__int64 __fastcall dwarf_internal_read_rnglists_header(
        __int64 a1,
        int a2,
        __int64 a3,
        size_t a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8,
        size_t *a9,
        __int64 a10)
{
  __int64 v11; // rbx
  unsigned __int64 v13; // rbp
  size_t v14; // r10
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  char v18; // si
  const char *v19; // rsi
  __int64 v20; // rax
  size_t v21; // rdi
  __int64 v22; // r13
  unsigned int v23; // r13d
  bool v24; // zf
  unsigned __int64 v25; // r13
  size_t v26; // r13
  __int64 v27; // r8
  size_t v28; // rdx
  size_t v29; // rax
  size_t v30; // r13
  size_t v31; // rdx
  size_t v32; // rdx
  __int64 v34; // rax
  void *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rbp
  unsigned int unaligned_ck_wrapper; // eax
  _QWORD *v39; // rdi
  unsigned int v40; // [rsp+8h] [rbp-B0h]
  size_t v41; // [rsp+10h] [rbp-A8h]
  int v42; // [rsp+10h] [rbp-A8h]
  size_t v43; // [rsp+10h] [rbp-A8h]
  __int64 v44; // [rsp+18h] [rbp-A0h]
  int v45; // [rsp+18h] [rbp-A0h]
  __int64 v47; // [rsp+20h] [rbp-98h]
  __int64 v48; // [rsp+20h] [rbp-98h]
  unsigned __int64 v50; // [rsp+28h] [rbp-90h]
  size_t v51; // [rsp+38h] [rbp-80h]
  __int64 v52; // [rsp+40h] [rbp-78h]
  __int64 v53; // [rsp+40h] [rbp-78h]
  __int64 v54; // [rsp+48h] [rbp-70h]
  size_t nmemb[13]; // [rsp+50h] [rbp-68h] BYREF

  v11 = a1;
  nmemb[5] = __readfsqword(0x28u);
  v41 = *(_QWORD *)(a1 + 3616);
  if ( v41 < a4 )
  {
    dwarfstring_constructor(nmemb);
    dwarfstring_append_printf_u(nmemb, "DW_DLE_RNGLISTS_ERROR:  section_length argument (%lu) mismatch vs.", a4);
    dwarfstring_append_printf_u(nmemb, ".debug_rnglists[.dwo] section length", v41);
    v34 = dwarfstring_string(nmemb, ".debug_rnglists[.dwo] section length");
    _dwarf_error_string(a1, a10, 468, v34);
    dwarfstring_destructor(nmemb);
    return 1;
  }
  *(_QWORD *)(a8 + 120) = a5;
  v13 = a6;
  nmemb[0] = 0;
  if ( a6 < a5 + 4 )
    goto LABEL_36;
  v44 = a5 + 4;
  (*(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 8296))(nmemb, a5, 4);
  v14 = nmemb[0];
  v15 = v44;
  if ( nmemb[0] == 0xFFFFFFFF )
  {
    nmemb[0] = 0;
    if ( v13 < a5 + 12 )
      goto LABEL_36;
    (*(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 8296))(nmemb, v44, 8);
    v14 = nmemb[0];
    if ( a4 >= nmemb[0] )
    {
      v45 = 8;
      v15 = a5 + 12;
      v17 = 12;
      v18 = 4;
      goto LABEL_13;
    }
    goto LABEL_41;
  }
  if ( nmemb[0] )
  {
    if ( a4 >= nmemb[0] )
    {
      v45 = 4;
      v17 = 4;
      v18 = 0;
      goto LABEL_13;
    }
LABEL_41:
    _dwarf_create_area_len_error(a1, a10, v14, a4);
    return 1;
  }
  if ( *(_BYTE *)(a1 + 8360) && *(_BYTE *)(a1 + 232) == 8 )
  {
    if ( v13 < a5 + 8 )
      goto LABEL_36;
    (*(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 8296))(nmemb, a5, 8);
    v14 = nmemb[0];
    v15 = a5 + 8;
    if ( a4 >= nmemb[0] )
    {
      v45 = 8;
      v17 = 8;
      v18 = 0;
LABEL_13:
      v16 = v14 + v17;
      v21 = v14 + v17;
      if ( a4 <= v14 + v17 )
        v21 = a4;
      if ( v21 < v14 || a4 < v16 )
        goto LABEL_8;
      goto LABEL_17;
    }
    goto LABEL_41;
  }
  v16 = 4;
  v45 = 4;
  v17 = 4;
  v18 = 0;
  if ( a4 < 4 )
  {
LABEL_8:
    v42 = v14;
    dwarfstring_constructor(nmemb);
    dwarfstring_append_printf_u(nmemb, "DW_DLE_RNGLISTS_ERROR: A .debug_rnglists[.dwo] area size of 0x%x ", v42);
    dwarfstring_append_printf_u(nmemb, "at offset 0x%x ", a7);
    v19 = "is larger than the entire section size of 0x%x. Corrupt DWARF.";
    dwarfstring_append_printf_u(nmemb, "is larger than the entire section size of 0x%x. Corrupt DWARF.", a4);
LABEL_9:
    v20 = dwarfstring_string(nmemb, v19);
    _dwarf_error_string(v11, a10, 468, v20);
    dwarfstring_destructor(nmemb);
    return 1;
  }
LABEL_17:
  v22 = v15 + 2;
  *(_QWORD *)(a8 + 24) = v16;
  *(_QWORD *)a8 = v11;
  *(_QWORD *)(a8 + 8) = a3;
  *(_BYTE *)(a8 + 48) = v18;
  *(_QWORD *)(a8 + 16) = a7;
  *(_QWORD *)(a8 + 40) = 43981;
  *(_BYTE *)(a8 + 32) = v45;
  nmemb[0] = 0;
  if ( v13 < v15 + 2 )
    goto LABEL_36;
  v52 = v17;
  v51 = v14;
  v47 = v15;
  (*(void (__fastcall **)(size_t *, __int64, __int64))(v11 + 8296))(nmemb, v15, 2);
  if ( nmemb[0] != 5 )
  {
    v43 = nmemb[0];
    dwarfstring_constructor(nmemb);
    v19 = "DW_DLE_RNGLISTS_ERROR: The version should be 5 but we find %u instead.";
    dwarfstring_append_printf_u(nmemb, "DW_DLE_RNGLISTS_ERROR: The version should be 5 but we find %u instead.", v43);
    goto LABEL_9;
  }
  *(_DWORD *)(a8 + 52) = 5;
  LODWORD(nmemb[0]) = 0;
  if ( v13 < v47 + 3 )
    goto LABEL_36;
  v54 = v52;
  (*(void (__fastcall **)(size_t *, __int64, __int64))(v11 + 8296))(nmemb, v22, 1);
  v23 = nmemb[0];
  if ( ((LODWORD(nmemb[0]) - 2) & 0xFFFFFFFD) != 0 && LODWORD(nmemb[0]) != 8 )
  {
    dwarfstring_constructor(nmemb);
    v19 = " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] The address size of %u is not supported.";
    dwarfstring_append_printf_u(
      nmemb,
      " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] The address size of %u is not supported.",
      v23);
    goto LABEL_9;
  }
  *(_BYTE *)(a8 + 56) = nmemb[0];
  LODWORD(nmemb[0]) = 0;
  if ( v13 < v47 + 4 )
    goto LABEL_36;
  (*(void (__fastcall **)(size_t *, __int64, __int64))(v11 + 8296))(nmemb, v47 + 3, 1);
  v24 = LODWORD(nmemb[0]) == 0;
  *(_BYTE *)(a8 + 57) = nmemb[0];
  if ( !v24 )
  {
    dwarfstring_constructor(nmemb);
    v19 = " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] The segment selector size of %u is not supported.";
    dwarfstring_append_printf_u(
      nmemb,
      " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] The segment selector size of %u is not supported.",
      v23);
    goto LABEL_9;
  }
  v25 = v52 + a7 + 8;
  if ( v41 < v25 )
  {
    dwarfstring_constructor(nmemb);
    v19 = " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] Header runs off the end of the section  with offset %u";
    dwarfstring_append_printf_u(
      nmemb,
      " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] Header runs off the end of the section  with offset %u",
      v25);
    goto LABEL_9;
  }
  nmemb[0] = 0;
  v53 = v47 + 8;
  if ( v13 < v47 + 8 )
  {
LABEL_36:
    _dwarf_error_string(v11, a10, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    return 1;
  }
  (*(void (__fastcall **)(size_t *, __int64, __int64))(v11 + 8296))(nmemb, v47 + 4, 4);
  v26 = nmemb[0];
  v27 = v54;
  *(_QWORD *)(a8 + 64) = nmemb[0];
  if ( v51 / v45 < v26 )
  {
    dwarfstring_constructor(nmemb);
    v19 = " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] offset entry size impossibly large  with size 0x%x";
    dwarfstring_append_printf_u(
      nmemb,
      " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] offset entry size impossibly large  with size 0x%x",
      v26 * v45);
    goto LABEL_9;
  }
  if ( !v26 )
  {
    v29 = 0;
    v28 = 0;
    goto LABEL_31;
  }
  v28 = v26 * v45;
  *(_QWORD *)(a8 + 88) = v53;
  if ( !a2 )
  {
LABEL_29:
    v29 = v26;
    if ( v28 >= v26 )
      v29 = v28;
LABEL_31:
    if ( v29 >= v41 )
    {
      free(*(void **)(a8 + 72));
      *(_QWORD *)(a8 + 72) = 0;
      dwarfstring_constructor(nmemb);
      v19 = " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] offset entry count of %u is clearly impossible. Corrupt data";
      dwarfstring_append_printf_u(
        nmemb,
        " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] offset entry count of %u is clearly impossible. Corrupt data",
        v26);
    }
    else
    {
      v30 = v28 + v27 + 8;
      v31 = *(_QWORD *)(a8 + 24);
      *(_QWORD *)(a8 + 80) = v27 + 8 + a7;
      if ( v31 < v30 )
      {
        free(*(void **)(a8 + 72));
        *(_QWORD *)(a8 + 72) = 0;
        dwarfstring_constructor(nmemb);
        v19 = " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] length of rnglists header too large at of %u is clearly impo"
              "ssible. Corrupt data";
        dwarfstring_append_printf_u(
          nmemb,
          " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] length of rnglists header too large at of %u is clearly impossib"
          "le. Corrupt data",
          v30);
      }
      else
      {
        *(_QWORD *)(a8 + 112) = a5;
        *(_QWORD *)(a8 + 128) = a5 + v31;
        *(_QWORD *)(a8 + 96) = v30 + a7;
        if ( v13 >= a5 + v31 )
        {
          v32 = *(_QWORD *)(a8 + 16) + v31;
          *(_QWORD *)(a8 + 104) = v32;
          if ( v41 >= v32 )
          {
            *a9 = v32;
            return 0;
          }
          free(*(void **)(a8 + 72));
          *(_QWORD *)(a8 + 72) = 0;
          _dwarf_error_string(v11, a10, 468, "Impossible end of rnglist");
          return 1;
        }
        free(*(void **)(a8 + 72));
        *(_QWORD *)(a8 + 72) = 0;
        dwarfstring_constructor(nmemb);
        v19 = " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] length of rnglists header (%u) runs off end of section. Corrupt data";
        dwarfstring_append_printf_u(
          nmemb,
          " DW_DLE_RNGLISTS_ERROR: .debug_rnglists[.dwo] length of rnglists header (%u) runs off end of section. Corrupt data",
          *(_QWORD *)(a8 + 24));
      }
    }
    goto LABEL_9;
  }
  v35 = calloc(v26, 8u);
  *(_QWORD *)(a8 + 72) = v35;
  if ( !v35 )
  {
    _dwarf_error_string(v11, a10, 62, "dbg,DW_DLE_ALLOC_CAIL:  The debug_rnglists offset table cannot be allocated.");
    return 1;
  }
  v48 = v11;
  v36 = v53;
  v50 = v13;
  v37 = 0;
  while ( 1 )
  {
    nmemb[0] = 0;
    unaligned_ck_wrapper = _dwarf_read_unaligned_ck_wrapper(v48, nmemb, v36, (unsigned int)v45, v50, a10);
    v39 = *(_QWORD **)(a8 + 72);
    if ( unaligned_ck_wrapper )
      break;
    v36 += v45;
    v39[v37++] = nmemb[0];
    if ( v26 == v37 )
    {
      v28 = v26 * v45;
      v27 = v54;
      v11 = v48;
      v13 = v50;
      goto LABEL_29;
    }
  }
  v40 = unaligned_ck_wrapper;
  free(v39);
  *(_QWORD *)(a8 + 72) = 0;
  return v40;
}

