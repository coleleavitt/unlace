__int64 __fastcall form_actions_impl_t__::vfunc_11(__int64 a1, unsigned int a2, bool a3)
{
  QT::QWidget *v4; // rdi
  __int64 result; // rax

  v4 = (QT::QWidget *)sub_4F9F10(*(_QWORD *)(a1 + 8), a2);
  result = 0;
  if ( v4 )
  {
    QT::QWidget::setEnabled(v4, a3);
    return 1;
  }
  return result;
}
