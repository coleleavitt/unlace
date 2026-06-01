/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BCAB
// Address: 0x0046BCAB

//----- (0046BCAB) --------------------------------------------------------
int __usercall sub_46BCAB@<eax>(int ebx0@<ebx>, int edi0@<edi>, unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  if ( dword_4B7A48 )
    return sub_46BD18(ebx0, (int)a1, (int)a2, a3, nullptr);
  if ( a1 && a2 && (unsigned int)a3 <= 0x7FFFFFFF )
    return sub_47A820(a1, a2, a3);
  *sub_46B984() = 22;
  sub_467EF4(ebx0, edi0);
  return 0x7FFFFFFF;
}
// 4B7A48: using guessed type int dword_4B7A48;
