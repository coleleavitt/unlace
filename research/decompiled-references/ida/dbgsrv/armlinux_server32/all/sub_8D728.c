/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D728
// Address: 0x0008D728

//----- (0008D728) --------------------------------------------------------
int __fastcall sub_8D728(int a1, unsigned __int8 a2, int a3)
{
  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  sub_8C2DC((_DWORD *)a1, *(_DWORD *)(a3 + 4) + 1);
  sub_8C5B4((_DWORD *)a1, *(_DWORD *)(a1 + 4), 0, 1u, a2);
  sub_8CE68((_DWORD *)a1, *(_BYTE **)a3, *(_DWORD *)(a3 + 4));
  return a1;
}
