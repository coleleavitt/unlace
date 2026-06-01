void __fastcall dwarf_dealloc_gdbindex(Dwarf_Debug *a1)
{
  if ( a1 )
    dwarf_dealloc(*a1, a1, 0x37u);
}

