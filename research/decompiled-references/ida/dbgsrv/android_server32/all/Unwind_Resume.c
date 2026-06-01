/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_Resume
// Address: 0x00099778

//----- (00099778) --------------------------------------------------------
void __fastcall __noreturn Unwind_Resume(int *a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-870h]
  _BYTE v6[1120]; // [sp+8h] [bp-868h] BYREF
  _DWORD v7[256]; // [sp+468h] [bp-408h] BYREF

  unw_getcontext(v7, a2, a3, a4, v5);
  sub_9965C(v7, (int)v6, a1, 1);
  fprintf(
    (FILE *)((char *)&_sF + 168),
    "libunwind: %s %s:%d - %s\n",
    "_Unwind_Resume",
    "/usr/local/google/buildbot/src/android/ndk-release-r19/external/libcxx/../../external/libunwind_llvm/src/Unwind-EHABI.cpp",
    718,
    "_Unwind_Resume() can't return");
  fflush((FILE *)((char *)&_sF + 168));
  abort();
}
// 9978A: variable 'v5' is possibly undefined
// E0A90: using guessed type FILE _sF;
