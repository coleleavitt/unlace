__int64 __fastcall sub_4F8120(QT::QAccessibleWidget *a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx

  v1 = QT::QAccessibleWidget::widget(a1);
  v2 = sub_512780(v1);
  if ( (debug & 0x80000) != 0 )
    sub_4F7CB0(
      (QT::QTime *)&qword_20,
      (__int64)"%s logAccessible::characterCount() => %d\n",
      (const char *)&unk_5C2F25,
      v2);
  return v2;
}
