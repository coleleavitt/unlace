/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B322
// Address: 0x0001B322

//----- (0001B322) --------------------------------------------------------
int *__fastcall sub_1B322(int *a1)
{
  if ( *a1 )
  {
    sub_1B7F4(a1, 0);
    qfree((void *)*a1);
    a1[2] = 0;
    *a1 = 0;
  }
  return a1;
}
