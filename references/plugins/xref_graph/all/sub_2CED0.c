void __fastcall sub_2CED0(QT::QWidget *a1)
{
  *(_QWORD *)a1 = &off_4D980;
  *((_QWORD *)a1 + 2) = layout_config_t___vtable_at__16;
  QT::QWidget::~QWidget(a1);
  operator delete(a1, 0x28u);
}
