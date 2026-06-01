void __fastcall DockArrowArea__::vfunc_3(QT::QWidget *this)
{
  QT::QImage *v2; // rdi

  v2 = (QT::QWidget *)((char *)this + 48);
  *((_QWORD *)v2 - 6) = &DockArrowArea___vtable;
  *((_QWORD *)v2 - 4) = DockArrowArea___vtable_at__16;
  *((_QWORD *)v2 - 1) = 0;
  QT::QImage::~QImage(v2);
  QT::QWidget::~QWidget(this);
}
