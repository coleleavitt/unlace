int __fastcall dwarf_whatform_direct(__int64 a1, Dwarf_Half *a2, Dwarf_Error *a3)
{
  int result; // eax

  result = dwarf_whatform((Dwarf_Attribute)a1, a2, a3);
  if ( !result )
    *a2 = *(_WORD *)(a1 + 4);
  return result;
}

