void __fastcall dwarf_dealloc_uncompressed_block(struct Dwarf_Debug_s *a1, void *a2)
{
  dwarf_dealloc(a1, a2, 1u);
}

