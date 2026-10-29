/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2F9A0
// Address: 0x0002F9A0

//----- (0002F9A0) --------------------------------------------------------
char **__cdecl sub_2F9A0(char *s2)
{
  char **v1; // esi
  const char *v2; // eax
  const char *v3; // eax

  v1 = off_1347D0;
  if ( strcmp("libunwind-x86_64.so.8", s2) )
  {
    if ( !qisabspath(s2) || (v2 = qbasename(s2), strcmp("libunwind-x86_64.so.8", v2)) )
    {
      v1 = off_1347D8;
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
// 1347D0: using guessed type char *off_1347D0[4];
// 1347D8: using guessed type char *off_1347D8[2];
