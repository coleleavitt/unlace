void __fastcall ida_quick_filter_widget_t__::vfunc_3(QT::QWidget *this, const char *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  void (__fastcall ***v8)(void *); // rbp
  void (__fastcall *v9)(void *); // rdx
  void (__fastcall *v10)(void *); // rax

  *(_QWORD *)this = &quick_filter_widget_t___vtable;
  v3 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 2) = quick_filter_widget_t___vtable_at__16;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 8))-- == 1 )
    {
      v8 = *((void (__fastcall ****)(void *))this + 22);
      v9 = **v8;
      if ( v9 == refcnted_regex_t__::vfunc_0 )
      {
        if ( v8 )
        {
          v10 = (*v8)[2];
          if ( (char *)v10 == (char *)refcnted_regex_t__::vfunc_2 )
          {
            *v8 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
            qregfree(v8 + 2);
            a2 = (const char *)&dword_30;
            operator delete(v8, 0x30u);
          }
          else
          {
            v10(*((void **)this + 22));
          }
        }
      }
      else
      {
        v9(*((void **)this + 22));
      }
    }
  }
  v5 = *((_QWORD *)this + 18);
  if ( v5 )
  {
    *((_QWORD *)this + 19) = 0;
    qfree(v5, a2);
  }
  v6 = *((_QWORD *)this + 14);
  if ( v6 )
  {
    *((_QWORD *)this + 15) = 0;
    qfree(v6, a2);
  }
  *((_QWORD *)this + 9) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QWidget *)((char *)this + 72));
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    *((_QWORD *)this + 6) = 0;
    qfree(v7, a2);
  }
  QT::QWidget::~QWidget(this);
}
