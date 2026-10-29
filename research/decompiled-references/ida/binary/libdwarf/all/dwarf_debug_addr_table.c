__int64 __fastcall dwarf_debug_addr_table(
        __int64 a1,
        unsigned __int64 a2,
        __m128i **a3,
        _QWORD *a4,
        _WORD *a5,
        _BYTE *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int section; // eax
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  unsigned __int64 v27; // r11
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 v30; // r9
  __int64 v31; // rcx
  int v32; // esi
  __int64 v33; // rdi
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rsi
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  __m128i *alloc; // rax
  __int16 v40; // dx
  __int16 v41; // di
  int v42; // edx
  __int64 v43; // rax
  int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // edx
  __int64 v49; // rax
  int v50; // edx
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // edx
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // [rsp+8h] [rbp-110h]
  int v59; // [rsp+8h] [rbp-110h]
  unsigned __int64 v60; // [rsp+8h] [rbp-110h]
  unsigned __int64 v61; // [rsp+8h] [rbp-110h]
  unsigned __int64 v62; // [rsp+8h] [rbp-110h]
  unsigned __int64 v63; // [rsp+8h] [rbp-110h]
  int v64; // [rsp+8h] [rbp-110h]
  unsigned __int16 v65; // [rsp+8h] [rbp-110h]
  __int64 v66; // [rsp+8h] [rbp-110h]
  unsigned __int64 v67; // [rsp+10h] [rbp-108h]
  unsigned __int64 v68; // [rsp+10h] [rbp-108h]
  _QWORD *v69; // [rsp+10h] [rbp-108h]
  int v70; // [rsp+10h] [rbp-108h]
  __int64 v71; // [rsp+10h] [rbp-108h]
  _QWORD *v72; // [rsp+18h] [rbp-100h]
  __int64 v73; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v74; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v75; // [rsp+20h] [rbp-F8h]
  unsigned __int8 v76; // [rsp+20h] [rbp-F8h]
  _QWORD *v77; // [rsp+20h] [rbp-F8h]
  __int64 v78; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v79; // [rsp+28h] [rbp-F0h]
  __int64 v80; // [rsp+28h] [rbp-F0h]
  __int64 v81; // [rsp+30h] [rbp-E8h]
  __int64 v82; // [rsp+30h] [rbp-E8h]
  __int64 v83; // [rsp+38h] [rbp-E0h]
  __int64 v84; // [rsp+40h] [rbp-D8h]
  __int64 v85; // [rsp+48h] [rbp-D0h]
  __int64 v86; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v87; // [rsp+58h] [rbp-C0h]
  _QWORD v88[4]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v89; // [rsp+80h] [rbp-98h] BYREF
  __int128 v90; // [rsp+88h] [rbp-90h] BYREF
  __int128 v91; // [rsp+98h] [rbp-80h] BYREF
  __int128 v92; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v93; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v94; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v95; // [rsp+D8h] [rbp-40h]

  v95 = __readfsqword(0x28u);
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a10,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_debug_addr_table()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  section = _dwarf_load_section(a1, a1 + 6392, a10);
  v18 = a10;
  v19 = a7;
  v20 = a8;
  v21 = a9;
  if ( section == -1 )
    return 0xFFFFFFFFLL;
  if ( section == 1 )
  {
    if ( a10 && *(_DWORD *)(*(_QWORD *)a10 + 16LL) != 1 )
      dwarfstring_append();
    return 1;
  }
  v22 = *(_QWORD *)(a1 + 6400);
  v89 = 64222;
  v92 = 0;
  v23 = *(_QWORD *)(a1 + 6392);
  *(_QWORD *)&v92 = v22;
  v90 = 0;
  v91 = 0;
  v93 = 0;
  v94 = 0;
  if ( a2 >= v22 )
    return 0xFFFFFFFFLL;
  v58 = v23 + v22;
  if ( *(_WORD *)(a1 + 10864) != 4 )
  {
    v88[0] = 0;
    v24 = v23 + a2;
    v67 = v23 + a2 + 4;
    if ( v58 < v67 )
      goto LABEL_53;
    v81 = v23;
    v79 = v22;
    v73 = v23 + a2;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v88, v24, 4);
    v25 = v88[0];
    v26 = v73;
    v27 = v79;
    v28 = v81;
    v29 = a7;
    v30 = a8;
    v31 = a9;
    v18 = a10;
    if ( v88[0] == 0xFFFFFFFFLL )
    {
      v88[0] = 0;
      v74 = v73 + 12;
      if ( v58 < v26 + 12 )
        goto LABEL_53;
      (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v88, v67, 8);
      v25 = v88[0];
      v27 = v79;
      v28 = v81;
      v29 = a7;
      v30 = a8;
      v31 = a9;
      v18 = a10;
      if ( v79 < v88[0] )
        goto LABEL_59;
      v59 = 4;
      v32 = 8;
      v67 = v74;
      v33 = 12;
    }
    else
    {
      if ( !v88[0] )
      {
        if ( !*(_BYTE *)(a1 + 8360) || *(_BYTE *)(a1 + 232) != 8 )
        {
          if ( v79 > 3 )
          {
            *(_QWORD *)&v90 = a1;
LABEL_16:
            _dwarf_error_string(
              a1,
              v18,
              435,
              "DW_DLE_SECTION_SIZE_ERROR: The end of a .debug_addr header record is missing, corrupt DWARF");
            return 1;
          }
LABEL_54:
          v78 = v18;
          v64 = v27;
          v70 = v25;
          dwarfstring_constructor(v88);
          dwarfstring_append_printf_u(v88, "DW_DLE_SECTION_SIZE_ERROR: A .debug_addr area size of 0x%x ", v70);
          dwarfstring_append_printf_u(v88, "at offset 0x%x ", a2);
          dwarfstring_append_printf_u(v88, "is larger than the entire section size of 0x%x. Corrupt DWARF.", v64);
          v43 = dwarfstring_string(v88, "is larger than the entire section size of 0x%x. Corrupt DWARF.", v42);
          _dwarf_error_string(a1, v78, 435, v43);
          dwarfstring_destructor(v88);
          return 1;
        }
        v88[0] = 0;
        v67 = v73 + 8;
        if ( v58 < v73 + 8 )
          goto LABEL_53;
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v88, v73, 8);
        v25 = v88[0];
        v27 = v79;
        v28 = v81;
        v29 = a7;
        v30 = a8;
        v31 = a9;
        v18 = a10;
        if ( v79 >= v88[0] )
        {
          v59 = 0;
          v33 = 8;
          v32 = 8;
          goto LABEL_24;
        }
LABEL_59:
        _dwarf_create_area_len_error(a1, v18, v25, v27);
        return 1;
      }
      if ( v79 < v88[0] )
        goto LABEL_59;
      v59 = 0;
      v33 = 4;
      v32 = 4;
    }
