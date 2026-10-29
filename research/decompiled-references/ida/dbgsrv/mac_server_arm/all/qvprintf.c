/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvprintf
// Address: 0x00000001000742A0

//----- (00000001000742A0) ----------------------------------------------------
__int64 __fastcall qvprintf(char *__s, va_list a2)
{
  return qvfprintf(__stdoutp, __s, a2);
}
