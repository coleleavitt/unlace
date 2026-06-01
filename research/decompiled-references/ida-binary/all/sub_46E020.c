void __fastcall PluginForm__::vfunc_4(QT::QWidget *a1)
{
  *(_QWORD *)a1 = &PluginForm___vtable;
  *((_QWORD *)a1 + 2) = PluginForm___vtable_at__16;
  QT::QWidget::~QWidget(a1);
  operator delete(a1, 0x28u);
}
