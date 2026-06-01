/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_GetRegionStart
// Address: 0x00099814

//----- (00099814) --------------------------------------------------------
int __fastcall Unwind_GetRegionStart(int a1)
{
  int proc_info; // r1
  int result; // r0
  _DWORD v3[10]; // [sp+4h] [bp-34h] BYREF

  proc_info = unw_get_proc_info(a1, (int)v3);
  result = v3[0];
  if ( proc_info )
    return 0;
  return result;
}
