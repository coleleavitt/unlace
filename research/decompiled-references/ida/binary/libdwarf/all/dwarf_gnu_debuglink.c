__int64 __fastcall dwarf_gnu_debuglink(
        __int64 a1,
        const char **a2,
        const char **a3,
        char **a4,
        _DWORD *a5,
        _DWORD *a6,
        __int64 a7,
        _QWORD *a8,
        int *a9,
        __int64 a10,
        _DWORD *a11,
        __int64 a12)
{
  __int64 v12; // r11
  const char *v17; // rdi
  int section; // eax
  const char *v19; // r15
  const char *v20; // rdx
  const char *v21; // rsi
  int v22; // eax
  size_t v23; // rax
  __int64 v24; // rsi
  const char *v25; // rax
  char *v26; // rdx
  __int64 v27; // rax
  char *v28; // rcx
  int v29; // eax
  size_t v30; // rax
  __int64 v31; // rcx
  size_t v32; // rax
  unsigned __int64 v33; // rdx
  const char *v34; // rsi
  const char *v35; // rax
  const char *v36; // rsi
  __int64 v37; // rax
  __int64 v41; // [rsp+28h] [rbp-B0h]
  const char *v42; // [rsp+28h] [rbp-B0h]
  __int64 v43; // [rsp+30h] [rbp-A8h]
  char *s; // [rsp+38h] [rbp-A0h]
  char *sa; // [rsp+38h] [rbp-A0h]
  char *sb; // [rsp+38h] [rbp-A0h]
  char *v47; // [rsp+40h] [rbp-98h]
  unsigned __int64 v48; // [rsp+40h] [rbp-98h]
  char **v49; // [rsp+48h] [rbp-90h]
  int v50; // [rsp+54h] [rbp-84h] BYREF
  __int64 v51; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-78h] BYREF
  __int64 v53; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v54[40]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v55; // [rsp+98h] [rbp-40h]

  v12 = a7;
  v55 = __readfsqword(0x28u);
  v50 = 0;
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a12,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_gnu_debuglink()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( *(_QWORD *)(a1 + 4080) )
  {
    v41 = a1 + 4072;
    section = _dwarf_load_section(a1, a1 + 4072, a12);
    v12 = a7;
    if ( section == 1 )
      return 1;
    if ( !*(_QWORD *)(a1 + 4312) )
      goto LABEL_13;
LABEL_26:
    s = (char *)v12;
    if ( (unsigned int)_dwarf_load_section(a1, a1 + 4304, a12) == 1 )
      return 1;
    v27 = *(_QWORD *)(a1 + 4304);
    v51 = 0;
    v52 = 0;
    v43 = v27;
    v53 = 0;
    if ( v27 )
    {
      if ( *(_QWORD *)(a1 + 4312) <= 0xCu )
      {
        _dwarf_error(a1, a12, 457);
        return 1;
      }
      v47 = s;
      sa = *(char **)(a1 + 4312);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(a1 + 8296))(&v51, v27, 4);
      v52 = 0;
      (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(a1 + 8296))(&v52, v43 + 4, 4);
      if ( v52 >= (unsigned __int64)sa )
      {
        _dwarf_error_string(
          a1,
          a12,
          495,
          "DW_DLE_BUILD_ID_DESCRIPTION_SIZE Size is much too large to be correct. Corrupt Dwarf");
        return 1;
      }
      if ( v52 + 8 >= (unsigned __int64)sa )
      {
        _dwarf_error_string(
          a1,
          a12,
          495,
          "DW_DLE_BUILD_ID_DESCRIPTION_SIZE Size is too large to be correct. Corrupt Dwarf");
        return 1;
      }
      if ( v52 > 0x1FFF )
      {
        _dwarf_error_string(
          a1,
          a12,
          495,
          "DW_DLE_BUILD_ID_DESCRIPTION_SIZE Size is too large to be sane. Corrupt Dwarf");
        return 1;
      }
      v49 = (char **)v47;
      v53 = 0;
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(a1 + 8296))(&v53, v43 + 8, 4);
      v28 = &sa[v43];
      v48 = (unsigned __int64)sa;
      sb = (char *)(v43 + 12);
      v29 = _dwarf_check_string_valid(a1, v43 + 12, v43 + 12, v28, 459, a12);
      if ( !v29 )
      {
        v30 = strlen(sb);
        v31 = v51;
        v32 = v30 + 1;
        if ( v32 != v51 )
        {
          _dwarf_error(a1, a12, 459);
          return 1;
        }
        v33 = v52;
        if ( v48 < v52 + v32 + 12 )
        {
          _dwarf_error(a1, a12, 458);
          return 1;
        }
        *a6 = v53;
        *v49 = sb;
        if ( v33 >= v48 )
        {
          dwarfstring_constructor(v54);
          v36 = "DW_DLE_CORRUPT_NOTE_GNU_DEBUGID buildid descriptionlength %u larger than the section size. Corrupt object section";
          dwarfstring_append_printf_u(
            v54,
            "DW_DLE_CORRUPT_NOTE_GNU_DEBUGID buildid descriptionlength %u larger than the section size. Corrupt object section",
            v52);
        }
        else
        {
          if ( v33 + 8 < v48 )
          {
            *a9 = v33;
            *a8 = v43 + v31 + 12;
            goto LABEL_38;
          }
          dwarfstring_constructor(v54);
          v36 = "DW_DLE_CORRUPT_NOTE_GNU_DEBUGID buildid descriptionlength %u larger than is appropriate. Corrupt object section";
          dwarfstring_append_printf_u(
            v54,
            "DW_DLE_CORRUPT_NOTE_GNU_DEBUGID buildid descriptionlength %u larger than is appropriate. Corrupt object section",
            v52);
        }
        v37 = dwarfstring_string(v54, v36);
        _dwarf_error_string(a1, a12, 458, v37);
        goto LABEL_52;
      }
      if ( v29 == 1 )
        return 1;
    }
