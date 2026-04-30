unsigned __int64 __fastcall sub_2D8D70(
        QT::QAccessibleWidget *this,
        const char *a2,
        double a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  int v14; // ecx
  _QWORD v15[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v7 = (unsigned int)a2;
  if ( (debug & 0x80000) != 0 && (::a6[0] & 0x20) != 0 )
  {
    v14 = (int)a2;
    a2 = "%s IDAMemoAccessible::setCursorPosition(position=%d)\n";
    sub_4F7CB0(
      32,
      (unsigned int)"%s IDAMemoAccessible::setCursorPosition(position=%d)\n",
      (unsigned int)&unk_5C2F25,
      v14,
      a6,
      a7);
  }
  v8 = sub_2D89B0(this, (__int64)a2, a3);
  v15[1] = v9;
  v15[0] = v8;
  sub_2D8310((__int64)v15, (const char *)v7, 0, v10, v11, v12, a3);
  return v16 - __readfsqword(0x28u);
}
