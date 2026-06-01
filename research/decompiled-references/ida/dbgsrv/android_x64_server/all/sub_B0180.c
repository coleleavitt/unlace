/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B0180
// Address: 0x00000000000B0180

//----- (00000000000B0180) ----------------------------------------------------
__int64 __fastcall sub_B0180(char *s2)
{
  __int64 v1; // rbx

  v1 = 1;
  while ( strcmp(off_1504A0[v1], s2) )
  {
    if ( (unsigned __int64)++v1 >= 0x20 )
    {
      LODWORD(v1) = 0;
      return (unsigned int)v1;
    }
  }
  return (unsigned int)v1;
}
// 1504A0: using guessed type char *off_1504A0[33];
