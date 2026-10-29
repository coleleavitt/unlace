_QWORD *__fastcall sub_310F80(unsigned __int8 a1)
{
  _QWORD *result; // rax

  result = QT::QCoreApplication::self;
  if ( QT::QCoreApplication::self )
    return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*QT::QCoreApplication::self + 360LL))(
                       QT::QCoreApplication::self,
                       a1);
  return result;
}
