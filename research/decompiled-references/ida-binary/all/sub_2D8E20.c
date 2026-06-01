__int64 __fastcall IDAMemoAccessible__::vfunc_7(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // edx
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // ebx

  sub_2D89B0((QT::QAccessibleWidget *)(a1 - 32), a2, a3);
  v6 = v3;
  if ( (debug & 0x80000) == 0 || (a6[0] & 0x20) == 0 )
    return v3;
  sub_4F7CB0(32, (unsigned int)"%s IDAMemoAccessible::cursorPosition() => %d\n", (unsigned int)&unk_5C2F25, v3, v4, v5);
  return v6;
}
