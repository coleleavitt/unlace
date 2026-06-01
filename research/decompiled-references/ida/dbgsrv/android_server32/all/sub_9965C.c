/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9965C
// Address: 0x0009965C

//----- (0009965C) --------------------------------------------------------
int __fastcall sub_9965C(const void *a1, int a2, int *a3, char a4)
{
  int i; // r8
  int v8; // r6
  int (__fastcall *v9)(int, int *, int); // r3
  int v10; // r1
  int v11; // r2
  int v12; // r0
  int v14; // [sp+8h] [bp-50h] BYREF
  int v15[3]; // [sp+Ch] [bp-4Ch] BYREF
  int (__fastcall *v16)(int, int *, int); // [sp+18h] [bp-40h]
  int v17; // [sp+20h] [bp-38h]
  int v18; // [sp+2Ch] [bp-2Ch]
  _DWORD v19[2]; // [sp+34h] [bp-24h] BYREF

  unw_init_local(a2, a1);
  for ( i = 1; ; --i )
  {
    v8 = 1;
    if ( (a4 & 1) != 0 )
    {
      v8 = 2;
      if ( !i )
      {
        unw_set_reg(a2, -1, a3[4]);
        a4 = 0;
      }
    }
    unw_get_reg(a2, -2, v19);
    if ( unw_get_proc_info(a2, (int)v15) )
      break;
    v9 = v16;
    if ( v16 )
    {
      v10 = v18;
      v11 = v17;
      a3[18] = v15[0];
      a3[19] = v10;
      a3[20] = v11;
      v12 = v9(v8, a3, a2);
      if ( v12 == 7 )
      {
        unw_get_reg(a2, -1, &v14);
        a3[4] = v14;
        unw_resume(a2);
        return _stack_chk_guard - v19[1];
      }
      if ( v12 != 8 )
      {
        if ( v12 == 9 )
          abort();
        return _stack_chk_guard - v19[1];
      }
      if ( v19[0] == a3[8] )
      {
        fprintf(
          (FILE *)((char *)&_sF + 168),
          "libunwind: %s %s:%d - %s\n",
          "unwind_phase2",
          "/usr/local/google/buildbot/src/android/ndk-release-r19/external/libcxx/../../external/libunwind_llvm/src/Unwind-EHABI.cpp",
          616,
          "during phase1 personality function said it would stop here, but now in phase2 it did not stop here");
        fflush((FILE *)((char *)&_sF + 168));
        abort();
      }
    }
  }
  return _stack_chk_guard - v19[1];
}
// E0A90: using guessed type FILE _sF;
