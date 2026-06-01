/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BD30
// Address: 0x0009BD30

//----- (0009BD30) --------------------------------------------------------
int __cdecl sub_9BD30(char *s2)
{
  int v1; // esi
  const char **i; // edi

  v1 = 1;
  for ( i = (const char **)off_138D3C; strcmp(*i, s2); ++i )
  {
    if ( (unsigned int)++v1 >= 0x148 )
      return 0;
  }
  return v1;
}
// 138D3C: using guessed type char *off_138D3C[360];
