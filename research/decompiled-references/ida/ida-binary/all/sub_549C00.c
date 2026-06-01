void __fastcall sub_549C00(__int64 a1, QT::QWidget *a2)
{
  void (__fastcall *v2)(QT::QWidget *); // rax

  v2 = *(void (__fastcall **)(QT::QWidget *))(*(_QWORD *)a2 + 24LL);
  if ( v2 == DockArrowArea__::vfunc_3 )
  {
    *((_QWORD *)a2 + 5) = 0;
    *(_QWORD *)a2 = &DockArrowArea___vtable;
    *((_QWORD *)a2 + 2) = DockArrowArea___vtable_at__16;
    QT::QImage::~QImage((QT::QWidget *)((char *)a2 + 48));
    QT::QWidget::~QWidget(a2);
  }
  else
  {
    v2(a2);
  }
}
