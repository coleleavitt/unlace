/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D9D0
// Address: 0x000000000046D9D0

//----- (000000000046D9D0) ----------------------------------------------------
__int64 __fastcall sub_46D9D0(const char *a1, __int64 a2)
{
  __int64 result; // rax

  result = strtol(a1, nullptr, 10);
  *(_WORD *)(a2 + 104) = result;
  return result;
}
