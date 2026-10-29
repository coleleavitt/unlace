/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77404
// Address: 0x00077404

//----- (00077404) --------------------------------------------------------
bool __fastcall sub_77404(int a1)
{
  _WORD v2[42]; // [sp+0h] [bp-58h] BYREF

  return !sub_77334(a1, (int)v2) && (v2[6] & 0xF000) != 0x4000;
}
