/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsnprintf
// Address: 0x0008433C

//----- (0008433C) --------------------------------------------------------
unsigned int __fastcall qsnprintf(_BYTE *a1, int a2, const char *a3)
{
  int varg_r3; // [sp+14h] [bp+8h] BYREF

  return qvsnprintf(a1, a2, a3, (int)&varg_r3);
}
