void __fastcall navigator_t__::vfunc_3(QT::QWidget *this, const char *a2)
{
  QT::QPixmap *v3; // rdi
  __int64 v4; // rdi

  v3 = (QT::QWidget *)((char *)this + 664);
  *((_QWORD *)v3 - 83) = &navigator_t___vtable;
  *((_QWORD *)v3 - 81) = navigator_t___vtable_at__16;
  QT::QPixmap::~QPixmap(v3);
  *((_QWORD *)this + 12) = &HintProvider___vtable;
  if ( *((_DWORD *)this + 162) )
    QT::QBasicTimer::stop((QT::QWidget *)((char *)this + 648));
  QT::QObject::~QObject((QT::QWidget *)((char *)this + 96));
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    *((_QWORD *)this + 8) = 0;
    qfree(v4, a2);
  }
  QT::QWidget::~QWidget(this);
}
