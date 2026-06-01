/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476FC0
// Address: 0x0000000000476FC0

//----- (0000000000476FC0) ----------------------------------------------------
unsigned __int64 __fastcall sub_476FC0(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // x1

  v2 = (unsigned int)a1 + 1000LL * a2 + 1000000 * HIDWORD(a1);
  return (v2 % 0xF4240) | ((v2 / 0xF4240) << 32);
}
