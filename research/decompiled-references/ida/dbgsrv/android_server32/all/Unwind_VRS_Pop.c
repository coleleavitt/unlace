/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_VRS_Pop
// Address: 0x00099424

//----- (00099424) --------------------------------------------------------
int __fastcall Unwind_VRS_Pop(int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v7; // r6
  int v8; // r5
  int *v9; // r0
  int result; // r0
  unsigned int v11; // r5
  _DWORD *v12; // r0
  int v13; // r1
  int v14; // r0
  int v16; // r2
  int v17[3]; // [sp+8h] [bp-30h] BYREF
  _DWORD *v18; // [sp+14h] [bp-24h] BYREF

  v17[0] = a4;
  if ( a2 != 1 )
  {
    if ( a2 )
    {
      fprintf(
        (FILE *)((char *)&_sF + 168),
        "libunwind: %s %s:%d - %s\n",
        "_Unwind_VRS_Pop",
        "/usr/local/google/buildbot/src/android/ndk-release-r19/external/libcxx/../../external/libunwind_llvm/src/Unwind-EHABI.cpp",
        952,
        "unsupported register class");
      fflush((FILE *)((char *)&_sF + 168));
      abort();
    }
    if ( !a4 && !unw_get_reg(a1, 13, v17) )
    {
      v7 = 0;
      v8 = 0;
      while ( v7 <= 0xF )
      {
        if ( ((1 << v7) & a3) != 0 )
        {
          v9 = (int *)v17[0];
          v17[0] += 4;
          v18 = (_DWORD *)*v9;
          if ( Unwind_VRS_Set(a1, 0, v7, 0, (int *)&v18) )
            return 2;
          v8 |= v7 == 13;
        }
        ++v7;
      }
      if ( v8 << 31 )
        return 0;
      v16 = v17[0];
      goto LABEL_23;
    }
    return 2;
  }
  if ( (a4 | 4) != 5 || unw_get_reg(a1, 13, &v18) )
    return 2;
  v11 = HIWORD(a3);
  while ( v11 < HIWORD(a3) + (unsigned __int16)a3 )
  {
    v12 = v18;
    v13 = *v18;
    v18 += 2;
    v14 = v12[1];
    v17[0] = v13;
    v17[1] = v14;
    if ( Unwind_VRS_Set(a1, 1, v11++, a4, v17) )
      return 2;
  }
  if ( a4 == 1 )
    v16 = (int)++v18;
  else
    v16 = (int)v18;
LABEL_23:
  result = unw_set_reg(a1, 13, v16);
  if ( result )
    return 2;
  return result;
}
// E0A90: using guessed type FILE _sF;
