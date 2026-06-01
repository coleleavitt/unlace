/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4527E0
// Address: 0x00000000004527E0

//----- (00000000004527E0) ----------------------------------------------------
__int64 __fastcall sub_4527E0(char *s2)
{
  int v1; // w20
  __int64 i; // x19

  v1 = 1;
  for ( i = 0; ; ++i )
  {
    if ( i != 38 )
    {
      if ( !strcmp(off_51A6B0[i], s2) )
        return 1;
      if ( v1 == 132 )
        break;
    }
    ++v1;
  }
  return 0;
}
// 51A6B0: using guessed type char *off_51A6B0[28];
