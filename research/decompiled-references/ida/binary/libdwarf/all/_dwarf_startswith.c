_BOOL8 __fastcall dwarf_startswith(char *s1, char *s2)
{
  size_t v2; // rax

  v2 = strlen(s2);
  return strncmp(s1, s2, v2) == 0;
}

