/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_202A4
// Address: 0x000202A4

//----- (000202A4) --------------------------------------------------------
char **__fastcall sub_202A4(char *s2)
{
  int v2; // r4
  const char *i; // r3
  char **v4; // r6
  const char *v6; // r0
  char *s1; // [sp+4h] [bp-4h]

  v2 = 0;
  for ( i = "libunwind-x86_64.so.8"; ; i = off_CF5C0[v2] )
  {
    v4 = &off_CF5C0[v2];
    if ( !strcmp(i, s2) )
      break;
    if ( sub_76C54((unsigned __int8 *)s2) )
    {
      s1 = off_CF5C0[v2];
      v6 = sub_76B04(s2);
      if ( !strcmp(s1, v6) )
        break;
    }
    v2 += 2;
    if ( v2 == 4 )
      return nullptr;
  }
  return v4;
}
// CF5C0: using guessed type char *off_CF5C0[4];
