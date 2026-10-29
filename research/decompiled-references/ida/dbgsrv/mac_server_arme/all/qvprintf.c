/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvprintf
// Address: 0x0000000100079470

//----- (0000000100079470) ----------------------------------------------------
__int64 __fastcall qvprintf(char *__s, va_list a2)
{
  return qvfprintf(__stdoutp, __s, a2);
}
