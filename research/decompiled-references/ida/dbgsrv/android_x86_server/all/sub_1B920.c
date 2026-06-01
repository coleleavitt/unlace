/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B920
// Address: 0x0001B920

//----- (0001B920) --------------------------------------------------------
void __cdecl sub_1B920(int *a1)
{
  if ( *a1 )
  {
    sub_1C180(a1, 0);
    qfree((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
  }
}
