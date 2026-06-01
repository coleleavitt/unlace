/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gnu_unwind_frame
// Address: 0x00099854

//----- (00099854) --------------------------------------------------------
int __fastcall _gnu_unwind_frame(int a1, int a2)
{
  int result; // r0

  result = unw_step(a2) - 1;
  if ( result )
    return 9;
  return result;
}
