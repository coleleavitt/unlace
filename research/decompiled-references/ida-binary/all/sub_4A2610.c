void __fastcall chooser_widget_t__::vfunc_3(QT::QWidget *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rbp
  void *v7; // rdi
  __int64 v8; // rbp
  void *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbp
  void *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 i; // rbp
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 j; // rbp
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi

  *(_QWORD *)this = &chooser_widget_t___vtable;
  *((_QWORD *)this + 2) = chooser_widget_t___vtable_at__16;
  *((_QWORD *)this + 5) = chooser_widget_t___vtable_at__40;
  *((_QWORD *)this + 13) = chooser_widget_t___vtable_at__104;
  sub_4A24E0((__int64)this);
  v3 = *((_QWORD *)this + 306);
  if ( v3 )
  {
    *((_QWORD *)this + 307) = 0;
    qfree(v3, a2);
  }
  v4 = *((_QWORD *)this + 294);
  if ( v4 )
  {
    *((_QWORD *)this + 295) = 0;
    qfree(v4, a2);
  }
  v5 = *((_QWORD *)this + 291);
  if ( v5 )
  {
    *((_QWORD *)this + 292) = 0;
    qfree(v5, a2);
  }
  v6 = *((_QWORD *)this + 287);
  while ( v6 )
  {
    sub_49DBE0(*(_QWORD **)(v6 + 24));
    v7 = (void *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    a2 = (const char *)&dword_30;
    operator delete(v7, 0x30u);
  }
  v8 = *((_QWORD *)this + 281);
  while ( v8 )
  {
    sub_49DBE0(*(_QWORD **)(v8 + 24));
    v9 = (void *)v8;
    v8 = *(_QWORD *)(v8 + 16);
    a2 = (const char *)&dword_30;
    operator delete(v9, 0x30u);
  }
  v10 = *((_QWORD *)this + 276);
  if ( v10 )
  {
    *((_QWORD *)this + 277) = 0;
    qfree(v10, a2);
  }
  v11 = *((_QWORD *)this + 272);
  while ( v11 )
  {
    sub_49CFE0(*(_QWORD **)(v11 + 24));
    v12 = (void *)v11;
    v11 = *(_QWORD *)(v11 + 16);
    a2 = (const char *)&dword_30;
    operator delete(v12, 0x30u);
  }
  v13 = *((_QWORD *)this + 265);
  if ( v13 )
  {
    *((_QWORD *)this + 266) = 0;
    qfree(v13, a2);
  }
  v14 = *((_QWORD *)this + 257);
  if ( v14 )
  {
    v15 = *((_QWORD *)this + 258);
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = (__int64 *)(v14 + 24 * i);
        v18 = *v17;
        if ( *v17 )
        {
          v17[1] = 0;
          qfree(v18, a2);
          v14 = *((_QWORD *)this + 257);
        }
      }
    }
    *((_QWORD *)this + 258) = 0;
    qfree(v14, a2);
  }
  v19 = *((_QWORD *)this + 254);
  if ( v19 )
  {
    v20 = *((_QWORD *)this + 255);
    if ( v20 )
    {
      for ( j = 0; j != v20; ++j )
      {
        v22 = (__int64 *)(v19 + 24 * j);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v23, a2);
          v19 = *((_QWORD *)this + 254);
        }
      }
    }
    *((_QWORD *)this + 255) = 0;
    qfree(v19, a2);
  }
  v24 = *((_QWORD *)this + 248);
  if ( v24 )
  {
    *((_QWORD *)this + 249) = 0;
    qfree(v24, a2);
  }
  sub_4E2670((char *)this + 104);
  v25 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 5) = &stylable_widget_mixin_t___vtable;
  if ( v25 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v25, a2);
  }
  v26 = *((_QWORD *)this + 6);
  if ( v26 )
  {
    *((_QWORD *)this + 7) = 0;
    qfree(v26, a2);
  }
  QT::QWidget::~QWidget(this);
}
