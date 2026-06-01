/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47AA1F
// Address: 0x0047AA1F

//----- (0047AA1F) --------------------------------------------------------
int __usercall sub_47AA1F@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  if ( a3 )
  {
    *a3 = dword_4B7EAC;
    return 0;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 22;
  }
}
// 4B7EAC: using guessed type int dword_4B7EAC;
