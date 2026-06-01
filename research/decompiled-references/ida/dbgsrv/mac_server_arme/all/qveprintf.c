/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qveprintf
// Address: 0x0000000100079488

//----- (0000000100079488) ----------------------------------------------------
__int64 __fastcall qveprintf(char *__s, va_list a2)
{
  return qvfprintf(__stderrp, __s, a2);
}
