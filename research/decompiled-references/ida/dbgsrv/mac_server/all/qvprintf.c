/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvprintf
// Address: 0x0000000100081920

//----- (0000000100081920) ----------------------------------------------------
int __fastcall qvprintf(char *__s, va_list a2)
{
  return qvfprintf(__stdoutp, __s, a2);
}
