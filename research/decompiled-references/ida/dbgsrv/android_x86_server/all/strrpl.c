/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: strrpl
// Address: 0x000B35A0

//----- (000B35A0) --------------------------------------------------------
const char *__cdecl strrpl(const char *a1, int c, int a3)
{
  char *i; // eax

  if ( a1 && c != a3 )
  {
    for ( i = strchr(a1, c); i; i = strchr(i, c) )
      *i = a3;
  }
  return a1;
}
