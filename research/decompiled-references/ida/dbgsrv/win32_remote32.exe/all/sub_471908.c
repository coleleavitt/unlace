/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471908
// Address: 0x00471908

//----- (00471908) --------------------------------------------------------
char __usercall sub_471908@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  if ( *(_DWORD *)(a1 + 8) )
    return 1;
  *sub_46B984() = 22;
  sub_467EF4(a2, a3);
  return 0;
}
