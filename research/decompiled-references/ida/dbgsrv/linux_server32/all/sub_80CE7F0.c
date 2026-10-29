/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE7F0
// Address: 0x080CE7F0

//----- (080CE7F0) --------------------------------------------------------
char *__cdecl sub_80CE7F0(char *buf, size_t size)
{
  char *result; // eax
  int v3; // eax

  result = getcwd(buf, size);
  if ( !result )
  {
    v3 = sub_80C7C30(-1);
    sub_8058270("getcwd: %s", v3);
  }
  return result;
}
