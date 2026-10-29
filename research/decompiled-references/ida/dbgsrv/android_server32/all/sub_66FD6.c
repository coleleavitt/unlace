/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66FD6
// Address: 0x00066FD6

//----- (00066FD6) --------------------------------------------------------
int __fastcall sub_66FD6(int a1, int *a2)
{
  if ( *a2 )
  {
    sub_1B6B6(a2, 0);
    qfree((void *)*a2);
    a2[2] = 0;
    *a2 = 0;
  }
  return -1;
}
