/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AFC0
// Address: 0x0004AFC0

//----- (0004AFC0) --------------------------------------------------------
int __fastcall sub_4AFC0(unsigned __int8 *a1, char *a2, unsigned __int8 *a3, int a4, int a5, int a6)
{
  int v10; // r4
  _BYTE v12[80]; // [sp+14h] [bp-58h] BYREF

  sub_458B0((int)v12, a6, 0);
  v10 = sub_4A5E4((int)v12, a2, 0, a4, a3, a1, a5);
  sub_46D88((int)v12);
  return v10;
}
