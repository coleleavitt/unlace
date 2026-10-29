/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_c_keyword
// Address: 0x0000000000086100

//----- (0000000000086100) ----------------------------------------------------
__int64 __fastcall is_c_keyword(char *s2)
{
  __int64 v2; // x20

  v2 = 0;
  while ( v2 == 38 || strcmp(off_15D7A8[v2], s2) )
  {
    if ( (unsigned __int64)++v2 >= 0x84 )
      return 0;
  }
  return 1;
}
// 15D7A8: using guessed type char *off_15D7A8[17];
