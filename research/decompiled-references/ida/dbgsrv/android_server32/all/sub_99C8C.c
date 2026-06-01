/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99C8C
// Address: 0x00099C8C

//----- (00099C8C) --------------------------------------------------------
__int64 __fastcall sub_99C8C(int a1, int a2)
{
  _QWORD *v4; // r0
  int v5; // r0

  if ( (a2 & 0xFFFFFFF0) == 0x110 )
  {
    if ( !*(_BYTE *)(a1 + 66) )
    {
      *(_BYTE *)(a1 + 66) = 1;
      sub_99890((_QWORD *)(a1 + 208));
    }
    v5 = a1 + 8 * a2 - 1968;
  }
  else
  {
    if ( (a2 & 0xFFFFFFF0) != 0x100 )
    {
      fprintf(
        (FILE *)((char *)&_sF + 168),
        "libunwind: %s %s:%d - %s\n",
        "getFloatRegister",
        "/usr/local/google/buildbot/src/android/ndk-release-r19/external/libcxx/../../external/libunwind_llvm/src/Registers.hpp",
        1746,
        "Unknown ARM float register");
      fflush((FILE *)((char *)&_sF + 168));
      abort();
    }
    if ( !*(_BYTE *)(a1 + 65) )
    {
      *(_BYTE *)(a1 + 65) = 1;
      v4 = (_QWORD *)(a1 + 72);
      if ( *(_BYTE *)(a1 + 64) )
        sub_99888(v4);
      else
        sub_99880(v4);
    }
    v5 = a1 + 8 * a2 - 1976;
  }
  return *(_QWORD *)v5;
}
// E0A90: using guessed type FILE _sF;
