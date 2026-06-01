/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BD90
// Address: 0x0009BD90

//----- (0009BD90) --------------------------------------------------------
int __cdecl sub_9BD90(char *s2)
{
  int v1; // esi
  const char **i; // edi

  v1 = 1;
  for ( i = (const char **)off_13925C; strcmp(*i, s2); ++i )
  {
    if ( (unsigned int)++v1 >= 0x20 )
      return 0;
  }
  return v1;
}
// 13925C: using guessed type char *off_13925C[32];
