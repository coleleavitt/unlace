/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417EC8
// Address: 0x0000000000417EC8

//----- (0000000000417EC8) ----------------------------------------------------
char **__fastcall sub_417EC8(char *s2)
{
  const char *v2; // x0
  __int64 i; // x19
  char **v4; // x22
  const char *v6; // x23
  const char *v7; // x0

  v2 = "libunwind-x86_64.so.8";
  for ( i = 0; ; v2 = off_519B80[i] )
  {
    v4 = &off_519B80[i];
    if ( !strcmp(v2, s2) )
      break;
    if ( sub_48F628((unsigned __int8 *)s2) )
    {
      v6 = off_519B80[i];
      v7 = sub_48F420(s2);
      if ( !strcmp(v6, v7) )
        break;
    }
    i += 2;
    if ( i == 4 )
      return nullptr;
  }
  return v4;
}
// 519B80: using guessed type char *off_519B80[4];
