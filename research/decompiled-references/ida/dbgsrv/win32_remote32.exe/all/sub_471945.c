/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471945
// Address: 0x00471945

//----- (00471945) --------------------------------------------------------
char __usercall sub_471945@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  unsigned int v3; // eax

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 && v3 <= *(_DWORD *)(a1 + 4) )
    return 1;
  *sub_46B984() = 22;
  sub_467EF4(a2, a3);
  return 0;
}
