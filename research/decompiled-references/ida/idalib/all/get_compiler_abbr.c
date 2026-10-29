char *__fastcall get_compiler_abbr(char a1)
{
  char v1; // di
  int v2; // eax
  _BYTE *i; // rdx

  v1 = a1 & 0xF;
  v2 = 0;
  for ( i = &unk_2B2FF40; v1 != *i; i += 24 )
  {
    if ( ++v2 == 7 )
      return "?";
  }
  return *((char **)&unk_2B2FF40 + 3 * v2 + 1);
}
