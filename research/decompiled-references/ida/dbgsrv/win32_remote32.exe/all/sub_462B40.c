/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462B40
// Address: 0x00462B40

//----- (00462B40) --------------------------------------------------------
int __usercall sub_462B40@<eax>(__m128i _XMM0@<xmm0>)
{
  __int64 v4; // rax
  char v5; // cl

  if ( (dword_4B5E20 & 0x20) != 0 )
  {
    v4 = _mm_cvtsi128_si32(_XMM0);
    LODWORD(v4) = 2 * v4;
    if ( (unsigned int)v4 >= 0x9E000000 )
    {
      if ( (unsigned int)v4 >= 0xBE000000 )
      {
        LODWORD(_RAX) = 0;
      }
      else
      {
        v5 = BYTE3(v4) + 66;
        LODWORD(v4) = (HIDWORD(v4) ^ (((unsigned int)v4 | 0x1000000) << 7)) - HIDWORD(v4);
        return v4 << (v5 & 0x1F);
      }
    }
    else
    {
      LODWORD(_RAX) = (int)*(float *)_XMM0.m128i_i32;
    }
  }
  else
  {
    __asm
    {
      vbroadcastss xmm0, xmm0
      vcvttps2qq xmm0, xmm0
    }
    __asm { vpextrd edx, xmm0, 1 }
    __asm { vmovd   eax, xmm0 }
  }
  return _RAX;
}
// 4B5E20: using guessed type int dword_4B5E20;
