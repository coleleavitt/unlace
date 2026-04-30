__int64 __fastcall IDADockWidget__::vfunc_5(QT::QWidget *this, QT::QEvent *a2)
{
  const QT::QObject *v3; // r12
  QT::QCoreApplication *v4; // rax

  if ( *((_WORD *)a2 + 4) == 34 )
  {
    if ( sub_4CD420(this, 0) )
    {
      v3 = *(const QT::QObject **)(*((_QWORD *)this + 1) + 16LL);
      if ( v3 )
      {
        while ( 1 )
        {
          v4 = (QT::QCoreApplication *)QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v3);
          if ( v4 )
            break;
          v3 = *(const QT::QObject **)(*((_QWORD *)v3 + 1) + 16LL);
          if ( !v3 )
            return QT::QWidget::event(this, a2);
        }
        sub_4C6D70(v4);
      }
    }
  }
  return QT::QWidget::event(this, a2);
}
