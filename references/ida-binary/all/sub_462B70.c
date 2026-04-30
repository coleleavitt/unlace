void __fastcall CollapsibleWidget__::vfunc_3(QT::QWidget *this)
{
  volatile signed __int32 *v1; // rax

  *(_QWORD *)this = &CollapsibleWidget___vtable;
  *((_QWORD *)this + 2) = CollapsibleWidget___vtable_at__16;
  v1 = *((volatile signed __int32 **)this + 13);
  if ( v1 && !_InterlockedSub(v1, 1u) )
  {
    free(*((void **)this + 13));
    QT::QWidget::~QWidget(this);
  }
  else
  {
    QT::QWidget::~QWidget(this);
  }
}
