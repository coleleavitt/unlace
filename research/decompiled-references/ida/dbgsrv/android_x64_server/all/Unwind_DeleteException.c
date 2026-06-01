/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_DeleteException
// Address: 0x00000000000E9322

//----- (00000000000E9322) ----------------------------------------------------
__int64 (__fastcall *__fastcall Unwind_DeleteException(__int64 a1))(__int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 8);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64))result(1, a1);
  return result;
}
