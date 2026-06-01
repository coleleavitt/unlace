void __fastcall filtered_widget_update_model_event_t__::vfunc_1(QT::QEvent *this, const char *a2)
{
  _QWORD *v3; // r12
  void (__fastcall *v4)(char *, const char *); // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 i; // rbx
  __int64 v9; // rdi

  v3 = *((_QWORD **)this + 2);
  *(_QWORD *)this = filtered_widget_update_model_event_t___vtable;
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(char *, const char *))(*v3 + 8LL);
    if ( v4 == filtered_widget_mixin_update_strategy_t__::vfunc_1 )
    {
      v5 = v3[4];
      *v3 = &filtered_widget_mixin_update_strategy_t___vtable;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = v3[1];
      if ( v6 )
      {
        v7 = v3[2];
        if ( v7 )
        {
          for ( i = 0; i != v7; ++i )
          {
            v9 = *(_QWORD *)(v6 + 32 * i);
            if ( v9 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
              v6 = v3[1];
            }
          }
        }
        v3[2] = 0;
        qfree(v6, a2);
      }
      operator delete(v3, 0x48u);
    }
    else
    {
      ((void (__fastcall *)(_QWORD *))v4)(v3);
    }
  }
  *((_QWORD *)this + 2) = 0;
  QT::QEvent::~QEvent(this);
  operator delete(this, 0x20u);
}
