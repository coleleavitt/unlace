unsigned __int64 __fastcall sub_2D9550(QT::QAccessibleEvent *a1, double a2)
{
  QT::QAccessibleEvent *v3; // rsi
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  char *v10; // [rsp+0h] [rbp-68h] BYREF
  int v11; // [rsp+8h] [rbp-60h]
  QT::QAccessibleEvent *v12; // [rsp+10h] [rbp-58h]
  int v13; // [rsp+18h] [rbp-50h]
  int v14; // [rsp+1Ch] [rbp-4Ch]
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 (__fastcall **v16)(); // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( (unsigned __int8)QT::QAccessible::isActive(a1) )
  {
    v3 = a1;
    sub_2D9460(v15, (__int64)a1);
    sub_2D89B0((QT::QAccessibleWidget *)v15, (__int64)a1, a2);
    v12 = a1;
    v13 = -1;
    v14 = v4;
    v10 = (char *)&`vtable for'QT::QAccessibleTextCursorEvent + 16;
    v11 = 283;
    if ( (debug & 0x80000) != 0 && (a6[0] & 0x20) != 0 )
    {
      v3 = (QT::QAccessibleEvent *)"%s::notify_cursor_update() => %d\n";
      sub_4F7CB0(32, (unsigned int)"%s::notify_cursor_update() => %d\n", (unsigned int)&unk_5C2F25, v4, v5, v6);
    }
    QT::QAccessible::updateAccessibility((QT::QAccessible *)&v10, v3);
    QT::QAccessibleTextCursorEvent::~QAccessibleTextCursorEvent((QT::QAccessibleTextCursorEvent *)&v10);
    v15[0] = &IDAMemoAccessible___vtable;
    v15[2] = IDAMemoAccessible___vtable_at__16;
    v16 = IDAMemoAccessible___vtable_at__32;
    if ( (debug & 0x80000) != 0 && (a6[0] & 8) != 0 )
      sub_4F7CB0(8, (unsigned int)"%s IDAMemoAccessible::~IDAMemoAccessible()\n", (unsigned int)&unk_5C2F25, v7, v8, v9);
    QT::QAccessibleTextInterface::~QAccessibleTextInterface((QT::QAccessibleTextInterface *)&v16);
    QT::QAccessibleWidget::~QAccessibleWidget((QT::QAccessibleWidget *)v15);
  }
  return v17 - __readfsqword(0x28u);
}
