/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2783C
// Address: 0x0002783C

//----- (0002783C) --------------------------------------------------------
char **__fastcall sub_2783C(char *s2)
{
  char **v2; // r4
  const char *v3; // r0
  const char *v4; // r0

  v2 = off_D6430;
  if ( strcmp("libunwind-x86_64.so.8", s2) )
  {
    if ( !qisabspath((unsigned __int8 *)s2) || (v3 = qbasename(s2), strcmp("libunwind-x86_64.so.8", v3)) )
    {
      v2 = off_D6438;
      if ( strcmp("libunwind-x86_64.so", s2) )
      {
        if ( !qisabspath((unsigned __int8 *)s2) )
          return nullptr;
        v4 = qbasename(s2);
        if ( strcmp("libunwind-x86_64.so", v4) )
          return nullptr;
      }
    }
  }
  return v2;
}
// D6430: using guessed type char *off_D6430[4];
// D6438: using guessed type char *off_D6438[2];
