/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000615EC
// Address: 0x00000001000615EC

//----- (00000001000615EC) ----------------------------------------------------
__int64 __fastcall sub_1000615EC(const char *a1, __int64 a2)
{
  __int64 result; // x0

  result = atoi(a1);
  *(_WORD *)(a2 + 104) = result;
  return result;
}
