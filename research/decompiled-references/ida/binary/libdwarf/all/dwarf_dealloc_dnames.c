void __fastcall dwarf_dealloc_dnames(void **a1)
{
  void *v2; // rdi
  struct Dwarf_Debug_s *v3; // rdi

  if ( a1 )
  {
    if ( *a1 == (char *)&stru_ABB8.r_addend + 5 )
    {
      free(a1[20]);
      v2 = a1[15];
      a1[20] = nullptr;
      free(v2);
      a1[15] = nullptr;
      free(a1[39]);
      *a1 = nullptr;
      v3 = (struct Dwarf_Debug_s *)a1[1];
      a1[39] = nullptr;
      a1[40] = nullptr;
      dwarf_dealloc(v3, a1, 0x3Fu);
    }
  }
}

