/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DE10
// Address: 0x0001DE10

//----- (0001DE10) --------------------------------------------------------
void __noreturn sub_1DE10(char *a1, ...)
{
  va_list va; // [esp+20h] [ebp+Ch] BYREF

  va_start(va, a1);
  verror(a1, va);
}
// B1570: using guessed type void __cdecl __noreturn verror(char *s, __gnuc_va_list __varargs);
