/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E654
// Address: 0x0003E654

//----- (0003E654) --------------------------------------------------------
int __fastcall sub_3E654(_DWORD *a1, int a2)
{
  _BYTE v3[4]; // [sp+0h] [bp-8h] BYREF

  sub_3E5E0(a1, a2, v3, 4);
  return (v3[2] << 16) + (v3[1] << 8) + v3[0] + (v3[3] << 24);
}
