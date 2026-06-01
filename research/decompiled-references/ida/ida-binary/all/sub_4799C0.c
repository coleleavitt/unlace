_QWORD *__fastcall sub_4799C0(_BYTE *a1, char a2)
{
  _QWORD *result; // rax

  *a1 = a2;
  if ( a2 )
  {
    result = QT::QCoreApplication::self;
    if ( QT::QCoreApplication::self )
      ++*((_DWORD *)QT::QCoreApplication::self + 25);
  }
  return result;
}
