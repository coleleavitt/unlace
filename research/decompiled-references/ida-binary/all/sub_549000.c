void __fastcall sub_549000(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)v1 = &PlaceHolderWidget___vtable;
  *((_QWORD *)v1 + 2) = PlaceHolderWidget___vtable_at__16;
  QT::QWidget::~QWidget(v1);
}
