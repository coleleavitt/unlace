/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vqperror
// Address: 0x000A3B30

//----- (000A3B30) --------------------------------------------------------
int __cdecl vqperror(char *s, __gnuc_va_list __varargs)
{
  const char *v2; // eax

  qveprintf(s, __varargs);
  v2 = qstrerror(0xFFFFFFFF);
  return sub_A3B80(": %s\n", v2);
}
