__int64 __fastcall dwarf_get_real_section_name(
        _QWORD *a1,
        const char *a2,
        _QWORD *a3,
        _BYTE *a4,
        _BYTE *a5,
        _BYTE *a6,
        _QWORD *a7,
        _QWORD *a8,
        __int64 a9)
{
  size_t v11; // rax
  _QWORD *v12; // r10
  _QWORD *v13; // r11
  size_t v14; // rbx
  _QWORD *v15; // r8
  _QWORD *v16; // r9
  __int64 v17; // rbx
  int v18; // r13d
  _QWORD *v19; // rbp
  __int64 v20; // r14
  const char *v21; // r15
  _QWORD *v25; // [rsp+18h] [rbp-D0h]
  _QWORD *v26; // [rsp+20h] [rbp-C8h]
  _BYTE *v27; // [rsp+28h] [rbp-C0h]
  _QWORD *v28; // [rsp+30h] [rbp-B8h]
  _QWORD *v29; // [rsp+38h] [rbp-B0h]
  _OWORD v30[6]; // [rsp+40h] [rbp-A8h] BYREF
  int v31; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v32; // [rsp+A8h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  memset(v30, 0, sizeof(v30));
  v31 = 0;
  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a9,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_real_section_name()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( !a2 || !*a2 )
  {
    _dwarf_error_string(a1, a9, 410, "DW_DLE_SECTION_NAME_BIG: Actually the section name is empty, not big.");
    return 1;
  }
  v11 = strlen(a2);
  v12 = a1;
  v13 = a3;
  v14 = v11;
  v15 = a7;
  v16 = a8;
  if ( v11 + 5 <= 0x63 )
  {
    _dwarf_safe_strcpy(v30, 100, a2, v11);
    _dwarf_safe_strcpy((char *)v30 + v14, 100 - v14, ".dwo", 4);
    v16 = a8;
    v15 = a7;
    v13 = a3;
    v12 = a1;
  }
  if ( !*((_DWORD *)v12 + 2692) )
    return 0xFFFFFFFFLL;
  v27 = a5;
  v17 = 0;
  v18 = *((_DWORD *)v12 + 2692);
  v25 = v12;
  v19 = v12 + 1048;
  v26 = v13;
  v28 = v15;
  v29 = v16;
  while ( 1 )
  {
    v20 = *v19;
    v21 = *(const char **)(*v19 + 192LL);
    if ( !strcmp(v21, a2) || !strcmp(v21, (const char *)v30) )
      break;
    v17 = (unsigned int)(v17 + 1);
    v19 += 6;
    if ( v18 == (_DWORD)v17 )
      return 0xFFFFFFFFLL;
  }
  *v26 = *(_QWORD *)(v20 + 184);
  if ( LODWORD(v25[6 * v17 + 1051]) )
    *a4 = 1;
  if ( !*(_BYTE *)(v20 + 108) )
  {
    if ( !*(_BYTE *)(v20 + 106) )
      return 0;
    *a6 = 1;
    if ( v29 )
      *v29 = *(_QWORD *)(v20 + 88);
    if ( !v28 )
      return 0;
    goto LABEL_27;
  }
  *v27 = 1;
  if ( v29 )
  {
    *v29 = *(_QWORD *)(v20 + 88);
    if ( v28 )
    {
      *v28 = *(_QWORD *)(v20 + 96);
      if ( !*(_BYTE *)(v20 + 106) )
        return 0;
      *a6 = 1;
      *v29 = *(_QWORD *)(v20 + 88);
LABEL_27:
      *v28 = *(_QWORD *)(v20 + 96);
      return 0;
    }
    if ( !*(_BYTE *)(v20 + 106) )
      return 0;
    *a6 = 1;
    *v29 = *(_QWORD *)(v20 + 88);
    return 0;
  }
  else
  {
    if ( v28 )
    {
      *v28 = *(_QWORD *)(v20 + 96);
      if ( !*(_BYTE *)(v20 + 106) )
        return 0;
      *a6 = 1;
      goto LABEL_27;
    }
    if ( !*(_BYTE *)(v20 + 106) )
      return 0;
    *a6 = 1;
    return 0;
  }
}

