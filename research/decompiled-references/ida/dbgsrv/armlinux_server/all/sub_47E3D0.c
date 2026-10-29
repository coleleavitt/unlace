/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E3D0
// Address: 0x000000000047E3D0

//----- (000000000047E3D0) ----------------------------------------------------
__int64 __fastcall sub_47E3D0(char *s2)
{
  __int64 v1; // x19
  const char *i; // x0

  v1 = 1;
  for ( i = "Cc"; ; i = off_51C7B0[v1] )
  {
    if ( !strcmp(i, s2) )
      return (unsigned int)v1;
    if ( ++v1 == 32 )
      break;
  }
  return 0;
}
// 51C7B0: using guessed type char *off_51C7B0[2];
