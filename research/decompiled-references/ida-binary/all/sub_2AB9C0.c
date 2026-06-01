void __fastcall sub_2AB9C0(QT::QWidget *this)
{
  QT::QImage *v2; // rdi

  v2 = (QT::QWidget *)((char *)this + 40);
  *((_QWORD *)v2 - 5) = &off_8719A8;
  *((_QWORD *)v2 - 3) = GraphPrintPreviewWidget___vtable_at__16;
  QT::QImage::~QImage(v2);
  QT::QWidget::~QWidget(this);
}
