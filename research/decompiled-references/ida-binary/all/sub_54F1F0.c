void __fastcall sub_54F1F0(__int64 a1, const char *a2)
{
  QT::QWidget *v2; // rbp
  volatile signed __int32 *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)(a1 - 16) = &text_area_margin_widget_t___vtable;
  *(_QWORD *)a1 = &unk_89DF40;
  *(_QWORD *)(a1 + 24) = algn_89DF90;
  v4 = *(volatile signed __int32 **)(a1 + 88);
  if ( v4 && !_InterlockedSub(v4, 1u) )
    free(*(void **)(a1 + 88));
  v5 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 24) = &stylable_widget_mixin_t___vtable;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 64) = 0;
    qfree(v5, a2);
  }
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v6, a2);
  }
  QT::QWidget::~QWidget(v2);
  operator delete(v2, 0x90u);
}
