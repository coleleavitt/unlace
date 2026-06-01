/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000623D4
// Address: 0x00000001000623D4

//----- (00000001000623D4) ----------------------------------------------------
unsigned __int64 __fastcall sub_1000623D4(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // x8

  v2 = a1 - 4293967296u * HIDWORD(a1) + 1000LL * a2;
  return v2 + 4293967296u * (v2 / 0xF4240);
}
