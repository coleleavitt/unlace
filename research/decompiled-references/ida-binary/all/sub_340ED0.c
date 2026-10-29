__int64 __fastcall sub_340ED0(QT::QWidget *this, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, char a6)
{
  bool v7; // zf
  QT::QObject *v8; // rbp
  QT::QCoreApplication *v9; // rdi
  int v10; // ecx

  if ( a2 )
    *a2 = *((_QWORD *)this + 52);
  if ( a3 )
    *a3 = *((_QWORD *)this + 53);
  v7 = *((_QWORD *)this + 13) == 0;
  *((_QWORD *)this + 52) = a4;
  *((_QWORD *)this + 53) = a5;
  *((_BYTE *)this + 432) = a6;
  if ( !v7 )
  {
    v8 = (QT::QObject *)operator new(0x10u);
    QT::QEvent::QEvent(v8, 3003);
    v9 = *((QT::QCoreApplication **)this + 13);
    *(_QWORD *)v8 = &IUpdateLegendEvent___vtable;
    QT::QCoreApplication::postEvent(v9, v8, nullptr, v10);
  }
  sub_33FB30(this);
  return QT::QWidget::update(this);
}
