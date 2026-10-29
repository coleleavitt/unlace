/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469372
// Address: 0x00469372

//----- (00469372) --------------------------------------------------------
int __usercall sub_469372@<eax>(int a1@<ebx>, int a2@<edi>, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  if ( dword_4B7A48 )
    return sub_4693D4(a1, (int)a3, (int)a4, a5, nullptr);
  if ( (a3 || !a5) && (a4 || !a5) )
    return sub_479160(a3, a4, a5);
  *sub_46B984() = 22;
  sub_467EF4(a1, a2);
  return 0x7FFFFFFF;
}
// 4B7A48: using guessed type int dword_4B7A48;
