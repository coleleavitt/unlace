/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054640
// Address: 0x0000000140054640

//----- (0000000140054640) ----------------------------------------------------
unsigned __int64 __fastcall sub_140054640(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r8

  v2 = (unsigned int)a1 + 1000 * (a2 + 1000 * HIDWORD(a1));
  return ((unsigned __int64)(unsigned int)(v2 / 0xF4240) << 32) | (v2 % 0xF4240);
}
