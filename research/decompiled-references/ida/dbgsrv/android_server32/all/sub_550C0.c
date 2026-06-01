/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_550C0
// Address: 0x000550C0

//----- (000550C0) --------------------------------------------------------
int __fastcall sub_550C0(int *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v6; // r7
  int v7; // r5
  int result; // r0
  int v9; // [sp+4h] [bp-4h]

  v9 = a1[1];
  a1[1] = a2;
  v5 = a1[19];
  a1[19] = a4;
  v6 = a1[18];
  a1[18] = 0;
  v7 = *a1;
  result = sub_54E2C((int)a1, a3);
  *a1 = v7;
  a1[1] = v9;
  a1[18] = v6;
  a1[19] = v5;
  return result;
}
