/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3CCC
// Address: 0x00000000000A3CCC

//----- (00000000000A3CCC) ----------------------------------------------------
__int64 __fastcall sub_A3CCC(const char *a1, __int64 a2)
{
  __int64 result; // x0

  result = atoi(a1);
  *(_WORD *)(a2 + 104) = result;
  return result;
}
