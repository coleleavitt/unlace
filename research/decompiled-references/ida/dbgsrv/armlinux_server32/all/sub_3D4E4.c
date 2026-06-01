/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D4E4
// Address: 0x0003D4E4

//----- (0003D4E4) --------------------------------------------------------
int __fastcall sub_3D4E4(int a1, int a2)
{
  int v4; // r5
  int v5; // r6
  int v6; // [sp+0h] [bp-14h] BYREF
  int v7; // [sp+4h] [bp-10h]
  int v8; // [sp+8h] [bp-Ch]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  sub_3CAA0((int)sub_3C9C8, (int)&v6, a1, a2);
  *(_BYTE *)a2 = 7;
  v5 = v6;
  v4 = v7;
  *(_DWORD *)(a2 + 16) = v8;
  *(_DWORD *)(a2 + 8) = v5;
  *(_DWORD *)(a2 + 12) = v4;
  return 0;
}
