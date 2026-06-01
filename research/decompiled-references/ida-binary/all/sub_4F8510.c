QT::QString *__fastcall sub_4F8510(
        QT::QString *a1,
        QT::QAccessibleWidget *this,
        unsigned int a3,
        unsigned int a4,
        int *a5,
        int *a6)
{
  QT::QAccessibleWidget *v6; // r10
  const char *v11; // r8
  __int64 v12; // rax
  int v14; // r14d
  int v15; // r12d
  const char *v16; // rcx
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  const char *v18; // [rsp+18h] [rbp-50h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v6 = this;
  v19 = __readfsqword(0x28u);
  if ( (debug & 0x80000) != 0 )
  {
    v11 = "?";
    if ( (unsigned __int64)(int)a4 <= 5 )
      v11 = off_86D5A0[a4];
    sub_4F7CB0(
      (QT::QTime *)&word_10,
      (__int64)"%s logAccessible::textAfterOffset(offset=%d, boundaryType=%s)\n",
      (const char *)&unk_5C2F25,
      a3,
      v11);
    v6 = this;
  }
  v12 = QT::QAccessibleWidget::widget(v6);
  sub_512600(a1, v12, a3, a4, a5, a6);
  if ( (debug & 0x80000) != 0 )
  {
    v14 = *a6;
    v15 = *a5;
    QT::QString::toUtf8_helper((QT::QString *)&ptr, a1);
    v16 = v18;
    if ( !v18 )
      v16 = (const char *)&QT::QByteArray::_empty;
    sub_4F7CB0(
      (QT::QTime *)&word_10,
      (__int64)"%s logAccessible::textAtOffset() => text=%s, startOffset=%d, endOffset=%d\n",
      (const char *)&unk_5C2F25,
      v16,
      v15,
      v14);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
  }
  return a1;
}
