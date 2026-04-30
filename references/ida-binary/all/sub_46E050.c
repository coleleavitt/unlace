void __fastcall sub_46E050(_QWORD *a1)
{
  *(a1 - 2) = &PluginForm___vtable;
  *a1 = PluginForm___vtable_at__16;
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
  operator delete(a1 - 2, 0x28u);
}
