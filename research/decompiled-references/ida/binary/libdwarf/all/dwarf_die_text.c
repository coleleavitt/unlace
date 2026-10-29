__int64 __fastcall dwarf_die_text(__int64 a1, Dwarf_Half a2, char **a3, Dwarf_Error *a4)
{
  _QWORD **v5; // rax
  _QWORD *v6; // rax
  int v9; // eax
  struct Dwarf_Debug_s **v10; // rdx
  struct Dwarf_Debug_s *v11; // rbx
  unsigned int v12; // [rsp+Ch] [rbp-3Ch]
  Dwarf_Attribute v13; // [rsp+18h] [rbp-30h] BYREF
  Dwarf_Error v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v14[1] = (Dwarf_Error)__readfsqword(0x28u);
  v13 = nullptr;
  v14[0] = nullptr;
  if ( !a1 )
  {
    _dwarf_error(0, a4, 52);
    return 1;
  }
  v5 = *(_QWORD ***)(a1 + 16);
  if ( !v5 )
  {
    _dwarf_error(0, a4, 104);
    return 1;
  }
  v6 = *v5;
  if ( !v6 || *v6 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v9 = dwarf_attr((Dwarf_Die)a1, a2, &v13, v14);
  v10 = *(struct Dwarf_Debug_s ***)(a1 + 16);
  v11 = *v10;
  if ( v9 == 1 )
  {
    dwarf_dealloc_error(*v10, v14[0]);
  }
  else if ( v9 != -1 )
  {
    v12 = dwarf_formstring(v13, a3, a4);
    dwarf_dealloc(v11, v13, 0xAu);
    return v12;
  }
  return 0xFFFFFFFFLL;
}

