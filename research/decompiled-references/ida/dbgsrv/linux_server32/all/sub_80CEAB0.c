/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CEAB0
// Address: 0x080CEAB0

//----- (080CEAB0) --------------------------------------------------------
int __cdecl sub_80CEAB0(int fd)
{
  int result; // eax

  result = close(fd);
  if ( result == -1 )
  {
    sub_80C7880(1);
    return -1;
  }
  return result;
}
