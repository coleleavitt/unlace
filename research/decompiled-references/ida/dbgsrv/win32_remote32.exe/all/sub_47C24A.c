/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C24A
// Address: 0x0047C24A

//----- (0047C24A) --------------------------------------------------------
int __usercall sub_47C24A@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  if ( a3 == -2 )
  {
    *sub_46B984() = 9;
  }
  else
  {
    if ( a3 >= 0 && (unsigned int)a3 < dword_4B7D38[0] )
      return *(_BYTE *)(&(*(&dword_4B7B38 + (a3 >> 6)))[1].LockSemaphore + 14 * (a3 & 0x3F)) & 0x40;
    *sub_46B984() = 9;
    sub_467EF4(a1, a2);
  }
  return 0;
}
// 4B7D38: using guessed type int dword_4B7D38[];
