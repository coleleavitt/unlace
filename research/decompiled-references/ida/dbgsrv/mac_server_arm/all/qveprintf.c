/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qveprintf
// Address: 0x00000001000742B8

//----- (00000001000742B8) ----------------------------------------------------
__int64 __fastcall qveprintf(char *__s, va_list a2)
{
  return qvfprintf(__stderrp, __s, a2);
}
