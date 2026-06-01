/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_VRS_Set
// Address: 0x00099378

//----- (00099378) --------------------------------------------------------
int __fastcall Unwind_VRS_Set(int a1, int a2, unsigned int a3, int a4, int *a5)
{
  int result; // r0

  if ( a2 == 1 )
  {
    if ( (a4 | 4) == 5 )
    {
      if ( a4 == 1 )
      {
        if ( a3 <= 0xF )
        {
          unw_save_vfp_as_X(a1);
LABEL_12:
          result = unw_set_fpreg(a1, a3 + 256, *a5, a5[1]);
LABEL_13:
          if ( result )
            return 2;
          return result;
        }
      }
      else if ( a3 <= 0x1F )
      {
        goto LABEL_12;
      }
    }
    return 2;
  }
  if ( a2 )
  {
    fprintf(
      (FILE *)((char *)&_sF + 168),
      "libunwind: %s %s:%d - %s\n",
      "_Unwind_VRS_Set",
      "/usr/local/google/buildbot/src/android/ndk-release-r19/external/libcxx/../../external/libunwind_llvm/src/Unwind-EHABI.cpp",
      808,
      "unsupported register class");
    fflush((FILE *)((char *)&_sF + 168));
    abort();
  }
  result = 2;
  if ( a3 <= 0xF && !a4 )
  {
    result = unw_set_reg(a1, a3, *a5);
    goto LABEL_13;
  }
  return result;
}
// E0A90: using guessed type FILE _sF;
