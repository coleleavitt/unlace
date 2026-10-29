__int64 __fastcall dwarf_load_section(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r15d
  __int64 result; // rax
  _QWORD *v7; // r14
  __int64 v8; // r13
  __int64 (__fastcall *v9)(_QWORD, _QWORD, char **); // rax
  char *v10; // rcx
  bool v11; // zf
  __int64 (__fastcall *v12)(_QWORD, _QWORD, __int64, int *); // r9
  unsigned __int64 v13; // r15
  int v14; // eax
  char *v15; // rcx
  size_t v16; // r8
  char *v17; // rax
  bool v18; // cf
  unsigned __int64 v19; // rax
  size_t v20; // rsi
  int v21; // edx
  __int64 v22; // rax
  unsigned __int8 *v23; // rcx
  size_t v24; // r11
  __int64 v25; // rax
  __int64 v26; // r13
  void *v27; // r15
  size_t v28; // r11
  unsigned __int8 *v29; // r9
  int v30; // eax
  __int64 v31; // r11
  __int64 v32; // rax
  void *v33; // rax
  void *v34; // r13
  __int64 v35; // rax
  char *v36; // [rsp+10h] [rbp-F8h]
  unsigned __int8 v37; // [rsp+10h] [rbp-F8h]
  size_t v38; // [rsp+10h] [rbp-F8h]
  size_t v39; // [rsp+10h] [rbp-F8h]
  __int64 v40; // [rsp+10h] [rbp-F8h]
  __int64 v41; // [rsp+18h] [rbp-F0h]
  __int64 v42; // [rsp+18h] [rbp-F0h]
  unsigned __int8 *v43; // [rsp+20h] [rbp-E8h]
  char *v44; // [rsp+20h] [rbp-E8h]
  char *v45; // [rsp+20h] [rbp-E8h]
  size_t v46; // [rsp+28h] [rbp-E0h]
  int v47; // [rsp+34h] [rbp-D4h] BYREF
  char *s2; // [rsp+38h] [rbp-D0h] BYREF
  size_t size[4]; // [rsp+40h] [rbp-C8h] BYREF
  char v50[104]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v51; // [rsp+C8h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v47 = 0;
  s2 = nullptr;
  v5 = _dwarf_determine_section_allocation_type();
  result = 0;
  if ( *(_QWORD *)a2 )
    return result;
  v7 = *(_QWORD **)(a1 + 8);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(__int64 (__fastcall **)(_QWORD, _QWORD, char **))(v7[1] + 48LL);
  if ( !v9 )
  {
    _dwarf_error_string(
      a1,
      a3,
      248,
      "DW_DLE_SECTION_ERROR:  struct Dwarf_Obj_Access_Interface_a_s is missing an om_load_section function pointer. Corrupt user setup.");
    return 1;
  }
  result = v9(*v7, *(_QWORD *)(a2 + 24), &s2);
  if ( (_DWORD)result == 1 )
  {
    _dwarf_error(a1, a3, v47);
    return 1;
  }
  if ( (_DWORD)result == -1 )
    return result;
  v10 = s2;
  *(_BYTE *)(a2 + 107) = 0;
  v11 = *(_BYTE *)(a2 + 224) == 0;
  *(_QWORD *)(a2 + 56) = 0;
  *(_QWORD *)(a2 + 8) = v8;
  *(_QWORD *)a2 = v10;
  *(_DWORD *)(a2 + 64) = v5;
  *(_DWORD *)(a2 + 68) = 1;
  *(_OWORD *)(a2 + 40) = 0;
  if ( !v11 )
    return result;
  if ( ((*(_DWORD *)(a2 + 104) & 0xFF00FF) != 0 || *(_BYTE *)(a2 + 108)) && !*(_BYTE *)(a2 + 105) )
  {
    if ( !v10 )
    {
      _dwarf_error(a1, a3, 347);
      return 1;
    }
    v13 = (unsigned __int64)&v10[v8];
    if ( &v10[v8] < v10 + 12 )
    {
      _dwarf_error_string(a1, a3, 338, "DW_DLE_ZLIB_SECTION_SHORTSection too short to be either zlib or zstd related");
      return 1;
    }
    *(_QWORD *)(a2 + 96) = v8;
    v36 = v10;
    v43 = (unsigned __int8 *)(v10 + 12);
    v41 = *(_QWORD *)(a2 + 208);
    v14 = strncmp("ZLIB", v10, 4u);
    v15 = v36;
    if ( v14 )
    {
      if ( (v41 & 0x800) == 0 )
      {
        _dwarf_error_string(
          a1,
          a3,
          315,
          "DW_DLE_ZDEBUG_INPUT_FORMAT_ODD The compressed section is not properly formatted");
        return 1;
      }
      size[0] = 0;
      v37 = *(_BYTE *)(a1 + 280);
      if ( v13 < (unsigned __int64)(v15 + 4) )
        goto LABEL_38;
      v44 = v15;
      (*(void (__fastcall **)(size_t *, char *, __int64))(a1 + 8296))(size, v15, 4);
      v16 = size[0];
      size[0] = 0;
      v17 = &v44[v37];
      v18 = __CFADD__(v37, v17);
      v19 = (unsigned __int64)&v17[v37];
      if ( v18 )
      {
        _dwarf_error_string(a1, a3, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
        return 1;
      }
      if ( v13 < v19 )
      {
LABEL_38:
        _dwarf_error_string(a1, a3, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        return 1;
      }
      v46 = v16;
      (*(void (__fastcall **)(size_t *))(a1 + 8296))(size);
      v20 = size[0];
      if ( v46 != 1 )
      {
        if ( v46 != 2 )
        {
          dwarfstring_constructor_static(size, v50, 100);
          dwarfstring_append_printf_u(
            size,
            "DW_DLE_ZDEBUG_INPUT_FORMAT_ODD The SHF_COMPRESSED type field is 0x%x, neither zlib (1) or zstd(2). Corrupt dwarf.",
            v46);
          v22 = dwarfstring_string(
                  size,
                  "DW_DLE_ZDEBUG_INPUT_FORMAT_ODD The SHF_COMPRESSED type field is 0x%x, neither zlib (1) or zstd(2). Corrupt dwarf.",
                  v21);
          _dwarf_error_string(a1, a3, 315, v22);
          dwarfstring_destructor(size);
          return 1;
        }
        *(_QWORD *)(a2 + 88) = size[0];
        *(_BYTE *)(a2 + 106) = 1;
        v32 = 3 * (unsigned int)v37;
        v45 = &v44[v32];
        v42 = v8 - v32;
        v33 = malloc(v20);
        v34 = v33;
        v27 = v33;
        if ( !v33 )
        {
LABEL_41:
          _dwarf_error_string(
            a1,
            a3,
            62,
            "DW_DLE_ALLOC_FAIL The zstd or zlib uncompressed space malloc failed: out of memory");
          return 1;
        }
        v31 = ZSTD_decompress(v33, v20, v45, v42);
        if ( v20 != v31 )
        {
          free(v34);
          _dwarf_error_string(a1, a3, 317, "DW_DLE_ZLIB_DATA_ERROR The zstd ZSTD_decompress() failed.");
          return 1;
        }
        goto LABEL_33;
      }
      *(_QWORD *)(a2 + 88) = size[0];
      *(_BYTE *)(a2 + 106) = 1;
      v27 = malloc(v20);
      if ( !v27 )
        goto LABEL_41;
      v28 = v20;
      v35 = 3LL * v37;
      v29 = (unsigned __int8 *)&v44[v35];
      v26 = v8 - v35;
    }
    else
    {
      v23 = (unsigned __int8 *)(v36 + 4);
      v24 = 0;
      do
      {
        v25 = *v23++;
        v24 = v25 + (v24 << 8);
      }
      while ( v43 != v23 );
      *(_QWORD *)(a2 + 88) = v24;
      v26 = v8 - 12;
      *(_BYTE *)(a2 + 108) = 1;
      v38 = v24;
      v27 = malloc(v24);
      if ( !v27 )
        goto LABEL_41;
      v28 = v38;
      v29 = v43;
    }
    size[0] = v28;
    v39 = v28;
    v30 = sub_5E080(v27, size, v29, v26);
    v31 = v39;
    if ( v30 == -5 )
    {
      free(v27);
      _dwarf_error(a1, a3, 316);
      return 1;
    }
    if ( v30 == -4 )
    {
      free(v27);
      _dwarf_error(a1, a3, 62);
      return 1;
    }
    if ( v30 )
    {
      free(v27);
      _dwarf_error(a1, a3, 317);
      return 1;
    }
LABEL_33:
    v40 = v31;
    _dwarf_malloc_section_free(a2);
    *(_QWORD *)a2 = v27;
    result = 0;
    *(_BYTE *)(a2 + 105) = 1;
    *(_QWORD *)(a2 + 8) = v40;
    *(_DWORD *)(a2 + 68) = 1;
    *(_BYTE *)(a2 + 107) = 1;
  }
  if ( byte_B8AC8 )
  {
    if ( *(_QWORD *)(a2 + 136) )
    {
      v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, int *))(v7[1] + 56LL);
      if ( v12 )
      {
        result = v12(*v7, *(_QWORD *)(a2 + 24), a1, &v47);
        if ( (_DWORD)result == 1 )
        {
          _dwarf_error(a1, a3, v47);
          return 1;
        }
      }
    }
  }
  return result;
}

