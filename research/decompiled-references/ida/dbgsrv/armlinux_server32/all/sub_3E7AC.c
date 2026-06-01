/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E7AC
// Address: 0x0003E7AC

//----- (0003E7AC) --------------------------------------------------------
int __fastcall sub_3E7AC(_DWORD *a1, int a2)
{
  _BYTE v3[4]; // [sp+0h] [bp-Ch] BYREF

  sub_3E778(a1, a2, v3, 2);
  return (unsigned __int16)(v3[0] + (v3[1] << 8));
}
