/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47AA4B
// Address: 0x0047AA4B

//----- (0047AA4B) --------------------------------------------------------
int __usercall sub_47AA4B@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  if ( a3 )
  {
    *a3 = dword_4B7EA4;
    return 0;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 22;
  }
}
// 4B7EA4: using guessed type int dword_4B7EA4;
