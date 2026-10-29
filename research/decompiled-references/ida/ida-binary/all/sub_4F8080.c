__int64 __fastcall sub_4F8080(QT::QAccessibleWidget *a1)
{
  __int64 v1; // rax
  unsigned int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v3 = -1;
  v1 = QT::QAccessibleWidget::widget(a1);
  sub_514A60(v1, 0, 0, &v3);
  if ( (debug & 0x80000) != 0 )
    sub_4F7CB0(
      (QT::QTime *)&qword_20,
      (__int64)"%s logAccessible::cursorPosition() => %d\n",
      (const char *)&unk_5C2F25,
      v3);
  return v3;
}
