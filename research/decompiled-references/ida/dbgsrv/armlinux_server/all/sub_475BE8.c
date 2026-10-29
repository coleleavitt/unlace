/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475BE8
// Address: 0x0000000000475BE8

//----- (0000000000475BE8) ----------------------------------------------------
__int64 __fastcall sub_475BE8(const char *a1, __int64 a2)
{
  __int64 result; // x0

  result = strtol(a1, nullptr, 10);
  *(_WORD *)(a2 + 104) = result;
  return result;
}
