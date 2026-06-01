/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_FindEnclosingFunction
// Address: 0x00000000000E7BAB

//----- (00000000000E7BAB) ----------------------------------------------------
__int64 __fastcall Unwind_FindEnclosingFunction(__int64 a1)
{
  unsigned int *FDE; // rax
  __int64 v2; // rdx
  _QWORD v4[4]; // [rsp+8h] [rbp-20h] BYREF

  FDE = Unwind_Find_FDE(a1 - 1, v4);
  v2 = 0;
  if ( FDE )
    return v4[2];
  return v2;
}
