void __fastcall dwarf_dealloc_die(_QWORD *a1)
{
  struct Dwarf_Debug_s **v2; // rax
  struct Dwarf_Debug_s *v3; // rdi

  if ( a1 )
  {
    v2 = (struct Dwarf_Debug_s **)a1[2];
    if ( v2 )
    {
      v3 = *v2;
      if ( *v2 )
      {
        if ( *(_QWORD *)v3 == 3959286781LL )
          dwarf_dealloc(v3, a1, 8u);
      }
    }
  }
}

