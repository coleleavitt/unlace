/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gnu_ldivmod_helper
// Address: 0x0009AEC4

//----- (0009AEC4) --------------------------------------------------------
__int64 __fastcall _gnu_ldivmod_helper(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // r0

  result = a1 / a2;
  *a3 = a1 - a2 * result;
  return result;
}
