/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67C60
// Address: 0x00067C60

//----- (00067C60) --------------------------------------------------------
int __fastcall sub_67C60(int a1, int a2)
{
  int v2; // r0
  int v4; // [sp+4h] [bp-10h]
  _BYTE v6[4]; // [sp+Ch] [bp-8h] BYREF

  v6[0] = *(_DWORD *)(a1 + 32);
  v4 = *(_DWORD *)(a1 + 8);
  v2 = sub_6762C();
  *(_DWORD *)(a2 + 8) = (*(int (__fastcall **)(int, int, _BYTE *, int, _DWORD))(*(_DWORD *)v2 + 148))(v2, v4, v6, 1, 0);
  return 0;
}
