/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47213D
// Address: 0x0047213D

//----- (0047213D) --------------------------------------------------------
int __usercall sub_47213D@<eax>(
        int ebx0@<ebx>,
        int edi0@<edi>,
        __m128i a3@<xmm0>,
        unsigned __int16 *a1,
        unsigned __int16 *a2)
{
  if ( dword_4B7A48 )
    return sub_472186(ebx0, edi0, a3, a1, a2, nullptr);
  if ( a1 && a2 )
    return sub_472100(a1, a2);
  *sub_46B984() = 22;
  sub_467EF4(ebx0, edi0);
  return 0x7FFFFFFF;
}
// 4B7A48: using guessed type int dword_4B7A48;
