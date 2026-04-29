void __fastcall sub_2CC50(QT::QWidget *a1)
{
  *(_QWORD *)a1 = &off_4DDA0;
  *((_QWORD *)a1 + 2) = checkbox_filter_t___vtable_at__16;
  QT::QWidget::~QWidget(a1);
  operator delete(a1, 0x88u);
}
