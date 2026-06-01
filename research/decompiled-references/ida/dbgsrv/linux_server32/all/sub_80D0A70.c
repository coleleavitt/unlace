/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0A70
// Address: 0x080D0A70

//----- (080D0A70) --------------------------------------------------------
int sub_80D0A70()
{
  int result; // eax
  int v1; // esi

  result = open("/dev/tty", 2);
  if ( result > 0 )
  {
    v1 = result;
    if ( sub_80D0A10(result) == 1 )
    {
      signal(22, (__sighandler_t)1);
      signal(21, (__sighandler_t)1);
      ioctl(v1, 0x5422u, 0);
    }
    return close(v1);
  }
  return result;
}
