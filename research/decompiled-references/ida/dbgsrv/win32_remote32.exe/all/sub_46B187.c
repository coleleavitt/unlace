/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B187
// Address: 0x0046B187

//----- (0046B187) --------------------------------------------------------
char __usercall sub_46B187@<al>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  if ( *a1 )
    return sub_46B1CA(a2, a3, *a1);
  *sub_46B984() = 22;
  sub_467EF4(a2, a3);
  return 0;
}
