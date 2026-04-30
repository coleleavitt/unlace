void __fastcall hexview_t__::vfunc_3(QT::QAbstractScrollArea *this)
{
  const char *v1; // rsi
  __int64 v3; // rax
  void *v4; // rdi
  void (__fastcall *v5)(void *); // rax
  QT::QAbstractScrollArea **v6; // rdi
  QT::QAbstractScrollArea **v7; // rdx
  __int64 v8; // rbp
  void *v9; // rdi
  __int64 v10; // rbp
  void *v11; // rdi
  __int64 v12; // rdi

  v1 = nullptr;
  *(_QWORD *)this = &hexview_t___vtable;
  *((_QWORD *)this + 2) = hexview_t___vtable_at__16;
  *((_QWORD *)this + 5) = hexview_t___vtable_at__40;
  *((_QWORD *)this + 13) = hexview_t___vtable_at__104;
  v3 = sub_1EAF30(this, 0);
  if ( v3 )
  {
    v4 = (void *)v3;
    v5 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 168LL);
    if ( v5 == hv_hexplace_gen_t__::vfunc_21 )
    {
      v1 = (const char *)&qword_48;
      operator delete(v4, 0x48u);
    }
    else
    {
      v5(v4);
    }
  }
  if ( (QT::QAbstractScrollArea *)qword_8CCB60 == this )
    qword_8CCB60 = 0;
  v6 = (QT::QAbstractScrollArea **)qword_8CCBC0;
  v7 = (QT::QAbstractScrollArea **)(qword_8CCBC0 + 8 * xmmword_8CCBC8);
  if ( (QT::QAbstractScrollArea **)qword_8CCBC0 != v7 )
  {
    while ( this != *v6 )
    {
      if ( v7 == ++v6 )
        goto LABEL_12;
    }
    if ( v6 != v7 )
    {
      v1 = (const char *)(v6 + 1);
      memmove(v6, v6 + 1, (char *)v7 - (char *)v6 - 8);
      *(_QWORD *)&xmmword_8CCBC8 = xmmword_8CCBC8 - 1;
    }
  }
LABEL_12:
  v8 = *((_QWORD *)this + 144);
  while ( v8 )
  {
    sub_2C8DE0(*(_QWORD **)(v8 + 24));
    v9 = (void *)v8;
    v8 = *(_QWORD *)(v8 + 16);
    v1 = (const char *)&dword_30;
    operator delete(v9, 0x30u);
  }
  v10 = *((_QWORD *)this + 138);
  while ( v10 )
  {
    sub_2C8DE0(*(_QWORD **)(v10 + 24));
    v11 = (void *)v10;
    v10 = *(_QWORD *)(v10 + 16);
    v1 = (const char *)&dword_30;
    operator delete(v11, 0x30u);
  }
  v12 = *((_QWORD *)this + 130);
  if ( v12 )
  {
    *((_QWORD *)this + 131) = 0;
    qfree(v12, v1);
  }
  EAView__::vfunc_3(this, v1);
}
