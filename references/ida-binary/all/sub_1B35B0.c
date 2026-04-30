void __fastcall sub_1B35B0(_QWORD *a1, const char *a2)
{
  QT::QWidget *v2; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = (QT::QWidget *)(a1 - 2);
  *(a1 - 2) = &GraphMiniView___vtable;
  a1[3] = GraphMiniView___vtable_at__40;
  *a1 = GraphMiniView___vtable_at__16;
  sub_2A6D90(a1 - 2);
  v4 = a1[7];
  a1[3] = &stylable_widget_mixin_t___vtable;
  if ( v4 )
  {
    a1[8] = 0;
    qfree(v4, a2);
  }
  v5 = a1[4];
  if ( v5 )
  {
    a1[5] = 0;
    qfree(v5, a2);
  }
  QT::QWidget::~QWidget(v2);
}
