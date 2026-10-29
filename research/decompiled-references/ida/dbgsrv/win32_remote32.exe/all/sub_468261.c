/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468261
// Address: 0x00468261

//----- (00468261) --------------------------------------------------------
int __usercall sub_468261@<eax>(int ebx0@<ebx>, int edi0@<edi>, unsigned __int8 *a1, unsigned __int8 *a2)
{
  if ( dword_4B7A48 )
    return sub_4682AA(ebx0, edi0, a1, a2, nullptr);
  if ( a1 && a2 )
    return sub_468228(a1, a2);
  *sub_46B984() = 22;
  sub_467EF4(ebx0, edi0);
  return 0x7FFFFFFF;
}
// 4B7A48: using guessed type int dword_4B7A48;
