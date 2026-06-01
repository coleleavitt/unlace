/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_SetIP
// Address: 0x00000000000EDE68

//----- (00000000000EDE68) ----------------------------------------------------
__int64 __fastcall Unwind_SetIP(__int64 result, __int64 a2)
{
  *(_QWORD *)(result + 792) = a2;
  return result;
}
