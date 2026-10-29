void __fastcall dwarf_tdestroy(__int64 *ptr, void (*a2)(void))
{
  void *v2; // rbp

  if ( ptr )
  {
    v2 = (void *)ptr[4];
    sub_59BB0(ptr, a2);
    free(v2);
    free(ptr);
  }
}

