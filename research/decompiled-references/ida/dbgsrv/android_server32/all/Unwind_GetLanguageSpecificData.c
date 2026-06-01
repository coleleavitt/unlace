/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_GetLanguageSpecificData
// Address: 0x000997E0

//----- (000997E0) --------------------------------------------------------
int __fastcall Unwind_GetLanguageSpecificData(int a1)
{
  int proc_info; // r1
  int result; // r0
  _BYTE v3[8]; // [sp+4h] [bp-34h] BYREF
  int v4; // [sp+Ch] [bp-2Ch]

  proc_info = unw_get_proc_info(a1, (int)v3);
  result = v4;
  if ( proc_info )
    return 0;
  return result;
}
