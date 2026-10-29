/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B2CC
// Address: 0x0006B2CC

//----- (0006B2CC) --------------------------------------------------------
int __fastcall sub_6B2CC(char *s2)
{
  int v2; // r4
  const char *i; // r3

  v2 = 1;
  for ( i = "Adlam"; ; i = off_D06C8[v2] )
  {
    if ( !strcmp(i, s2) )
      return v2;
    if ( ++v2 == 328 )
      break;
  }
  return 0;
}
// D06C8: using guessed type char *off_D06C8[2];
