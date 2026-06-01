void __fastcall GraphPrintPreviewWidget__::vfunc_1(__int64 a1)
{
  QT::QWidget *v1; // rbx
  QT::QImage *v2; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  v2 = (QT::QImage *)(a1 + 24);
  *((_QWORD *)v2 - 5) = &off_8719A8;
  *((_QWORD *)v2 - 3) = GraphPrintPreviewWidget___vtable_at__16;
  QT::QImage::~QImage(v2);
  QT::QWidget::~QWidget(v1);
  operator delete(v1, 0x48u);
}
