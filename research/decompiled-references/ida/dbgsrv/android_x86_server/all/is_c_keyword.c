/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: is_c_keyword
// Address: 0x00075280

//----- (00075280) --------------------------------------------------------
int __cdecl is_c_keyword(char *s2)
{
  int v1; // esi
  const char **i; // edi

  v1 = 0;
  for ( i = (const char **)off_137FCC; v1 == 38 || strcmp(*i, s2); ++i )
  {
    if ( (unsigned int)++v1 >= 0x84 )
      return 0;
  }
  return 1;
}
// 137FCC: using guessed type char *off_137FCC[132];
