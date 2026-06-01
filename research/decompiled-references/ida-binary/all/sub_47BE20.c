double __fastcall sub_47BE20(QT::QWidget *a1)
{
  QT::QWidget *v1; // rax
  QT::QWindow *v2; // rdi
  __int64 (*v3)(void); // rax
  QT::QWidget *v4; // rax
  QT::QWidget *v5; // rax
  double result; // xmm0_8

  v1 = (QT::QWidget *)QT::QWidget::window(a1);
  v2 = (QT::QWindow *)QT::QWidget::windowHandle(v1);
  if ( !v2 )
  {
    v3 = *(__int64 (**)(void))(*QT::QCoreApplication::self + 112LL);
    v4 = (QT::QWidget *)((char *)v3 == (char *)QT::QApplication::activeWindow
                       ? QT::QApplication::activeWindow((QT::QApplication *)QT::QCoreApplication::self)
                       : v3());
    if ( !v4 )
      return 1.0;
    v5 = (QT::QWidget *)QT::QWidget::window(v4);
    v2 = (QT::QWindow *)QT::QWidget::windowHandle(v5);
    if ( !v2 )
      return 1.0;
  }
  QT::QWindow::devicePixelRatio(v2);
  return result;
}
