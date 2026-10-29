/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_775B0
// Address: 0x000775B0

//----- (000775B0) --------------------------------------------------------
bool __fastcall sub_775B0(int a1)
{
  _WORD v2[42]; // [sp+0h] [bp-58h] BYREF

  return !sub_7749C(a1, (int)v2) && (v2[6] & 0xF000) == 0x4000;
}
