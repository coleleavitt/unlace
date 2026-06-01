/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B1FA
// Address: 0x0001B1FA

//----- (0001B1FA) --------------------------------------------------------
int *__fastcall sub_1B1FA(int *a1)
{
  if ( *a1 )
  {
    sub_1B470(a1, 0);
    qfree((void *)*a1);
    a1[2] = 0;
    *a1 = 0;
  }
  return a1;
}
