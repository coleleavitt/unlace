/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: aeabi_unwind_cpp_pr0
// Address: 0x00099574

//----- (00099574) --------------------------------------------------------
int __fastcall _aeabi_unwind_cpp_pr0(int a1, int a2, int a3)
{
  _DWORD *LanguageSpecificData; // r0
  int result; // r0
  int v7; // r1

  LanguageSpecificData = (_DWORD *)Unwind_GetLanguageSpecificData(a3);
  if ( !(*(unsigned __int8 *)(a2 + 80) << 31) && *LanguageSpecificData )
    return 9;
  v7 = unw_step(a3);
  result = 9;
  if ( v7 == 1 )
    return 8;
  return result;
}
