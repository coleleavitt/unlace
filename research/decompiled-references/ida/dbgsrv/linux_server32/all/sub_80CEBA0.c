/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CEBA0
// Address: 0x080CEBA0

//----- (080CEBA0) --------------------------------------------------------
int __cdecl sub_80CEBA0(char *path, __mode_t mode)
{
  int result; // eax

  result = mkdir(path, mode);
  if ( result == -1 )
  {
    sub_80C7880(1);
    return -1;
  }
  return result;
}
