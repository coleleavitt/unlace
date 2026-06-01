/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62D9A
// Address: 0x00062D9A

//----- (00062D9A) --------------------------------------------------------
int *__fastcall sub_62D9A(int *a1)
{
  if ( *a1 )
  {
    sub_62E34(a1, 0);
    qfree((void *)*a1);
    a1[2] = 0;
    *a1 = 0;
  }
  return a1;
}
