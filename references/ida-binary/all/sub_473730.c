void __fastcall xref_filters_section_t__::vfunc_3(QT::QWidget *this)
{
  volatile signed __int32 *v1; // rax
  volatile signed __int32 *v2; // rax

  *(_QWORD *)this = &xref_filters_section_t___vtable;
  *((_QWORD *)this + 2) = xref_filters_section_t___vtable_at__16;
  v1 = *((volatile signed __int32 **)this + 18);
  if ( v1 && !_InterlockedSub(v1, 1u) )
    free(*((void **)this + 18));
  *((_QWORD *)this + 2) = CollapsibleWidget___vtable_at__16;
  v2 = *((volatile signed __int32 **)this + 13);
  *(_QWORD *)this = &CollapsibleWidget___vtable;
  if ( v2 && !_InterlockedSub(v2, 1u) )
  {
    free(*((void **)this + 13));
    QT::QWidget::~QWidget(this);
  }
  else
  {
    QT::QWidget::~QWidget(this);
  }
}
