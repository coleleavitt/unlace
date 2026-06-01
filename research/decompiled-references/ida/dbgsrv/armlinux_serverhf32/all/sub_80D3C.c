/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D3C
// Address: 0x00080D3C

//----- (00080D3C) --------------------------------------------------------
int __fastcall sub_80D3C(int a1, int a2, int a3)
{
  *(_DWORD *)(a1 - 120) = a2;
  *(_DWORD *)(a1 - 116) = a3;
  *(_DWORD *)(a1 - 128) = 0;
  *(_DWORD *)(a1 - 112) = sub_7FF54();
  *(_DWORD *)(a1 - 108) = sub_7FF00();
  *(_BYTE *)(a1 - 88) = 71;
  *(_BYTE *)(a1 - 86) = 85;
  *(_BYTE *)(a1 - 81) = 0;
  *(_BYTE *)(a1 - 87) = 78;
  *(_DWORD *)(a1 - 80) = sub_80CF8;
  *(_BYTE *)(a1 - 85) = 67;
  *(_BYTE *)(a1 - 84) = 67;
  *(_BYTE *)(a1 - 83) = 43;
  *(_BYTE *)(a1 - 82) = 43;
  return a1 - 128;
}
