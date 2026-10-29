/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90BF8
// Address: 0x00090BF8

//----- (00090BF8) --------------------------------------------------------
int __fastcall sub_90BF8(int a1, int a2, int *a3, int a4)
{
  int v6; // r3
  int v7; // r4
  int v8; // r2
  int v9; // r3
  int v10; // r2

  sub_90F4C(a2, 0, a1, a4);
  sub_90F4C(a2, 1u, *a3, v6);
  v7 = a3[4];
  v10 = sub_90BA4(a2, 0xFu, v8, v9) & 1 | v7;
  return sub_90F4C(a2, 0xFu, v10, (int)sub_90F4C);
}
// 90C16: variable 'v6' is possibly undefined
// 90C1E: variable 'v8' is possibly undefined
// 90C1E: variable 'v9' is possibly undefined
