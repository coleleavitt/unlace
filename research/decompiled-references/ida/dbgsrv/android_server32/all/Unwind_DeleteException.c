/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_DeleteException
// Address: 0x00099848

//----- (00099848) --------------------------------------------------------
int __fastcall Unwind_DeleteException(int result)
{
  int (__fastcall *v1)(int, int); // r2

  v1 = *(int (__fastcall **)(int, int))(result + 8);
  if ( v1 )
    return v1(1, result);
  return result;
}
