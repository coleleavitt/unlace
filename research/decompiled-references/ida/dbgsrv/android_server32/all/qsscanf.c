/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsscanf
// Address: 0x000843C8

//----- (000843C8) --------------------------------------------------------
int __fastcall qsscanf(int a1, char *a2)
{
  int varg_r2; // [sp+10h] [bp+8h] BYREF

  return qvsscanf(a1, a2, (int)&varg_r2);
}
