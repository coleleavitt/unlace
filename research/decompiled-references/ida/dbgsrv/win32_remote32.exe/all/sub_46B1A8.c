/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B1A8
// Address: 0x0046B1A8

//----- (0046B1A8) --------------------------------------------------------
char __usercall sub_46B1A8@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  if ( !*(_DWORD *)(a1 + 28) || *(_DWORD *)(a1 + 28) == 7 )
    return 1;
  *sub_46B984() = 22;
  sub_467EF4(a2, a3);
  return 0;
}
