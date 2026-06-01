void __fastcall dwarf_dealloc_attribute(Dwarf_Debug *a1)
{
  if ( a1 )
    dwarf_dealloc(a1[4], a1, 0xAu);
}

