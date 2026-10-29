__int64 __fastcall dwarf_internal_get_die_comp_dir(struct Dwarf_Die_s *a1, char **a2, char **a3, Dwarf_Error *a4)
{
  struct Dwarf_Debug_s **v6; // rax
  struct Dwarf_Debug_s *v8; // r13
  int v9; // eax
  int v10; // eax
  Dwarf_Attribute v11; // rsi
  int v12; // eax
  unsigned int v13; // ebx
  int v15; // eax
  Dwarf_Attribute v16; // [rsp+0h] [rbp-48h] BYREF
  Dwarf_Attribute v17; // [rsp+8h] [rbp-40h] BYREF
  char *v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = *((struct Dwarf_Debug_s ***)a1 + 2);
  v18[1] = (char *)__readfsqword(0x28u);
  v16 = nullptr;
  v17 = nullptr;
  v8 = *v6;
  v9 = dwarf_attr(a1, 3u, &v17, a4);
  if ( v9 == 1 )
    return 1;
  if ( !v9 )
  {
    v18[0] = nullptr;
    v10 = dwarf_formstring(v17, v18, a4);
    v11 = v17;
    if ( v10 == 1 )
      goto LABEL_10;
    if ( !v10 )
      *a3 = v18[0];
    dwarf_dealloc(v8, v11, 0xAu);
  }
  v12 = dwarf_attr(a1, 0x1Bu, &v16, a4);
  v13 = v12;
  if ( v12 == 1 )
    return 1;
  if ( v12 )
    return v13;
  v18[0] = nullptr;
  v15 = dwarf_formstring(v16, v18, a4);
  v11 = v16;
  if ( v15 == 1 )
  {
LABEL_10:
    dwarf_dealloc(v8, v11, 0xAu);
    return 1;
  }
  if ( !v15 )
    *a2 = v18[0];
  dwarf_dealloc(v8, v11, 0xAu);
  return v13;
}

