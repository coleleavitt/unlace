/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4720C4
// Address: 0x004720C4

//----- (004720C4) --------------------------------------------------------
int __usercall sub_4720C4@<eax>(char *a1@<ebx>, int a2@<edi>, __m128i *a3, __m128i *a4)
{
  int result; // eax

  if ( a4 )
  {
    result = sub_471E1F(a1, a3, a4);
    if ( result )
      return *sub_46B984();
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4((int)a1, a2);
    return 22;
  }
  return result;
}
