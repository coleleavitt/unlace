void __fastcall sub_462BC0(__int64 a1)
{
  volatile signed __int32 *v1; // rax

  *(_QWORD *)(a1 - 16) = &CollapsibleWidget___vtable;
  *(_QWORD *)a1 = CollapsibleWidget___vtable_at__16;
  v1 = *(volatile signed __int32 **)(a1 + 88);
  if ( v1 && !_InterlockedSub(v1, 1u) )
  {
    free(*(void **)(a1 + 88));
    QT::QWidget::~QWidget((QT::QWidget *)(a1 - 16));
  }
  else
  {
    QT::QWidget::~QWidget((QT::QWidget *)(a1 - 16));
  }
}
