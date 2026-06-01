_QWORD *sub_17F140()
{
  _QWORD *result; // rax

  result = QT::QCoreApplication::self;
  if ( QT::QCoreApplication::self )
    return QT::QCoreApplication::self + 132;
  return result;
}
