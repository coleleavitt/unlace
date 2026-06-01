__int64 __fastcall dwarf_is_known_segname(char *s1)
{
  const char **v1; // rbp

  v1 = (const char **)off_B7540;
  do
  {
    if ( !strcmp(s1, *v1) )
      return 1;
    ++v1;
  }
  while ( v1 != (const char **)algn_B7590 );
  return 0;
}

