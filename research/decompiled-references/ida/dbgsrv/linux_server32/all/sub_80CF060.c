/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF060
// Address: 0x080CF060

//----- (080CF060) --------------------------------------------------------
int __cdecl sub_80CF060(FILE *stream)
{
  int v1; // esi

  if ( !stream )
  {
    v1 = -1;
    sub_80C7880(1);
    *__errno_location() = 9;
    sub_80C7880(1);
    return v1;
  }
  v1 = fclose(stream);
  if ( !v1 )
    return v1;
  sub_80C7880(1);
  return v1;
}
