int __fastcall dwarf_die_offsets(Dwarf_Die a1, _QWORD *a2, Dwarf_Off *a3, Dwarf_Error *a4)
{
  int result; // eax
  Dwarf_Off v7; // rdx
  Dwarf_Off v8; // [rsp+8h] [rbp-40h] BYREF
  Dwarf_Off v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v8 = 0;
  v9[0] = 0;
  result = dwarf_dieoffset(a1, v9, a4);
  if ( result || (result = dwarf_die_CU_offset(a1, &v8, a4)) != 0 )
  {
    *a2 = 0;
    v7 = 0;
  }
  else
  {
    *a2 = v9[0];
    v7 = v8;
  }
  *a3 = v7;
  return result;
}

