void __fastcall sub_3415A0(QT::QWidget *this, char a2)
{
  QT::QObject *v2; // rbp
  QT::QCoreApplication *v3; // rdi
  int v4; // ecx

  if ( a2 || *((_BYTE *)this + 256) || *((_BYTE *)this + 400) )
  {
    sub_341530(this, *((_QWORD *)this + 21));
    if ( *((_QWORD *)this + 13) )
    {
      v2 = (QT::QObject *)operator new(0x10u);
      QT::QEvent::QEvent(v2, 3003);
      v3 = *((QT::QCoreApplication **)this + 13);
      *(_QWORD *)v2 = &IUpdateLegendEvent___vtable;
      QT::QCoreApplication::postEvent(v3, v2, nullptr, v4);
    }
  }
}
