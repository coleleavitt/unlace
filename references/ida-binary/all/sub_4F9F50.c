__int64 __fastcall sub_4F9F50(__int64 a1, const QT::QObject *a2, int a3, int a4, bool *a5)
{
  QT::QTabWidget *v8; // rax
  QT::QTabWidget *v9; // rbx

  v8 = (QT::QTabWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QTabWidget::staticMetaObject, a2);
  if ( !v8 )
    return 0;
  if ( a3 < 0 )
    return 0;
  v9 = v8;
  if ( a3 >= (int)QT::QTabWidget::count(v8) )
    return 0;
  if ( a4 == 1 )
  {
    QT::QTabWidget::setTabVisible(v9, a3, *a5);
    return 1;
  }
  else
  {
    if ( a4 == 2 )
      QT::QTabWidget::setTabEnabled(v9, a3, *a5);
    return 1;
  }
}
