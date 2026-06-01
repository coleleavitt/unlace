void __fastcall dwarf_dealloc_debug_addr_table(_QWORD *a1)
{
  struct Dwarf_Debug_s *v2; // rdi

  if ( a1 )
  {
    if ( *a1 == 64222 )
    {
      v2 = (struct Dwarf_Debug_s *)a1[1];
      *a1 = 0;
      dwarf_dealloc(v2, a1, 0x41u);
    }
  }
}

