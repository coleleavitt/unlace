void __fastcall dwarf_dealloc_universal_head(void **ptr)
{
  if ( ptr )
  {
    free(ptr[3]);
    free(ptr);
  }
}

