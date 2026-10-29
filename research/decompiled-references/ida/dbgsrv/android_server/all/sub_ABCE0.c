/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ABCE0
// Address: 0x00000000000ABCE0

//----- (00000000000ABCE0) ----------------------------------------------------
__int64 __fastcall sub_ABCE0(char *s2)
{
  __int64 v2; // x19

  v2 = 1;
  while ( strcmp(off_15F650[v2], s2) )
  {
    if ( (unsigned __int64)++v2 >= 0x148 )
    {
      LODWORD(v2) = 0;
      return (unsigned int)v2;
    }
  }
  return (unsigned int)v2;
}
// 15F650: using guessed type char *off_15F650[19];
