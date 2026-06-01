/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3ED54
// Address: 0x0003ED54

//----- (0003ED54) --------------------------------------------------------
int __fastcall sub_3ED54(int a1, int a2)
{
  int v3; // r1
  int v4; // r2
  int v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+4h] [bp-Ch]
  int v8; // [sp+8h] [bp-8h]

  v7 = 0;
  v6 = 0;
  v8 = 0;
  sub_3E2D0((int)sub_3EDC0, (int)&v6, a1, a2);
  *(_BYTE *)a2 = 7;
  v3 = v7;
  v4 = v8;
  *(_DWORD *)(a2 + 8) = v6;
  *(_DWORD *)(a2 + 12) = v3;
  *(_DWORD *)(a2 + 16) = v4;
  return 0;
}
