/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477C53
// Address: 0x00477C53

//----- (00477C53) --------------------------------------------------------
int __usercall sub_477C53@<eax>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  if ( a3 )
  {
    *a3 = dword_4B7F90;
    return 0;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 22;
  }
}
// 4B7F90: using guessed type int dword_4B7F90;
