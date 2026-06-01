/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D840
// Address: 0x0044D840

//----- (0044D840) --------------------------------------------------------
int __cdecl sub_44D840(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // kr08_8
  unsigned __int64 v4; // rcx

  v3 = a1 + 1000LL * a3 + 1000000LL * a2;
  v4 = ((3619042523u * (unsigned __int64)(unsigned int)v3) >> 32) + 3619042523LL * HIDWORD(v3);
  return v3
       - 1000000
       * ((((1125899906LL * (unsigned int)v3 + (unsigned __int64)(unsigned int)v4) >> 32)
         + HIDWORD(v4)
         + 1125899906LL * HIDWORD(v3)) >> 18);
}
