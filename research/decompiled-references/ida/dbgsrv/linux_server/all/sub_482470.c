/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482470
// Address: 0x0000000000482470

//----- (0000000000482470) ----------------------------------------------------
int sub_482470()
{
  int result; // eax
  int v1; // ebx

  result = open("/dev/tty", 2);
  if ( result > 0 )
  {
    v1 = result;
    if ( (unsigned int)sub_482430(result) == 1 )
    {
      signal(22, (__sighandler_t)1);
      signal(21, (__sighandler_t)1);
      ioctl(v1, 0x5422u, 0);
    }
    return close(v1);
  }
  return result;
}
