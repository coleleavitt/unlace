/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qveprintf
// Address: 0x00000000000CBEC0

//----- (00000000000CBEC0) ----------------------------------------------------
int __fastcall qveprintf(char *a1, __gnuc_va_list arg)
{
  return qvfprintf((FILE *)((char *)&_sF + 304), a1, arg);
}
// 1597E0: using guessed type FILE _sF;
