__int64 __fastcall sub_4FA070(__int64 a1, _BYTE *a2, const QT::QObject *a3, int a4, int a5)
{
  QT::QTabWidget *v7; // rax
  QT::QTabWidget *v8; // rbx

  v7 = (QT::QTabWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QTabWidget::staticMetaObject, a3);
  if ( !v7 )
    return 0;
  if ( a4 < 0 )
    return 0;
  v8 = v7;
  if ( a4 >= (int)QT::QTabWidget::count(v7) )
    return 0;
  if ( a5 == 1 )
  {
    *a2 = QT::QTabWidget::isTabVisible(v8, a4);
    return 1;
  }
  else
  {
    if ( a5 == 2 )
      *a2 = QT::QTabWidget::isTabEnabled(v8, a4);
    return 1;
  }
}
