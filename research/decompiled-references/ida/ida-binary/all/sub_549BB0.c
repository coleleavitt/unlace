void __fastcall sub_549BB0(__int64 a1)
{
  QT::QWidget *v1; // rbx
  QT::QImage *v2; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  v2 = (QT::QImage *)(a1 + 32);
  *((_QWORD *)v2 - 6) = &DockArrowArea___vtable;
  *((_QWORD *)v2 - 4) = DockArrowArea___vtable_at__16;
  *((_QWORD *)v2 - 1) = 0;
  QT::QImage::~QImage(v2);
  QT::QWidget::~QWidget(v1);
  operator delete(v1, 0xA0u);
}
