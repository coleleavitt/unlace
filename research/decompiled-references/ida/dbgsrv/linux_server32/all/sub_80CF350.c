/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF350
// Address: 0x080CF350

//----- (080CF350) --------------------------------------------------------
int __cdecl sub_80CF350(FILE *stream)
{
  if ( stream )
    return fgetc(stream);
  sub_80C7880(1);
  *__errno_location() = 9;
  sub_80C7880(1);
  return -1;
}
