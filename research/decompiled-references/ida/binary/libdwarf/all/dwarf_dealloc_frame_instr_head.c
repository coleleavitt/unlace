void __fastcall dwarf_dealloc_frame_instr_head(Dwarf_Debug *a1)
{
  if ( a1 )
    dwarf_dealloc(*a1, a1, 0x13u);
}

