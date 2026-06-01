/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vqperror
// Address: 0x00000000000B7400

//----- (00000000000B7400) ----------------------------------------------------
int __fastcall vqperror(char *a1, void *a2)
{
  const char *v2; // rax

  qveprintf(a1, a2);
  v2 = qstrerror(0xFFFFFFFF);
  return sub_B7430(": %s\n", v2);
}
