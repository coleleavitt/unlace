/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85EB0
// Address: 0x00085EB0

//----- (00085EB0) --------------------------------------------------------
unsigned int sub_85EB0(char *s, ...)
{
  va_list __varargs; // [esp+30h] [ebp+Ch] BYREF

  va_start(__varargs, s);
  qvprintf(s, __varargs);
  sub_85F10("\n");
  return __readgsdword(0x14u);
}
