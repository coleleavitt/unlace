/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99A62
// Address: 0x00099A62

//----- (00099A62) --------------------------------------------------------
int __fastcall sub_99A62(int a1, unsigned int a2)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r0

  v2 = a1 + 8;
  if ( a2 == -2 )
  {
LABEL_9:
    v4 = v2 + 52;
    return *(_DWORD *)v4;
  }
  v3 = a2 == -1;
  if ( a2 != -1 )
    v3 = a2 == 15;
  if ( v3 )
  {
    v4 = v2 + 60;
  }
  else
  {
    if ( a2 == 14 )
    {
      v4 = v2 + 56;
      return *(_DWORD *)v4;
    }
    if ( a2 == 13 )
      goto LABEL_9;
    if ( a2 > 0xC )
    {
      fprintf(
        (FILE *)((char *)&_sF + 168),
        "libunwind: %s %s:%d - %s\n",
        "getRegister",
        "/usr/local/google/buildbot/src/android/ndk-release-r19/external/libcxx/../../external/libunwind_llvm/src/Registers.hpp",
        1499,
        "unsupported arm register");
      fflush((FILE *)((char *)&_sF + 168));
      abort();
    }
    v4 = v2 + 4 * a2;
  }
  return *(_DWORD *)v4;
}
// E0A90: using guessed type FILE _sF;
