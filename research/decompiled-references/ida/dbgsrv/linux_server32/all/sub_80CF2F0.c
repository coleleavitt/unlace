/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF2F0
// Address: 0x080CF2F0

//----- (080CF2F0) --------------------------------------------------------
int __cdecl sub_80CF2F0(int c, FILE *stream)
{
  if ( stream )
    return fputc(c, stream);
  sub_80C7880(1);
  *__errno_location() = 9;
  sub_80C7880(1);
  return -1;
}
