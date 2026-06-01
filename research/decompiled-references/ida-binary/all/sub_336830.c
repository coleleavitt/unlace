__int64 __fastcall sub_336830(QT::QObject **a1, QT::QAction *a2, const char *a3, QT::QObject *a4, double a5)
{
  QT::QObject *v6; // rbp
  QT::QAction *v7; // r12
  size_t v8; // rax
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( !a2 || !a3 )
  {
    if ( !under_debugger )
      interr(40439, a2, a3, a4, a5);
    BUG();
  }
  v6 = a4;
  if ( !a4 )
    v6 = *a1;
  v7 = sub_336670(v6, a2, 1, 1);
  v8 = strlen(a3);
  QT::QString::fromUtf8(ptr, v8, a3);
  QT::QAction::setText(v7, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return QT::QWidget::addAction(v6, v7);
}
