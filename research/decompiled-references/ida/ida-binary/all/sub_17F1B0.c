_QWORD *sub_17F1B0()
{
  _QWORD *result; // rax
  __int64 module_data; // rax

  if ( unk_8CD7F0 )
  {
    module_data = get_module_data();
    if ( module_data )
      return (_QWORD *)(module_data + 16);
  }
  result = QT::QCoreApplication::self;
  if ( QT::QCoreApplication::self )
    return QT::QCoreApplication::self + 132;
  return result;
}
