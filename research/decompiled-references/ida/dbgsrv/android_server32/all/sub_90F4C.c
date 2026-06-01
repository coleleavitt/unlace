/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90F4C
// Address: 0x00090F4C

//----- (00090F4C) --------------------------------------------------------
int __fastcall sub_90F4C(int a1, unsigned int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-18h]
  int v6[2]; // [sp+8h] [bp-10h] BYREF

  v6[1] = a4;
  v6[0] = a3;
  Unwind_VRS_Set(a1, 0, a2, 0, v6);
  return v5;
}
// 90F74: variable 'v5' is possibly undefined
