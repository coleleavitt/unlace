void __fastcall dwarf_gnu_index_dealloc(struct Dwarf_Debug_s **a1)
{
  struct Dwarf_Debug_s *v1; // rbp

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      if ( *(_QWORD *)v1 == 3959286781LL )
      {
        _dwarf_free_gnu_index_head_content();
        dwarf_dealloc(v1, a1, 0x35u);
      }
    }
  }
}

