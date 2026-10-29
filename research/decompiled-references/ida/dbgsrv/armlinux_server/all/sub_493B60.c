/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493B60
// Address: 0x0000000000493B60

//----- (0000000000493B60) ----------------------------------------------------
__int64 sub_493B60()
{
  __int64 result; // x0
  int v1; // w19

  result = open("/dev/tty", 2);
  if ( (int)result > 0 )
  {
    v1 = result;
    if ( (unsigned int)sub_493B08(result) == 1 )
    {
      signal(22, (__sighandler_t)1);
      signal(21, (__sighandler_t)1);
      ioctl(v1, 0x5422u, 0);
    }
    return close(v1);
  }
  return result;
}
