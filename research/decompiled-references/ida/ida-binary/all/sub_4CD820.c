__int64 __fastcall IDADockWidget__::vfunc_6(QT::QObject *a1, QT::QObject *this, QT::QEvent *a3)
{
  int v5; // eax

  if ( this == (QT::QObject *)sub_4CD420(a1, 1u) )
  {
    v5 = *((unsigned __int16 *)a3 + 4);
    if ( v5 == 34 )
    {
      QT::QObject::removeEventFilter(this, a1);
      (*(void (__fastcall **)(QT::QObject *, QT::QObject *, __int64))(*(_QWORD *)a1 + 440LL))(a1, this, 2);
      QT::QObject::installEventFilter(this, a1);
    }
    else if ( v5 == 33 )
    {
      (*(void (__fastcall **)(QT::QObject *, QT::QObject *, __int64))(*(_QWORD *)a1 + 440LL))(a1, this, 1);
    }
  }
  return QT::QObject::eventFilter(a1, this, a3);
}
