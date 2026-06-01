/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79B60
// Address: 0x00079B60

//----- (00079B60) --------------------------------------------------------
int sub_79B60()
{
  int result; // r0
  int v1; // r4

  result = open("/dev/tty", 2);
  v1 = result;
  if ( result > 0 )
  {
    if ( sub_79B38(result) == 1 )
    {
      signal(22, (__sighandler_t)1);
      signal(21, (__sighandler_t)1);
      ioctl(v1, 0x5422u, 0);
    }
    return j_close(v1);
  }
  return result;
}
