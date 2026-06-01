/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qveprintf
// Address: 0x000B9B00

//----- (000B9B00) --------------------------------------------------------
int __cdecl qveprintf(char *s, __gnuc_va_list __varargs)
{
  return qvfprintf((FILE *)((char *)&_sF + 168), s, __varargs);
}
// 13E950: using guessed type FILE _sF;
