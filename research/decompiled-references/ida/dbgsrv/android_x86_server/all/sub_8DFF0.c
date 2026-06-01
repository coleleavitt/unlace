/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8DFF0
// Address: 0x0008DFF0

//----- (0008DFF0) --------------------------------------------------------
int __cdecl sub_8DFF0(int a1, int *a2)
{
  if ( *a2 )
  {
    sub_1C180(a2, 0);
    qfree((void *)*a2);
    *a2 = 0;
    a2[2] = 0;
  }
  return -1;
}
