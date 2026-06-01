void __fastcall dwarf_dealloc_rnglists_head(_QWORD *a1)
{
  struct Dwarf_Debug_s *v2; // rdi

  if ( a1 )
  {
    v2 = (struct Dwarf_Debug_s *)a1[7];
    if ( v2 )
    {
      if ( a1[5] == 43981 )
      {
        a1[5] = 0;
        dwarf_dealloc(v2, a1, 0x36u);
      }
    }
  }
}