LABEL_24:
    if ( v27 < v25 + v33 )
      goto LABEL_54;
    *(_QWORD *)&v90 = a1;
    if ( v25 <= 4 )
      goto LABEL_16;
    *((_QWORD *)&v90 + 1) = v25 - 4;
    v34 = v25 + a2 + v59 + v32;
    v86 = v59 + v32;
    LOWORD(v88[0]) = 0;
    v60 = v28 + v34;
    *((_QWORD *)&v93 + 1) = v28 + v34;
    if ( v28 + v34 >= v67 + 2 )
    {
      v85 = v18;
      v84 = v31;
      v83 = v30;
      v82 = v29;
      v75 = v34;
      (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v88, v67, 2);
      v18 = v85;
      if ( LOWORD(v88[0]) != 5 )
      {
        v65 = v88[0];
        dwarfstring_constructor(v88);
        dwarfstring_append_printf_u(
          v88,
          "DW_DLE_VERSION_STAMP_ERROR: The .debug_addr version should be 5 but we find %u instead.",
          v65);
        v51 = dwarfstring_string(
                v88,
                "DW_DLE_VERSION_STAMP_ERROR: The .debug_addr version should be 5 but we find %u instead.",
                v50);
        v52 = v85;
        v53 = 48;
        v54 = v51;
LABEL_63:
        _dwarf_error_string(a1, v52, v53, v54);
        dwarfstring_destructor(v88);
        return 1;
      }
      LOBYTE(v88[0]) = 0;
      WORD4(v94) = 5;
      v87 = v67 + 3;
      if ( v60 >= v67 + 3 )
      {
        (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v88, v67 + 2, 1);
        v35 = v75;
        v76 = v88[0];
        v18 = v85;
        if ( ((LOBYTE(v88[0]) - 2) & 0xFD) != 0 && LOBYTE(v88[0]) != 8 )
        {
          v66 = v85;
          dwarfstring_constructor(v88);
          dwarfstring_append_printf_u(
            v88,
            " DW_DLE_ADDRESS_SIZE_ERROR: The  .debug_addr address size of %u is not supported.",
            v76);
          v56 = dwarfstring_string(
                  v88,
                  " DW_DLE_ADDRESS_SIZE_ERROR: The  .debug_addr address size of %u is not supported.",
                  v55);
          v53 = 50;
          v54 = v56;
LABEL_69:
          v52 = v66;
          goto LABEL_63;
        }
        LOBYTE(v88[0]) = 0;
        BYTE10(v94) = v76;
        if ( v60 >= v67 + 4 )
        {
          v68 = v67 + 4;
          v61 = v35;
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v88, v87, 1);
          v22 = v61;
          v19 = v82;
          v20 = v83;
          v21 = v84;
          v18 = v85;
          if ( !LOBYTE(v88[0]) )
          {
            *((_QWORD *)&v92 + 1) = v68;
            v36 = v76;
            v62 = *((_QWORD *)&v90 + 1);
            v37 = v86 + 4;
            goto LABEL_34;
          }
          v66 = v85;
          dwarfstring_constructor(v88);
          dwarfstring_append();
          v57 = dwarfstring_string(
                  v88,
                  " DW_DLE_DEBUG_ADDR_ERROR: The  .debug_addr segment selector size of non-zero is not supported.");
          v53 = 492;
          v54 = v57;
          goto LABEL_69;
        }
      }
    }
