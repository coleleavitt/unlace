/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B150
// Address: 0x0004B150

//----- (0004B150) --------------------------------------------------------
int __fastcall sub_4B150(unsigned __int8 *a1, char *a2, unsigned __int8 *a3, int a4, int a5, int a6)
{
  int v10; // r4
  _BYTE v12[80]; // [sp+14h] [bp-58h] BYREF

  sub_45A40((int)v12, a6, 0);
  v10 = sub_4A774((int)v12, a2, 0, a4, a3, a1, a5);
  sub_46F18((int)v12);
  return v10;
}