LABEL_38:
    if ( !v41 )
    {
LABEL_19:
      dwarfstring_constructor(v54);
      v26 = *(char **)(a1 + 80);
      if ( !v26 )
        v26 = "";
      if ( !a10 )
      {
        if ( a11 )
          *a11 = 0;
LABEL_24:
        dwarfstring_destructor(v54);
        return 0;
      }
      v34 = (const char *)*(unsigned int *)(a1 + 96);
      if ( (unsigned int)_dwarf_construct_linkedto_path(
                           *(_QWORD *)(a1 + 88),
                           (int)v34,
                           (int)v26,
                           (int)*a2,
                           (int)v54,
                           *a8,
                           *a9,
                           a10,
                           (__int64)a11,
                           (__int64)&v50) != 1 )
      {
        if ( dwarfstring_strlen(v54) )
        {
          v35 = (const char *)dwarfstring_string(v54, v34);
          *a4 = strdup(v35);
          *a5 = dwarfstring_strlen(v54);
        }
        goto LABEL_24;
      }
LABEL_52:
      dwarfstring_destructor(v54);
      return 1;
    }
LABEL_13:
    v19 = *(const char **)v41;
    if ( *(_QWORD *)v41 )
    {
      v20 = *(const char **)v41;
      v21 = *(const char **)v41;
      v42 = &v19[*(_QWORD *)(v41 + 8)];
      v22 = _dwarf_check_string_valid(a1, v21, v20, v42, 361, a12);
      if ( v22 )
      {
        if ( v22 == 1 )
          return 1;
      }
      else
      {
        v23 = strlen(v19);
        v24 = 0;
        if ( (((_BYTE)v23 + 1) & 3) != 0 )
          v24 = 4 - (((_BYTE)v23 + 1) & 3u);
        v25 = &v19[v24 + 1 + v23];
        if ( v42 != v25 + 4 )
        {
          _dwarf_error(a1, a12, 456);
          return 1;
        }
        *a2 = v19;
        *a3 = v25;
      }
    }
    goto LABEL_19;
  }
  if ( *(_QWORD *)(a1 + 4312) )
  {
    v41 = 0;
    goto LABEL_26;
  }
  v17 = *(const char **)(a1 + 80);
  if ( v17 )
  {
    *a4 = strdup(v17);
    *a5 = strlen(*(const char **)(a1 + 80));
  }
  else
  {
    *a4 = nullptr;
    *a5 = 0;
  }
  return 0;
}

