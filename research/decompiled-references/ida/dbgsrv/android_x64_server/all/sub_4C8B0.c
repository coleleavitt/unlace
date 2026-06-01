/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C8B0
// Address: 0x000000000004C8B0

//----- (000000000004C8B0) ----------------------------------------------------
char **__fastcall sub_4C8B0(char *s2)
{
  char **v1; // r14
  const char *v2; // rax
  const char *v3; // rax

  v1 = off_147030;
  if ( strcmp("libunwind-x86_64.so.8", s2) )
  {
    if ( !qisabspath(s2) || (v2 = qbasename(s2), strcmp("libunwind-x86_64.so.8", v2)) )
    {
      v1 = off_147040;
      if ( strcmp("libunwind-x86_64.so", s2) )
      {
        if ( !qisabspath(s2) )
          return nullptr;
        v3 = qbasename(s2);
        if ( strcmp("libunwind-x86_64.so", v3) )
          return nullptr;
      }
    }
  }
  return v1;
}
// 147030: using guessed type char *off_147030[4];
// 147040: using guessed type char *off_147040[2];
