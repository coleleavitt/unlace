/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462D40
// Address: 0x00462D40

//----- (00462D40) --------------------------------------------------------
__int64 __userpurge sub_462D40@<xmm0>(unsigned int _ECX@<ecx>, unsigned int a2@<edx>)
{
  if ( (dword_4B5E20 & 0x20) != 0 )
  {
    *(double *)&_XMM0 = COERCE_DOUBLE(_mm_cvtsi32_si128(_ECX).m128i_u64[0] | 0x4330000000000000LL)
                      - 4.503599627370496e15;
    if ( a2 )
      *(double *)&_XMM0 = *(double *)&_XMM0
                        + COERCE_DOUBLE(_mm_cvtsi32_si128(a2).m128i_u64[0] | 0x4530000000000000LL)
                        - 1.934281311383407e25;
  }
  else
  {
    __asm
    {
      vmovd   xmm0, ecx
      vpinsrd xmm0, xmm0, edx, 1
      vcvtuqq2pd xmm0, xmm0
    }
  }
  return _XMM0;
}
// 4B5E20: using guessed type int dword_4B5E20;
