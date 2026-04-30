void __fastcall sub_4738E0(__int64 a1)
{
  QT::QWidget *v1; // rbp
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rax

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)(a1 - 16) = &xref_filters_section_t___vtable;
  *(_QWORD *)a1 = xref_filters_section_t___vtable_at__16;
  v2 = *(volatile signed __int32 **)(a1 + 128);
  if ( v2 && !_InterlockedSub(v2, 1u) )
    free(*(void **)(a1 + 128));
  *(_QWORD *)a1 = CollapsibleWidget___vtable_at__16;
  v3 = *(volatile signed __int32 **)(a1 + 88);
  *(_QWORD *)(a1 - 16) = &CollapsibleWidget___vtable;
  if ( v3 && !_InterlockedSub(v3, 1u) )
    free(*(void **)(a1 + 88));
  QT::QWidget::~QWidget(v1);
  operator delete(v1, 0xA8u);
}
