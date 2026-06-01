/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C8EC
// Address: 0x0004C8EC

//----- (0004C8EC) --------------------------------------------------------
int __fastcall sub_4C8EC(char *s2)
{
  int v2; // r5
  int i; // r4

  v2 = 1;
  for ( i = 0; ; ++i )
  {
    if ( i != 38 )
    {
      if ( !strcmp(off_CFB58[i], s2) )
        return 1;
      if ( v2 == 132 )
        break;
    }
    ++v2;
  }
  return 0;
}
// CFB58: using guessed type char *off_CFB58[28];
