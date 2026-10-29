__int64 __fastcall sub_53BA70(QT::QWidget *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = QT::QWidget::style(this);
  (*(void (__fastcall **)(__int64, QT::QWidget *))(*(_QWORD *)v1 + 104LL))(v1, this);
  v2 = QT::QWidget::style(this);
  (*(void (__fastcall **)(__int64, QT::QWidget *))(*(_QWORD *)v2 + 96LL))(v2, this);
  return QT::QWidget::update(this);
}
