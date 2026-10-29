/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99A68
// Address: 0x00099A68

//----- (00099A68) --------------------------------------------------------
_DWORD *__fastcall sub_99A68(int a1, unsigned int a2, int a3)
{
  _DWORD *result; // r0
  bool v4; // zf

  result = (_DWORD *)(a1 + 8);
  if ( a2 == -2 )
    goto LABEL_10;
  v4 = a2 == -1;
  if ( a2 != -1 )
    v4 = a2 == 15;
  if ( v4 )
  {
    result[15] = a3;
    return result;
  }
  if ( a2 == 14 )
  {
    result[14] = a3;
    return result;
  }
  if ( a2 == 13 )
  {
LABEL_10:
    result[13] = a3;
  }
  else
  {
    if ( a2 > 0xC )
    {
      fprintf(
        (FILE *)((char *)&_sF + 168),
        "libunwind: %s %s:%d - %s\n",
        "setRegister",
        "/usr/local/google/buildbot/src/android/ndk-release-r19/external/libcxx/../../external/libunwind_llvm/src/Registers.hpp",
        1534,
        "unsupported arm register");
      fflush((FILE *)((char *)&_sF + 168));
      abort();
    }
    result[a2] = a3;
  }
  return result;
}
// E0A90: using guessed type FILE _sF;
