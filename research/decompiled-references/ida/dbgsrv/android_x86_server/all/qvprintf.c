/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvprintf
// Address: 0x000B9AC0

//----- (000B9AC0) --------------------------------------------------------
int __cdecl qvprintf(char *s, __gnuc_va_list __varargs)
{
  return qvfprintf((FILE *)&_sF.__pad1, s, __varargs);
}
// 13E950: using guessed type FILE _sF;
