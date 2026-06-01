/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvprintf
// Address: 0x00000000000CBEA0

//----- (00000000000CBEA0) ----------------------------------------------------
int __fastcall qvprintf(char *a1, __gnuc_va_list arg)
{
  return qvfprintf((FILE *)&_sF.__pad1, a1, arg);
}
// 1597E0: using guessed type FILE _sF;
