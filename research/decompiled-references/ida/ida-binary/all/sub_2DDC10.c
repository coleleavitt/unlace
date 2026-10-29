void __fastcall sub_2DDC10(_QWORD *a1, const char *a2)
{
  QT::QWidget *v2; // rbp
  __int64 v4; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  void (__fastcall ***v9)(void *); // r12
  void (__fastcall *v10)(void *); // rax

  v2 = (QT::QWidget *)(a1 - 2);
  *(a1 - 2) = &quick_filter_widget_t___vtable;
  v4 = a1[20];
  *a1 = quick_filter_widget_t___vtable_at__16;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
    {
      v9 = (void (__fastcall ***)(void *))a1[20];
      v10 = **v9;
      if ( v10 != refcnted_regex_t__::vfunc_0 )
        goto LABEL_14;
      if ( !v9 )
        goto LABEL_3;
      v10 = (*v9)[2];
      if ( (char *)v10 == (char *)refcnted_regex_t__::vfunc_2 )
      {
        *v9 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
        qregfree(v9 + 2);
        a2 = (const char *)&dword_30;
        operator delete(v9, 0x30u);
      }
      else
      {
LABEL_14:
        v10((void *)a1[20]);
      }
    }
  }
LABEL_3:
  v6 = a1[16];
  if ( v6 )
  {
    a1[17] = 0;
    qfree(v6, a2);
  }
  v7 = a1[12];
  if ( v7 )
  {
    a1[13] = 0;
    qfree(v7, a2);
  }
  a1[7] = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 7));
  v8 = a1[3];
  if ( v8 )
  {
    a1[4] = 0;
    qfree(v8, a2);
  }
  QT::QWidget::~QWidget(v2);
  operator delete(v2, 0xB8u);
}
