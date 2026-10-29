__int64 __fastcall dwarf_get_debug_sup(
        __int64 a1,
        _WORD *a2,
        char *a3,
        char **a4,
        unsigned __int64 *a5,
        char **a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  char *v16; // rsi
  char v17; // al
  unsigned __int64 v18; // rdx
  char *v19; // rcx
  const char *v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v23; // [rsp+10h] [rbp-A8h]
  char *v24; // [rsp+20h] [rbp-98h]
  char v25; // [rsp+2Fh] [rbp-89h]
  __int64 v26; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-78h] BYREF
  char *s; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v29[40]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v26 = 0;
  v27 = 0;
  s = nullptr;
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a7,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_debug_sup()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  result = _dwarf_load_section(a1, a1 + 3144, a7);
  if ( !(_DWORD)result )
  {
    v13 = *(_QWORD *)(a1 + 3144);
    v14 = *(_QWORD *)(a1 + 3152);
    v15 = *(_QWORD *)(a1 + 240);
    s = *(char **)(a1 + 3144);
    if ( v15 < v14 && v15 )
    {
      dwarfstring_constructor(v29);
      v20 = "DW_DLE_DEBUG_SUP_ERROR: .debug_sup section size 0x%x bigger than file size! Corrupt";
      dwarfstring_append_printf_u(
        v29,
        "DW_DLE_DEBUG_SUP_ERROR: .debug_sup section size 0x%x bigger than file size! Corrupt",
        v14);
    }
    else
    {
      v23 = v13 + v14;
      result = _dwarf_read_unaligned_ck_wrapper(a1, &v26, v13, 2, v13 + v14, a7);
      if ( (_DWORD)result )
        return result;
      v16 = s;
      s += 2;
      if ( v23 < (unsigned __int64)(v16 + 6) )
      {
        dwarfstring_constructor(v29);
        v20 = "DW_DLE_DEBUG_SUP_ERROR:  .debug_sup section size 0x%x too small to be correct! Corrupt";
        dwarfstring_append_printf_u(
          v29,
          "DW_DLE_DEBUG_SUP_ERROR:  .debug_sup section size 0x%x too small to be correct! Corrupt",
          v14);
      }
      else
      {
        v17 = v16[2];
        s = v16 + 3;
        v25 = v17;
        result = _dwarf_check_string_valid(a1, s, s, v23, 476, a7);
        if ( (_DWORD)result )
          return result;
        v24 = s;
        s = &v24[strlen(s) + 1];
        result = _dwarf_leb128_uword_wrapper(a1, &s, v23, &v27, a7);
        if ( (_DWORD)result )
          return result;
        v18 = v27;
        if ( v27 >= v14 )
        {
          dwarfstring_constructor(v29);
          v20 = "DW_DLE_DEBUG_SUP_ERROR:  .debug_sup checksum length 0x%x too large to be correct! Corrupt";
          dwarfstring_append_printf_u(
            v29,
            "DW_DLE_DEBUG_SUP_ERROR:  .debug_sup checksum length 0x%x too large to be correct! Corrupt",
            v27);
        }
        else
        {
          v19 = s;
          if ( v23 >= (unsigned __int64)&s[v27] )
          {
            if ( a2 )
              *a2 = v26;
            if ( v25 )
              *a3 = v25;
            if ( a4 )
              *a4 = v24;
            if ( a5 )
              *a5 = v18;
            if ( a6 )
              *a6 = v19;
            return result;
          }
          dwarfstring_constructor(v29);
          v20 = "DW_DLE_DEBUG_SUP_ERROR:  .debug_sup checksum (length 0x%x)  runs off the end of the section, Corrupt data";
          dwarfstring_append_printf_u(
            v29,
            "DW_DLE_DEBUG_SUP_ERROR:  .debug_sup checksum (length 0x%x)  runs off the end of the section, Corrupt data",
            v27);
        }
      }
    }
    v21 = dwarfstring_string(v29, v20);
    _dwarf_error_string(a1, a7, 477, v21);
    dwarfstring_destructor(v29);
    return 1;
  }
  return result;
}

