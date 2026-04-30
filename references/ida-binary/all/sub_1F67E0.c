__int64 __fastcall sub_1F67E0(QT::QWidget *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi

  v2 = QT::QWidget::style(this);
  (*(void (__fastcall **)(__int64, QT::QWidget *))(*(_QWORD *)v2 + 104LL))(v2, this);
  v3 = QT::QWidget::style(this);
  (*(void (__fastcall **)(__int64, QT::QWidget *))(*(_QWORD *)v3 + 96LL))(v3, this);
  result = QT::QWidget::update(this);
  v5 = *((_QWORD *)this + 111);
  if ( v5 )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 152LL))(v5, 0, 0);
  v6 = *((_QWORD *)this + 112);
  if ( v6 )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 152LL))(v6, 0, 0);
  v7 = *((_QWORD *)this + 113);
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 152LL))(v7, 0, 0);
  return result;
}
