void __fastcall sub_463F60(_QWORD *a1, const char *a2)
{
  QT::QWidget *v2; // rbp
  QT::QObject *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = (QT::QWidget *)(a1 - 2);
  v4 = (QT::QObject *)(a1 + 11);
  *((_QWORD *)v4 - 13) = &diff_fringe_t___vtable;
  *((_QWORD *)v4 - 11) = diff_fringe_t___vtable_at__16;
  *((_QWORD *)v4 - 8) = diff_fringe_t___vtable_at__40;
  *(_QWORD *)v4 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(v4);
  v5 = a1[7];
  a1[3] = &stylable_widget_mixin_t___vtable;
  if ( v5 )
  {
    a1[8] = 0;
    qfree(v5, a2);
  }
  v6 = a1[4];
  if ( v6 )
  {
    a1[5] = 0;
    qfree(v6, a2);
  }
  QT::QWidget::~QWidget(v2);
  operator delete(v2, 0x90u);
}
