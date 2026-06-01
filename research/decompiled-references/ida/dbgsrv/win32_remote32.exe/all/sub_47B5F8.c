/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B5F8
// Address: 0x0047B5F8

//----- (0047B5F8) --------------------------------------------------------
int __usercall sub_47B5F8@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        unsigned __int16 *lpString1,
        unsigned __int16 *lpString2,
        int cchCount1)
{
  if ( dword_4B7A48 )
    return sub_47B665(a1, (__m128i *)lpString1, (__m128i *)lpString2, cchCount1, nullptr);
  if ( lpString1 && lpString2 && (unsigned int)cchCount1 <= 0x7FFFFFFF )
    return sub_46807B(lpString1, lpString2, cchCount1);
  *sub_46B984() = 22;
  sub_467EF4(a1, a2);
  return 0x7FFFFFFF;
}
// 4B7A48: using guessed type int dword_4B7A48;
