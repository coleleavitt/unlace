void __fastcall diff_fringe_t__::vfunc_3(QT::QWidget *this, const char *a2)
{
  QT::QObject *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  v3 = (QT::QWidget *)((char *)this + 104);
  *((_QWORD *)v3 - 13) = &diff_fringe_t___vtable;
  *((_QWORD *)v3 - 11) = diff_fringe_t___vtable_at__16;
  *((_QWORD *)v3 - 8) = diff_fringe_t___vtable_at__40;
  *(_QWORD *)v3 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(v3);
  v4 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 5) = &stylable_widget_mixin_t___vtable;
  if ( v4 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v4, a2);
  }
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    *((_QWORD *)this + 7) = 0;
    qfree(v5, a2);
  }
  QT::QWidget::~QWidget(this);
}
