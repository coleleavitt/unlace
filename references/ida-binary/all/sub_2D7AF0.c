__int64 __fastcall IDAMemoAccessible__::vfunc_4(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  if ( (debug & 0x80000) != 0 && ::a6[0] < 0 )
    sub_4F7CB0(
      128,
      (unsigned int)"%s IDAMemoAccessible::addSelection(startOffset=%d, endOffset=%d)\n",
      (unsigned int)&unk_5C2F25,
      a2,
      a3,
      a6);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 - 32) + 224LL))(a1 - 32, 0, a2, a3);
}
