/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B47C
// Address: 0x0006B47C

//----- (0006B47C) --------------------------------------------------------
int __fastcall sub_6B47C(char *s2)
{
  int v2; // r4
  const char *i; // r3

  v2 = 1;
  for ( i = "Cc"; ; i = off_D1BE8[v2] )
  {
    if ( !strcmp(i, s2) )
      return v2;
    if ( ++v2 == 32 )
      break;
  }
  return 0;
}
// D1BE8: using guessed type char *off_D1BE8[2];
