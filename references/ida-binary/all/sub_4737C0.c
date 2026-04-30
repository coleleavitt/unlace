void __fastcall sub_4737C0(__int64 a1)
{
  volatile signed __int32 *v1; // rax
  volatile signed __int32 *v2; // rax

  *(_QWORD *)(a1 - 16) = &xref_filters_section_t___vtable;
  *(_QWORD *)a1 = xref_filters_section_t___vtable_at__16;
  v1 = *(volatile signed __int32 **)(a1 + 128);
  if ( v1 && !_InterlockedSub(v1, 1u) )
    free(*(void **)(a1 + 128));
  *(_QWORD *)a1 = CollapsibleWidget___vtable_at__16;
  v2 = *(volatile signed __int32 **)(a1 + 88);
  *(_QWORD *)(a1 - 16) = &CollapsibleWidget___vtable;
  if ( v2 && !_InterlockedSub(v2, 1u) )
  {
    free(*(void **)(a1 + 88));
    QT::QWidget::~QWidget((QT::QWidget *)(a1 - 16));
  }
  else
  {
    QT::QWidget::~QWidget((QT::QWidget *)(a1 - 16));
  }
}
