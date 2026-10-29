_BOOL8 __fastcall sub_2D8BF0(
        QT::QAccessibleWidget *this,
        const char *a2,
        double a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v7; // rdx

  if ( (debug & 0x80000) != 0 && ::a6[0] < 0 )
  {
    a2 = "%s IDAMemoAccessible::selectionCount()\n";
    sub_4F7CB0(128, (unsigned int)"%s IDAMemoAccessible::selectionCount()\n", (unsigned int)&unk_5C2F25, a5, a6, a7);
  }
  sub_2D89B0(this, (__int64)a2, a3);
  return v7 != (HIDWORD(v7) | 0xFFFFFFFF00000000LL);
}
