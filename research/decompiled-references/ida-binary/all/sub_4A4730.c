__int64 __fastcall sub_4A4730(
        QT::QWidget *this,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  __int64 v10; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8

  v9 = QT::QWidget::style(this);
  (*(void (__fastcall **)(__int64, QT::QWidget *))(*(_QWORD *)v9 + 104LL))(v9, this);
  v10 = QT::QWidget::style(this);
  (*(void (__fastcall **)(__int64, QT::QWidget *))(*(_QWORD *)v10 + 96LL))(v10, this);
  if ( (*((_BYTE *)this + 1785) & 1) == 0 )
    sub_4A4600((__int64)this, nullptr, 7u, 0, a2, a3, a4, a5, v11, v12, a8, a9);
  return QT::QWidget::update(this);
}