LABEL_53:
    _dwarf_error_string(a1, v18, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    return 1;
  }
  v40 = *(_WORD *)(a1 + 10866);
  v41 = *(_WORD *)(a1 + 10868);
  *((_QWORD *)&v90 + 1) = v22;
  LOBYTE(v91) = v40;
  BYTE10(v94) = v41;
  WORD4(v94) = 4;
  *((_QWORD *)&v93 + 1) = v23 + v22;
  if ( a2 )
  {
    _dwarf_error_string(
      a1,
      a10,
      492,
      "DW_DLE_DEBUG_ADDR_ERROR: DWARF4 extension .debug_addr has non-zero offset. Impossible");
    return 1;
  }
  *((_QWORD *)&v92 + 1) = v23;
  v36 = (unsigned __int8)v41;
  *(_QWORD *)&v93 = v22 / (unsigned __int8)v41;
  if ( (((_BYTE)v41 - 2) & 0xFD) != 0 && (_BYTE)v41 != 8 )
  {
    v71 = a10;
    dwarfstring_constructor(v88);
    dwarfstring_append_printf_u(
      v88,
      " DW_DLE_ADDRESS_SIZE_ERROR: The  .debug_addr DWARF4 address size of %u is not supported.",
      (unsigned __int8)v41);
    v49 = dwarfstring_string(
            v88,
            " DW_DLE_ADDRESS_SIZE_ERROR: The  .debug_addr DWARF4 address size of %u is not supported.",
            v48);
    v46 = 50;
    v47 = v49;
    goto LABEL_58;
  }
  *(_QWORD *)&v90 = a1;
  v37 = 0;
  v62 = v22;
LABEL_34:
  v38 = v62 / v36;
  if ( v62 % v36 )
  {
    v71 = v18;
    dwarfstring_constructor(v88);
    dwarfstring_append_printf_u(
      v88,
      " DW_DLE_DEBUG_ADDR_ERROR: The  .debug_addr address array length of %u not a multiple of address_size.",
      v62);
    v45 = dwarfstring_string(
            v88,
            " DW_DLE_DEBUG_ADDR_ERROR: The  .debug_addr address array length of %u not a multiple of address_size.",
            v44);
    v46 = 492;
    v47 = v45;
LABEL_58:
    _dwarf_error_string(a1, v71, v46, v47);
    dwarfstring_destructor(v88);
    return 1;
  }
  v80 = v18;
  *(_QWORD *)&v94 = a2 + v37;
  v77 = (_QWORD *)v21;
  v72 = (_QWORD *)v20;
  v69 = (_QWORD *)v19;
  v63 = v22;
  *(_QWORD *)&v93 = v38;
  *((_QWORD *)&v91 + 1) = a2;
  alloc = (__m128i *)_dwarf_get_alloc(a1, 65, 1);
  if ( !alloc )
  {
    _dwarf_error_string(a1, v80, 62, "DW_DLE_ALLOC_FAIL: allocating a Dwarf_Debug_Addr_Table record.");
    return 1;
  }
  *alloc = _mm_load_si128((const __m128i *)&v89);
  alloc[1] = _mm_load_si128((const __m128i *)((char *)&v90 + 8));
  alloc[2] = _mm_load_si128((const __m128i *)((char *)&v91 + 8));
  alloc[3] = _mm_load_si128((const __m128i *)((char *)&v92 + 8));
  alloc[4] = _mm_load_si128((const __m128i *)((char *)&v93 + 8));
  alloc[5].m128i_i64[0] = *((_QWORD *)&v94 + 1);
  *a3 = alloc;
  if ( a4 )
    *a4 = alloc[1].m128i_i64[0];
  if ( a5 )
    *a5 = alloc[5].m128i_i16[0];
  if ( a6 )
    *a6 = alloc[5].m128i_i8[2];
  if ( v69 )
    *v69 = alloc[4].m128i_i64[1];
  if ( v72 )
    *v72 = alloc[3].m128i_i64[1];
  if ( v77 )
    *v77 = v63;
  return 0;
}

