/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: bitcount
// Address: 0x0009D860

//----- (0009D860) --------------------------------------------------------
int __cdecl bitcount(__int64 a1)
{
  __int64 v1; // rt0

  HIDWORD(v1) = (((a1 - __PAIR64__((HIDWORD(a1) >> 1) & 0x55555555, ((unsigned int)a1 >> 1) & 0x55555555)) >> 32)
               & 0x33333333)
              + (((unsigned int)((a1 - __PAIR64__((HIDWORD(a1) >> 1) & 0x55555555, ((unsigned int)a1 >> 1) & 0x55555555)) >> 32) >> 2)
               & 0x33333333);
  LODWORD(v1) = ((a1 - (((unsigned int)a1 >> 1) & 0x55555555)) & 0x33333333)
              + ((((unsigned int)a1 - (((unsigned int)a1 >> 1) & 0x55555555)) >> 2) & 0x33333333);
  return (((unsigned __int64)(0x110000000LL * v1) >> 32) & 0xF0F0F0F) / 0xFF000001;
}
