/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gnu_uldivmod_helper
// Address: 0x0009AEF8

//----- (0009AEF8) --------------------------------------------------------
unsigned __int64 __fastcall _gnu_uldivmod_helper(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 result; // r0

  result = a1 / a2;
  *a3 = a1 - result * a2;
  return result;
}
