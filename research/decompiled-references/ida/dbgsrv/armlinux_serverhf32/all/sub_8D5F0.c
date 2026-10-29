/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D5F0
// Address: 0x0008D5F0

//----- (0008D5F0) --------------------------------------------------------
int __fastcall sub_8D5F0(int a1, unsigned __int8 a2, int a3)
{
  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  sub_8C1A0((_DWORD *)a1, *(_DWORD *)(a3 + 4) + 1);
  sub_8C478((_DWORD *)a1, *(_DWORD *)(a1 + 4), 0, 1u, a2);
  sub_8CD2C((_DWORD *)a1, *(_BYTE **)a3, *(_DWORD *)(a3 + 4));
  return a1;
}
