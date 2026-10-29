/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47631B
// Address: 0x0047631B

//----- (0047631B) --------------------------------------------------------
int __usercall sub_47631B@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  if ( a3 )
    return *(_DWORD *)(a3 + 16);
  *sub_46B984() = 22;
  sub_467EF4(a1, a2);
  return -1;
}
