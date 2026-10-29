__int64 __fastcall IDAMemoAccessible__::vfunc_17(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  if ( (debug & 0x80000) != 0 && (::a6[0] & 1) != 0 )
    sub_4F7CB0(1, (unsigned int)"%s IDAMemoAccessible::attributes(offset=%d)\n", (unsigned int)&unk_5C2F25, a3, a5, a6);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  return a1;
}
