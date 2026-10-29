/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85F10
// Address: 0x00085F10

//----- (00085F10) --------------------------------------------------------
int sub_85F10(char *s, ...)
{
  va_list __varargs; // [esp+30h] [ebp+Ch] BYREF

  va_start(__varargs, s);
  return qvprintf(s, __varargs);
}
