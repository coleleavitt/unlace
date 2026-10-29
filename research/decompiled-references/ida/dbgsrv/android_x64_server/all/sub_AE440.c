/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AE440
// Address: 0x00000000000AE440

//----- (00000000000AE440) ----------------------------------------------------
int sub_AE440()
{
  signal(2, (__sighandler_t)handler);
  signal(15, (__sighandler_t)handler);
  signal(11, (__sighandler_t)handler);
  signal(4, (__sighandler_t)handler);
  signal(7, (__sighandler_t)handler);
  signal(1, (__sighandler_t)handler);
  return sub_36850(sub_AE4D0);
}
