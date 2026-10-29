void __fastcall sub_462D10(__int64 a1)
{
  QT::QWidget *v1; // rbx
  volatile signed __int32 *v2; // rax

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)(a1 - 16) = &CollapsibleWidget___vtable;
  *(_QWORD *)a1 = CollapsibleWidget___vtable_at__16;
  v2 = *(volatile signed __int32 **)(a1 + 88);
  if ( v2 && !_InterlockedSub(v2, 1u) )
    free(*(void **)(a1 + 88));
  QT::QWidget::~QWidget(v1);
  operator delete(v1, 0x88u);
}
