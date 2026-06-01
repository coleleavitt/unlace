/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4752BF
// Address: 0x004752BF

//----- (004752BF) --------------------------------------------------------
int __usercall sub_4752BF@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  if ( a3 )
    return (*(_DWORD *)(a3 + 12) >> 3) & 1;
  *sub_46B984() = 22;
  sub_467EF4(a1, a2);
  return 0;
}
