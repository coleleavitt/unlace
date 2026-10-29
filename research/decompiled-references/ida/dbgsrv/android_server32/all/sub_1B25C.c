/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B25C
// Address: 0x0001B25C

//----- (0001B25C) --------------------------------------------------------
int *__fastcall sub_1B25C(int *a1)
{
  if ( *a1 )
  {
    sub_1B6B6(a1, 0);
    qfree((void *)*a1);
    a1[2] = 0;
    *a1 = 0;
  }
  return a1;
}
