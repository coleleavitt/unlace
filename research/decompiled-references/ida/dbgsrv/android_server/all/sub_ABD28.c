/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ABD28
// Address: 0x00000000000ABD28

//----- (00000000000ABD28) ----------------------------------------------------
__int64 __fastcall sub_ABD28(char *s2)
{
  __int64 v2; // x19

  v2 = 1;
  while ( strcmp(off_160090[v2], s2) )
  {
    if ( (unsigned __int64)++v2 >= 0x20 )
    {
      LODWORD(v2) = 0;
      return (unsigned int)v2;
    }
  }
  return (unsigned int)v2;
}
// 160090: using guessed type char *off_160090[33];
