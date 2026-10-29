/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vqperror
// Address: 0x00075B1C

//----- (00075B1C) --------------------------------------------------------
int __fastcall vqperror(char *a1, void *a2)
{
  const char *v2; // r0

  qveprintf(a1, a2);
  v2 = qstrerror(0xFFFFFFFF);
  return sub_75B3C(": %s\n", v2);
}
