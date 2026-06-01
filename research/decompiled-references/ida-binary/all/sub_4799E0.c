_QWORD *__fastcall sub_4799E0(_BYTE *a1)
{
  _QWORD *result; // rax

  if ( *a1 )
  {
    result = QT::QCoreApplication::self;
    if ( QT::QCoreApplication::self )
      --*((_DWORD *)QT::QCoreApplication::self + 25);
  }
  return result;
}
