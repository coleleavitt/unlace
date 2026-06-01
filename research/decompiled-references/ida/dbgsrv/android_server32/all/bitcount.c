/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: bitcount
// Address: 0x00071F48

//----- (00071F48) --------------------------------------------------------
unsigned int __fastcall bitcount(__int64 a1)
{
  __int64 v1; // r0
  __int64 v2; // r2

  v1 = a1 - __PAIR64__((HIDWORD(a1) >> 1) & 0x55555555, ((unsigned int)a1 >> 1) & 0x55555555);
  HIDWORD(v2) = ((HIDWORD(v1) >> 2) & 0x33333333) + (HIDWORD(v1) & 0x33333333);
  HIDWORD(v1) = (unsigned __int64)HIDWORD(v2) >> 4;
  LODWORD(v1) = (((unsigned int)v1 >> 2) & 0x33333333) + (v1 & 0x33333333);
  LODWORD(v2) = ((unsigned int)v1 >> 4) + (HIDWORD(v2) << 28);
  return (unsigned int)((0x101010101010101LL * ((v2 + v1) & 0xF0F0F0F0F0F0F0FuLL)) >> 32) >> 24;
}
