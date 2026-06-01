/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_c_keyword
// Address: 0x000000000008B920

//----- (000000000008B920) ----------------------------------------------------
int __fastcall is_c_keyword(char *s2)
{
  const char **v1; // r15
  unsigned __int64 v2; // rbx

  v1 = (const char **)off_14DF50;
  v2 = 0;
  while ( v2 == 38 || strcmp(*v1, s2) )
  {
    ++v2;
    ++v1;
    if ( v2 >= 0x84 )
      return 0;
  }
  return 1;
}
// 14DF50: using guessed type char *off_14DF50[132];
