/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477C80
// Address: 0x00477C80

//----- (00477C80) --------------------------------------------------------
int __usercall sub_477C80@<eax>(int a1@<ebx>, int a2@<edi>, __int32 a3)
{
  if ( a3 == 0x4000 || a3 == 0x8000 || a3 == 0x10000 )
  {
    _InterlockedExchange(&dword_4B7F90, a3);
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
