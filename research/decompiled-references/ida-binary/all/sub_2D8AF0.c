__int64 __fastcall sub_2D8AF0(
        QT::QAccessibleWidget *this,
        const char *a2,
        _DWORD *a3,
        _DWORD *a4,
        int a5,
        int a6,
        double a7)
{
  int v8; // ebp
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  int v14; // ecx

  v8 = (int)a2;
  if ( (debug & 0x80000) != 0 && ::a6[0] < 0 )
  {
    v14 = (int)a2;
    a2 = "%s IDAMemoAccessible::selection(selectionIndex=%d)\n";
    sub_4F7CB0(
      128,
      (unsigned int)"%s IDAMemoAccessible::selection(selectionIndex=%d)\n",
      (unsigned int)&unk_5C2F25,
      v14,
      a5,
      a6);
  }
  *a4 = 0;
  *a3 = 0;
  if ( !v8 )
  {
    sub_2D89B0(this, (__int64)a2, a7);
    v12 = v11 >> 32;
    if ( (_DWORD)v11 != HIDWORD(v11) && HIDWORD(v11) != -1 )
    {
      v13 = v11;
      if ( SHIDWORD(v11) <= (int)v11 )
        v13 = HIDWORD(v11);
      if ( SHIDWORD(v11) < (int)v11 )
        LODWORD(v12) = v11;
      *a3 = v13;
      *a4 = v12;
    }
  }
  result = debug;
  if ( (debug & 0x80000) != 0 )
  {
    result = (__int64)"6";
    if ( ::a6[0] < 0 )
      return sub_4F7CB0(
               128,
               (unsigned int)"%s IDAMemoAccessible::selection() => startOffset=%d, endOffset=%d\n",
               (unsigned int)&unk_5C2F25,
               *a3,
               *a4,
               a6);
  }
  return result;
}
