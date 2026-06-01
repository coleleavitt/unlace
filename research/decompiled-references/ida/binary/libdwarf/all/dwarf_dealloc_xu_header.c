void __fastcall dwarf_dealloc_xu_header(Dwarf_Debug *a1)
{
  if ( a1 )
    dwarf_dealloc(*a1, a1, 0x38u);
}

