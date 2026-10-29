/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_799F8
// Address: 0x000799F8

//----- (000799F8) --------------------------------------------------------
int sub_799F8()
{
  int result; // r0
  int v1; // r4

  result = open("/dev/tty", 2);
  v1 = result;
  if ( result > 0 )
  {
    if ( sub_799D0(result) == 1 )
    {
      signal(22, (__sighandler_t)1);
      signal(21, (__sighandler_t)1);
      ioctl(v1, 0x5422u, 0);
    }
    return j_close(v1);
  }
  return result;
}
