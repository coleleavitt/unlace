char *dwarf_special_no_dbg_error_malloc()
{
  _DWORD *v0; // rax
  char *v1; // rdx

  v0 = calloc(0x28u, 1u);
  if ( !v0 )
    return nullptr;
  v0[2] = 917528;
  v1 = (char *)(v0 + 4);
  v0[8] = 2;
  return v1;
}

