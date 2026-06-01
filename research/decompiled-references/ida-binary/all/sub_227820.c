__int64 sub_227820()
{
  __int64 result; // rax
  QT::QWidget *v1; // rbx

  result = getinf_flag(45, 16);
  if ( !(_BYTE)result )
  {
    if ( !byte_8CC5E3
      || (v1 = (QT::QWidget *)(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 48LL))(QT::QCoreApplication::self + 2)) == nullptr )
    {
      v1 = qword_8CD748;
    }
    QT::QWidget::activateWindow(v1);
    return QT::QWidget::raise(v1);
  }
  return result;
}
