/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A48CC
// Address: 0x00000000000A48CC

//----- (00000000000A48CC) ----------------------------------------------------
unsigned __int64 __fastcall sub_A48CC(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // x8

  v2 = 1000000 * HIDWORD(a1) + (unsigned int)a1 + 1000LL * a2;
  return (v2 % 0xF4240) | ((v2 / 0xF4240) << 32);
}
