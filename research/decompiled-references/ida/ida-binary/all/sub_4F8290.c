unsigned __int64 __fastcall sub_4F8290(QT::QAccessibleEvent *a1)
{
  QT::QAccessibleEvent *v2; // rsi
  char *v3; // [rsp+0h] [rbp-68h] BYREF
  int v4; // [rsp+8h] [rbp-60h]
  QT::QAccessibleEvent *v5; // [rsp+10h] [rbp-58h]
  __int64 v6; // [rsp+18h] [rbp-50h]
  _QWORD v7[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 (__fastcall **v8)(); // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( (unsigned __int8)QT::QAccessible::isActive(a1) )
  {
    v2 = a1;
    sub_4F7BB0(v7, (__int64)a1);
    v5 = a1;
    v4 = 283;
    v3 = (char *)&`vtable for'QT::QAccessibleTextCursorEvent + 16;
    v6 = 0x1FFFFFFFFLL;
    if ( (debug & 0x80000) != 0 )
    {
      v2 = (QT::QAccessibleEvent *)"%s::notify_cursor_update() => %d\n";
      sub_4F7CB0((QT::QTime *)&qword_20, (__int64)"%s::notify_cursor_update() => %d\n", (const char *)&unk_5C2F25, 1);
    }
    QT::QAccessible::updateAccessibility((QT::QAccessible *)&v3, v2);
    QT::QAccessibleTextCursorEvent::~QAccessibleTextCursorEvent((QT::QAccessibleTextCursorEvent *)&v3);
    v7[0] = logAccessible___vtable;
    v7[2] = logAccessible___vtable_at__16;
    v8 = logAccessible___vtable_at__32;
    QT::QAccessibleTextInterface::~QAccessibleTextInterface((QT::QAccessibleTextInterface *)&v8);
    QT::QAccessibleWidget::~QAccessibleWidget((QT::QAccessibleWidget *)v7);
  }
  return v9 - __readfsqword(0x28u);
}
