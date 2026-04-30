__int64 __fastcall sub_18DAD0(QT::QWidget *this, __int64 a2, __int64 a3, __int64 a4)
{
  QT::QWidget *v5; // rbp
  QT::QVBoxLayout *v6; // rbp

  QT::QWidget::QWidget(this, a2, 0);
  *((_QWORD *)this + 6) = a4;
  *(_QWORD *)this = &TAddressDetailsSection___vtable;
  *((_QWORD *)this + 2) = TAddressDetailsSection___vtable_at__16;
  v5 = (QT::QWidget *)operator new(0x88u);
  sub_1DE2E0(v5);
  *((_QWORD *)this + 5) = v5;
  v6 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v6);
  QT::QLayout::setContentsMargins(v6, 0, 0, 0, 0);
  (*(void (__fastcall **)(QT::QVBoxLayout *, _QWORD))(*(_QWORD *)v6 + 104LL))(v6, 0);
  QT::QBoxLayout::addWidget(v6, *((_QWORD *)this + 5), 0, 0);
  return QT::QWidget::setLayout(this, v6);
}
