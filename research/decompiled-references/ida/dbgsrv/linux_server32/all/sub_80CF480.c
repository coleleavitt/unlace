/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF480
// Address: 0x080CF480

//----- (080CF480) --------------------------------------------------------
int __cdecl sub_80CF480(char *s, FILE *stream)
{
  if ( stream )
    return fputs(s, stream);
  sub_80C7880(1);
  *__errno_location() = 9;
  sub_80C7880(1);
  return -1;
}
