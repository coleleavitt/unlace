/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94A20
// Address: 0x00094A20

//----- (00094A20) --------------------------------------------------------
int __cdecl sub_94A20(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // kr00_8

  v3 = a1 + a2 * (unsigned __int64)(unsigned int)dword_F4240;
  return (v3 + 1000 * a3 - 1000000 * ((v3 + 1000LL * a3) / (unsigned int)dword_F4240)) & 0xFFFFF;
}
// F4240: using guessed type int dword_F4240[37];
