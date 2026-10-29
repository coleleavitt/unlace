__int64 __fastcall sub_4C6D70(QT::QCoreApplication *this)
{
  __int64 result; // rax
  QT::QObject *v2; // rbp
  int v3; // ecx

  result = *((_QWORD *)this + 5);
  if ( *(_BYTE *)(result + 81) )
  {
    v2 = (QT::QObject *)operator new(0x10u);
    QT::QEvent::QEvent(v2, 2007);
    QT::QCoreApplication::postEvent(this, v2, nullptr, v3);
    result = *((_QWORD *)this + 5);
    *(_BYTE *)(result + 81) = 0;
  }
  return result;
}
