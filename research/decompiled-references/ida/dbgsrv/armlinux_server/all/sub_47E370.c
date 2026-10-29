/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E370
// Address: 0x000000000047E370

//----- (000000000047E370) ----------------------------------------------------
__int64 __fastcall sub_47E370(char *s2)
{
  __int64 v1; // x19
  const char *i; // x0

  v1 = 1;
  for ( i = "Adlam"; ; i = off_51BD70[v1] )
  {
    if ( !strcmp(i, s2) )
      return (unsigned int)v1;
    if ( ++v1 == 328 )
      break;
  }
  return 0;
}
// 51BD70: using guessed type char *off_51BD70[2];
