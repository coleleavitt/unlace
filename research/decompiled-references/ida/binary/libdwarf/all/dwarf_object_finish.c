__int64 __fastcall dwarf_object_finish(char *ptr)
{
  _dwarf_harmless_cleanout(ptr + 10776);
  return _dwarf_free_all_of_one_debug(ptr);
}

