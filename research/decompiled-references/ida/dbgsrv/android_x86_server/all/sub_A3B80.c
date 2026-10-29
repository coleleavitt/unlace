/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3B80
// Address: 0x000A3B80

//----- (000A3B80) --------------------------------------------------------
int sub_A3B80(char *s, ...)
{
  va_list __varargs; // [esp+30h] [ebp+Ch] BYREF

  va_start(__varargs, s);
  return qveprintf(s, __varargs);
}
