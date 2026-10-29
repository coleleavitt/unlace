int __fastcall dwarf_dietype_offset(struct Dwarf_Die_s *a1, Dwarf_Off *a2, Dwarf_Bool *a3, Dwarf_Error *a4)
{
  _QWORD **v5; // rax
  _QWORD *v6; // rax
  int result; // eax
  Dwarf_Bool die_infotypes_flag; // r12d
  int v10; // eax
  int v11; // [rsp+Ch] [rbp-4Ch]
  Dwarf_Off v12; // [rsp+18h] [rbp-40h] BYREF
  Dwarf_Attribute v13[7]; // [rsp+20h] [rbp-38h] BYREF

  v13[1] = (Dwarf_Attribute)__readfsqword(0x28u);
  v12 = 0;
  v13[0] = nullptr;
  if ( !a1 )
  {
    _dwarf_error(0, a4, 52);
    return 1;
  }
  v5 = *((_QWORD ***)a1 + 2);
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
  die_infotypes_flag = dwarf_get_die_infotypes_flag(a1);
  result = dwarf_attr(a1, 0x49u, v13, a4);
  if ( !result )
  {
    if ( *((_WORD *)v13[0] + 2) == 32 )
      die_infotypes_flag = 0;
    v10 = dwarf_global_formref(v13[0], &v12, a4);
    if ( !v10 )
    {
      *a2 = v12;
      *a3 = die_infotypes_flag;
    }
    v11 = v10;
    dwarf_dealloc_attribute(v13[0]);
    return v11;
  }
  return result;
}

