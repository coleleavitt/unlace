void __fastcall sub_548B10(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)v1 = &color_selector_t___vtable;
  *((_QWORD *)v1 + 2) = color_selector_t___vtable_at__16;
  QT::QWidget::~QWidget(v1);
}
