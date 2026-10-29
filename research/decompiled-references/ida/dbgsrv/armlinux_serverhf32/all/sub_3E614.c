/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E614
// Address: 0x0003E614

//----- (0003E614) --------------------------------------------------------
int __fastcall sub_3E614(_DWORD *a1, int a2)
{
  _BYTE v3[4]; // [sp+0h] [bp-Ch] BYREF

  sub_3E5E0(a1, a2, v3, 2);
  return (unsigned __int16)(v3[0] + (v3[1] << 8));
}
