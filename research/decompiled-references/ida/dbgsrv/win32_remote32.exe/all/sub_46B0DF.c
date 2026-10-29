/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B0DF
// Address: 0x0046B0DF

//----- (0046B0DF) --------------------------------------------------------
char __usercall sub_46B0DF@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  if ( (*(_DWORD *)(a1 + 32) & 0x20) != 0 )
    *(_DWORD *)(a1 + 32) |= 0x80u;
  return sub_46AF1A(a1, a2, a3, 8u, 0);
}
