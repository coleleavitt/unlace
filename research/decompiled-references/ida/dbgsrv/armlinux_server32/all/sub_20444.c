/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20444
// Address: 0x00020444

//----- (00020444) --------------------------------------------------------
char **__fastcall sub_20444(char *s2)
{
  int v2; // r4
  const char *i; // r3
  char **v4; // r6
  const char *v6; // r0
  char *s1; // [sp+4h] [bp-4h]

  v2 = 0;
  for ( i = "libunwind-x86_64.so.8"; ; i = off_D05C0[v2] )
  {
    v4 = &off_D05C0[v2];
    if ( !strcmp(i, s2) )
      break;
    if ( sub_76DBC((unsigned __int8 *)s2) )
    {
      s1 = off_D05C0[v2];
      v6 = sub_76C6C(s2);
      if ( !strcmp(s1, v6) )
        break;
    }
    v2 += 2;
    if ( v2 == 4 )
      return nullptr;
  }
  return v4;
}
// D05C0: using guessed type char *off_D05C0[4];
