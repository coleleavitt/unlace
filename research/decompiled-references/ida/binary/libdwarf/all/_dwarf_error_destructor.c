void __fastcall dwarf_error_destructor(__int64 a1)
{
  void *v1; // rbp

  v1 = *(void **)(a1 + 8);
  if ( v1 )
  {
    dwarfstring_destructor(*(_QWORD *)(a1 + 8));
    free(v1);
    *(_QWORD *)(a1 + 8) = 0;
  }
}

