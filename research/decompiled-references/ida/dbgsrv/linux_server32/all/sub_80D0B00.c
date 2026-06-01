/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0B00
// Address: 0x080D0B00

//----- (080D0B00) --------------------------------------------------------
int sub_80D0B00()
{
  int result; // eax
  int v1; // esi

  result = open("/dev/tty", 2);
  if ( result > 0 )
  {
    v1 = result;
    if ( sub_80D0A10(result) == 2 )
      ioctl(v1, 0x540Eu, 0);
    return close(v1);
  }
  return result;
}
