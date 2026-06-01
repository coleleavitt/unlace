/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_FindEnclosingFunction
// Address: 0x00000000000EDE80

//----- (00000000000EDE80) ----------------------------------------------------
__int64 __fastcall Unwind_FindEnclosingFunction(__int64 a1)
{
  bool v1; // zf
  __int64 result; // x0
  _QWORD v3[3]; // [xsp+18h] [xbp+18h] BYREF

  v1 = Unwind_Find_FDE(a1 - 1, v3) == nullptr;
  result = v3[2];
  if ( v1 )
    return 0;
  return result;
}
