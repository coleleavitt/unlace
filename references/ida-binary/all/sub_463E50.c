void __fastcall sub_463E50(_QWORD *a1, const char *a2)
{
  QT::QObject *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  v3 = (QT::QObject *)(a1 + 8);
  *((_QWORD *)v3 - 13) = &diff_fringe_t___vtable;
  *((_QWORD *)v3 - 11) = diff_fringe_t___vtable_at__16;
  *((_QWORD *)v3 - 8) = diff_fringe_t___vtable_at__40;
  *(_QWORD *)v3 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(v3);
  v4 = a1[4];
  *a1 = &stylable_widget_mixin_t___vtable;
  if ( v4 )
  {
    a1[5] = 0;
    qfree(v4, a2);
  }
  v5 = a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    qfree(v5, a2);
  }
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 5));
}
