void __fastcall sub_46E000(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)v1 = &PluginForm___vtable;
  *((_QWORD *)v1 + 2) = PluginForm___vtable_at__16;
  QT::QWidget::~QWidget(v1);
}
