const QT::QObject *sub_52F040()
{
  _QWORD *v0; // rbx
  const QT::QObject *result; // rax
  QT::QObject *v2; // rax

  v0 = QT::QCoreApplication::self;
  if ( !QT::QCoreApplication::self )
    return nullptr;
  result = (const QT::QObject *)(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 48LL))(QT::QCoreApplication::self + 2);
  if ( !result )
  {
    v2 = sub_479A70((__int64)(v0 + 21), -1, -1, 1);
    return sub_479220((__int64)(v0 + 2), v2);
  }
  return result;
}
