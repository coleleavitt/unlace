/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmakepath
// Address: 0x0007D078

//----- (0007D078) --------------------------------------------------------
char *__fastcall qmakepath(char *a1, int a2, char *a3)
{
  char *varg_r3; // [sp+14h] [bp+8h] BYREF

  return vqmakepath(a1, a2, a3, &varg_r3);
}
