void __fastcall dwarf_dealloc_macro_context(void *a1)
{
  struct Dwarf_Debug_s *v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  if ( a1 )
  {
    v2 = *((struct Dwarf_Debug_s **)a1 + 21);
    sub_40740(*((void ***)a1 + 16), *((_QWORD *)a1 + 17));
    v3 = *((void **)a1 + 20);
    *((_QWORD *)a1 + 16) = 0;
    *((_QWORD *)a1 + 17) = 0;
    free(v3);
    v4 = *((void **)a1 + 13);
    *((_QWORD *)a1 + 20) = 0;
    free(v4);
    *((_QWORD *)a1 + 13) = 0;
    free(*((void **)a1 + 10));
    *((_QWORD *)a1 + 10) = 0;
    dwarf_dealloc(v2, a1, 0x3Cu);
  }
}

