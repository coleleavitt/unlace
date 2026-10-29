/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7756C
// Address: 0x0007756C

//----- (0007756C) --------------------------------------------------------
bool __fastcall sub_7756C(int a1)
{
  _WORD v2[42]; // [sp+0h] [bp-58h] BYREF

  return !sub_7749C(a1, (int)v2) && (v2[6] & 0xF000) != 0x4000;
}
