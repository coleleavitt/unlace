/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99D38
// Address: 0x00099D38

//----- (00099D38) --------------------------------------------------------
_DWORD *__fastcall sub_99D38(int a1, int a2, int a3, int a4)
{
  _QWORD *v8; // r0
  _DWORD *result; // r0

  if ( (a2 & 0xFFFFFFF0) == 0x110 )
  {
    if ( !*(_BYTE *)(a1 + 66) )
    {
      *(_BYTE *)(a1 + 66) = 1;
      sub_99890((_QWORD *)(a1 + 208));
    }
    result = (_DWORD *)(a1 + 8 * a2 - 1968);
  }
  else
  {
    if ( (a2 & 0xFFFFFFF0) != 0x100 )
    {
      fprintf(
        (FILE *)((char *)&_sF + 168),
        "libunwind: %s %s:%d - %s\n",
        "setFloatRegister",
        "/usr/local/google/buildbot/src/android/ndk-release-r19/external/libcxx/../../external/libunwind_llvm/src/Registers.hpp",
        1782,
        "Unknown ARM float register");
      fflush((FILE *)((char *)&_sF + 168));
      abort();
    }
    if ( !*(_BYTE *)(a1 + 65) )
    {
      *(_BYTE *)(a1 + 65) = 1;
      v8 = (_QWORD *)(a1 + 72);
      if ( *(_BYTE *)(a1 + 64) )
        sub_99888(v8);
      else
        sub_99880(v8);
    }
    result = (_DWORD *)(a1 + 8 * a2 - 1976);
  }
  *result = a3;
  result[1] = a4;
  return result;
}
// E0A90: using guessed type FILE _sF;
