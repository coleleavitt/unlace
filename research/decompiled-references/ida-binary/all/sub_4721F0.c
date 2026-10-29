void __fastcall sub_4721F0(__int64 a1, const char *a2)
{
  volatile signed __int32 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi

  *(_QWORD *)(a1 - 40) = &text_area_margin_widget_t___vtable;
  *(_QWORD *)a1 = algn_89DF90;
  v3 = *(volatile signed __int32 **)(a1 + 64);
  *(_QWORD *)(a1 - 24) = &unk_89DF40;
  if ( v3 && !_InterlockedSub(v3, 1u) )
    free(*(void **)(a1 + 64));
  v4 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)a1 = &stylable_widget_mixin_t___vtable;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v4, a2);
  }
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v5, a2);
  }
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 40));
}
