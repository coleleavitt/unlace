void __fastcall quick_filter_widget_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  void (__fastcall ***v8)(void *); // rbp
  void (__fastcall *v9)(void *); // rax

  v3 = a1[20];
  *(a1 - 2) = &quick_filter_widget_t___vtable;
  *a1 = quick_filter_widget_t___vtable_at__16;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 8))-- == 1 )
    {
      v8 = (void (__fastcall ***)(void *))a1[20];
      v9 = **v8;
      if ( v9 != refcnted_regex_t__::vfunc_0 )
        goto LABEL_14;
      if ( !v8 )
        goto LABEL_3;
      v9 = (*v8)[2];
      if ( (char *)v9 == (char *)refcnted_regex_t__::vfunc_2 )
      {
        *v8 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
        qregfree(v8 + 2);
        a2 = (const char *)&dword_30;
        operator delete(v8, 0x30u);
      }
      else
      {
LABEL_14:
        v9((void *)a1[20]);
      }
    }
  }
LABEL_3:
  v5 = a1[16];
  if ( v5 )
  {
    a1[17] = 0;
    qfree(v5, a2);
  }
  v6 = a1[12];
  if ( v6 )
  {
    a1[13] = 0;
    qfree(v6, a2);
  }
  a1[7] = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 7));
  v7 = a1[3];
  if ( v7 )
  {
    a1[4] = 0;
    qfree(v7, a2);
  }
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
}
