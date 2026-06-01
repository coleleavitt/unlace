/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CA6C
// Address: 0x0004CA6C

//----- (0004CA6C) --------------------------------------------------------
int __fastcall sub_4CA6C(char *s2)
{
  int v2; // r5
  int i; // r4

  v2 = 1;
  for ( i = 0; ; ++i )
  {
    if ( i != 38 )
    {
      if ( !strcmp(off_D0B58[i], s2) )
        return 1;
      if ( v2 == 132 )
        break;
    }
    ++v2;
  }
  return 0;
}
// D0B58: using guessed type char *off_D0B58[28];
