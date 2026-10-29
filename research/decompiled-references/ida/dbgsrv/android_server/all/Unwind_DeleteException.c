/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_DeleteException
// Address: 0x00000000000EF838

//----- (00000000000EF838) ----------------------------------------------------
__int64 __fastcall Unwind_DeleteException(__int64 result)
{
  __int64 (__fastcall *v1)(__int64, __int64); // x2

  v1 = *(__int64 (__fastcall **)(__int64, __int64))(result + 8);
  if ( v1 )
    return v1(1, result);
  return result;
}
