/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B440
// Address: 0x0006B440

//----- (0006B440) --------------------------------------------------------
int __fastcall sub_6B440(char *s2)
{
  int v2; // r4
  const char *i; // r3

  v2 = 1;
  for ( i = "Adlam"; ; i = off_D16C8[v2] )
  {
    if ( !strcmp(i, s2) )
      return v2;
    if ( ++v2 == 328 )
      break;
  }
  return 0;
}
// D16C8: using guessed type char *off_D16C8[2];
