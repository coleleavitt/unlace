__int64 __fastcall dwarf_load_die_containing_section(Dwarf_Debug a1, int a2, Dwarf_Error *a3)
{
  unsigned int v4; // ebx
  Dwarf_Unsigned v6; // rax
  char *v7; // rbx
  __int64 v8; // rdx
  size_t v9; // rax
  Dwarf_Error v10; // [rsp+8h] [rbp-170h] BYREF
  char v11[71]; // [rsp+10h] [rbp-168h] BYREF
  _BYTE v12[241]; // [rsp+57h] [rbp-121h] BYREF
  unsigned __int64 v13; // [rsp+148h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v10 = nullptr;
  if ( a2 )
  {
    v4 = _dwarf_load_debug_info(a1, &v10);
    if ( v4 != 1 )
      return v4;
  }
  else
  {
    v4 = _dwarf_load_debug_types(a1, &v10);
    if ( v4 != 1 )
      return v4;
  }
  v6 = dwarf_errno(v10);
  if ( v6 > 0x1E9 )
    goto LABEL_16;
  if ( v6 > 0x1BB )
  {
    v8 = 0x200000400001LL;
    if ( _bittest64(&v8, v6 - 444) )
      goto LABEL_10;
    goto LABEL_16;
  }
  if ( v6 != 232 )
  {
    if ( v6 <= 0xE8 )
    {
      if ( v6 - 211 <= 7 )
        goto LABEL_10;
    }
    else if ( v6 == 333 )
    {
      goto LABEL_10;
    }
LABEL_16:
    if ( a3 )
      *a3 = v10;
    else
      dwarf_dealloc_error(a1, v10);
    return v4;
  }
LABEL_10:
  v7 = dwarf_errmsg(v10);
  if ( strlen(v7) + 71 <= 0x12B )
  {
    _dwarf_safe_strcpy(v11, 300, "Relocations did not complete successfully, but we are  ignoring error: ", 71);
    v9 = strlen(v7);
    _dwarf_safe_strcpy(v12, 229, v7, v9);
  }
  else
  {
    _dwarf_safe_strcpy(v11, 300, "Error:corrupted dwarf message table!", 36);
  }
  dwarf_insert_harmless_error(a1, v11);
  dwarf_dealloc_error(a1, v10);
  if ( a3 )
    *a3 = nullptr;
  return 0;
}

