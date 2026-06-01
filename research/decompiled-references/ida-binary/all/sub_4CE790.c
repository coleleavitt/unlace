__int64 __fastcall sub_4CE790(QT::QWidget *a1, bool a2)
{
  __int64 result; // rax

  QT::QWidget::setVisible(a1, a2);
  result = sub_4CE740((__int64)a1);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 504LL))(result);
  return result;
}
