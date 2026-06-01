/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BB20
// Address: 0x0001BB20

//----- (0001BB20) --------------------------------------------------------
void __cdecl sub_1BB20(int *a1)
{
  if ( *a1 )
  {
    sub_1C390(a1, 0);
    qfree((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
  }
}
