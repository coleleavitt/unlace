void __fastcall sub_46B770(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)v1 = &ConsoleWidget___vtable;
  *((_QWORD *)v1 + 2) = ConsoleWidget___vtable_at__16;
  QT::QWidget::~QWidget(v1);
}
