/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D674
// Address: 0x000000010005D674

//----- (000000010005D674) ----------------------------------------------------
__int64 __fastcall sub_10005D674(const char *a1, __int64 a2)
{
  __int64 result; // x0

  result = atoi(a1);
  *(_WORD *)(a2 + 104) = result;
  return result;
}
