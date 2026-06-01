__int64 __fastcall sub_2FE50(char *s1, int a2, _DWORD *a3)
{
  unsigned int v4; // r12d
  int v6; // eax

  if ( (unsigned int)_dwarf_startswith(s1, ".zdebug_") )
    return 1;
  v4 = _dwarf_startswith(s1, ".debug_");
  if ( v4 )
    return 1;
  if ( (unsigned int)_dwarf_ignorethissection(s1) )
    return v4;
  if ( !strcmp(s1, ".eh_frame")
    || !strcmp(s1, ".gnu_debuglink")
    || !strcmp(s1, ".note.gnu.build-id")
    || !strcmp(s1, ".gdb_index")
    || !strcmp(s1, ".strtab")
    || !strcmp(s1, ".symtab") )
  {
    return 1;
  }
  if ( a2 == 4 || (unsigned int)_dwarf_startswith(s1, ".rela.") )
  {
    *a3 = 1;
    return 1;
  }
  v6 = _dwarf_startswith(s1, ".rel.");
  *a3 = 0;
  if ( v6 || a2 == 9 )
    return 1;
  return v4;
}

