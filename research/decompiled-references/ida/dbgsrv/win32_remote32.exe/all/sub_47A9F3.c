/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A9F3
// Address: 0x0047A9F3

//----- (0047A9F3) --------------------------------------------------------
int __usercall sub_47A9F3@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  if ( a3 )
  {
    *a3 = dword_4B7EA8;
    return 0;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 22;
  }
}
// 4B7EA8: using guessed type int dword_4B7EA8;
