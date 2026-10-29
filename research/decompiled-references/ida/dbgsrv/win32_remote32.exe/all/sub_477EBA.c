/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477EBA
// Address: 0x00477EBA

//----- (00477EBA) --------------------------------------------------------
__int32 __usercall sub_477EBA@<eax>(int a1@<ebx>, int a2@<edi>, unsigned __int32 a3)
{
  if ( a3 < 2 )
    return _InterlockedExchange(&dword_4B7A4C, a3);
  *sub_46B984() = 22;
  sub_467EF4(a1, a2);
  return -1;
}
// 4B7A4C: using guessed type int dword_4B7A4C;
