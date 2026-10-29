/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B0130
// Address: 0x00000000000B0130

//----- (00000000000B0130) ----------------------------------------------------
__int64 __fastcall sub_B0130(char *s2)
{
  __int64 v1; // rbx

  v1 = 1;
  while ( strcmp(off_14FA60[v1], s2) )
  {
    if ( (unsigned __int64)++v1 >= 0x148 )
    {
      LODWORD(v1) = 0;
      return (unsigned int)v1;
    }
  }
  return (unsigned int)v1;
}
// 14FA60: using guessed type char *off_14FA60[361];
