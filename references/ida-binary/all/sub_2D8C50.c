unsigned __int64 __fastcall sub_2D8C50(
        QT::QAccessibleWidget *this,
        const char *a2,
        unsigned int a3,
        unsigned int a4,
        double a5)
{
  int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  int v17; // ecx
  _QWORD v18[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v6 = (int)a2;
  v19 = __readfsqword(0x28u);
  if ( (debug & 0x80000) != 0 && a6[0] < 0 )
  {
    v17 = (int)a2;
    a2 = "%s IDAMemoAccessible::setSelection(selectionIndex=%d, startOffset=%d, endOffset=%d)\n";
    sub_4F7CB0(
      128,
      (unsigned int)"%s IDAMemoAccessible::setSelection(selectionIndex=%d, startOffset=%d, endOffset=%d)\n",
      (unsigned int)&unk_5C2F25,
      v17,
      a3,
      a4);
  }
  if ( !v6 )
  {
    v8 = sub_2D89B0(this, (__int64)a2, a5);
    v18[1] = v9;
    v18[0] = v8;
    sub_2D8310((__int64)v18, (const char *)a3, 0, v10, v11, v12, a5);
    sub_2D8310((__int64)v18, (const char *)a4, 1, v13, v14, v15, a5);
  }
  return v19 - __readfsqword(0x28u);
}
