/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46A3B2
// Address: 0x0046A3B2

//----- (0046A3B2) --------------------------------------------------------
char __usercall sub_46A3B2@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  if ( sub_46A3F0(a1, a2, a3) )
    return 1;
  *sub_46B984() = 22;
  sub_467EF4(a2, a3);
  return 0;
}
