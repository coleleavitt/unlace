/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468109
// Address: 0x00468109

//----- (00468109) --------------------------------------------------------
int __usercall sub_468109@<eax>(
        int ebx0@<ebx>,
        int edi0@<edi>,
        __m128i xmm0_0@<xmm0>,
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        int a3)
{
  if ( dword_4B7A48 )
    return sub_468155(ebx0, xmm0_0, a1, a2, a3, nullptr);
  if ( a1 && a2 )
    return sub_46807B(a1, a2, a3);
  *sub_46B984() = 22;
  sub_467EF4(ebx0, edi0);
  return 0x7FFFFFFF;
}
// 4B7A48: using guessed type int dword_4B7A48;
