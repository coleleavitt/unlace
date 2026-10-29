/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4824E0
// Address: 0x00000000004824E0

//----- (00000000004824E0) ----------------------------------------------------
int sub_4824E0()
{
  int result; // eax
  int v1; // ebx

  result = open("/dev/tty", 2);
  if ( result > 0 )
  {
    v1 = result;
    if ( (unsigned int)sub_482430(result) == 2 )
      ioctl(v1, 0x540Eu, 0);
    return close(v1);
  }
  return result;
}
