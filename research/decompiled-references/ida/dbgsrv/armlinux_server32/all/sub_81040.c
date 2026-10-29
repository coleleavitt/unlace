/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81040
// Address: 0x00081040

//----- (00081040) --------------------------------------------------------
int __fastcall sub_81040(int a1, int a2, int a3)
{
  *(_DWORD *)(a1 - 120) = a2;
  *(_DWORD *)(a1 - 116) = a3;
  *(_DWORD *)(a1 - 128) = 0;
  *(_DWORD *)(a1 - 112) = sub_80A7C();
  *(_DWORD *)(a1 - 108) = sub_80A28();
  *(_BYTE *)(a1 - 88) = 71;
  *(_BYTE *)(a1 - 86) = 85;
  *(_BYTE *)(a1 - 81) = 0;
  *(_BYTE *)(a1 - 87) = 78;
  *(_DWORD *)(a1 - 80) = sub_80FFC;
  *(_BYTE *)(a1 - 85) = 67;
  *(_BYTE *)(a1 - 84) = 67;
  *(_BYTE *)(a1 - 83) = 43;
  *(_BYTE *)(a1 - 82) = 43;
  return a1 - 128;
}
