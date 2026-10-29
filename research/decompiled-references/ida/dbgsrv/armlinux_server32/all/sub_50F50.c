/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50F50
// Address: 0x00050F50

//----- (00050F50) --------------------------------------------------------
int __fastcall sub_50F50(int *a1, int a2, int a3, int a4)
{
  int v4; // r8
  int v6; // r5
  int v7; // r6
  int v8; // r7
  int result; // r0

  v4 = a1[1];
  v6 = a1[21];
  v7 = a1[20];
  v8 = *a1;
  a1[1] = a2;
  a1[21] = a4;
  a1[20] = 0;
  result = sub_50C78((int)a1, a3);
  *a1 = v8;
  a1[1] = v4;
  a1[20] = v7;
  a1[21] = v6;
  return result;
}
