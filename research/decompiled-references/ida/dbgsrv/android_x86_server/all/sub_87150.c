/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87150
// Address: 0x00087150

//----- (00087150) --------------------------------------------------------
void __cdecl sub_87150(int *a1)
{
  if ( *a1 )
  {
    sub_87270(a1, 0);
    qfree((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
  }
}
