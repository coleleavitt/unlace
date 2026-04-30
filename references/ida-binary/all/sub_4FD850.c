void __fastcall form_widget_t__::vfunc_3(
        QT::QWidget *this,
        const Connection *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  QT::QWidget **v7; // rdi
  QT::QWidget **v8; // rdx
  void (__fastcall *v9)(__int64, char *); // rax
  int *v10; // rax
  QT::QObject *v11; // rdx
  QT::QObject *v12; // rbp
  QT::QObject *v13; // r12
  QT::QObject *v14; // rdi
  volatile signed __int32 *v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r13
  void *v20; // rdi
  __int64 v21; // rsi
  volatile signed __int32 *v22; // rax
  volatile signed __int32 *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rbp
  void *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 i; // rbp
  __int64 *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r12
  __int64 j; // rbp
  __int64 v36; // rax
  __int64 v37; // rdi
  QT::QMetaObject::Connection *v38; // rbp
  QT::QMetaObject::Connection *v39; // r12
  QT::QMetaObject::Connection *v40; // rdi

  *(_QWORD *)this = &form_widget_t___vtable;
  *((_QWORD *)this + 2) = form_widget_t___vtable_at__16;
  v7 = (QT::QWidget **)qword_8D2310;
  v8 = (QT::QWidget **)(qword_8D2310 + 8 * xmmword_8D2318);
  if ( (QT::QWidget **)qword_8D2310 != v8 )
  {
    while ( this != *v7 )
    {
      if ( v8 == ++v7 )
        goto LABEL_7;
    }
    if ( v7 != v8 )
    {
      a2 = (const Connection *)(v7 + 1);
      memmove(v7, v7 + 1, (char *)v8 - (char *)v7 - 8);
      *(_QWORD *)&xmmword_8D2318 = xmmword_8D2318 - 1;
    }
  }
LABEL_7:
  v9 = *((void (__fastcall **)(__int64, char *))this + 20);
  if ( v9 && *((_DWORD *)this + 44) == 1 )
  {
    *((_DWORD *)this + 44) = 2;
    a2 = (const Connection *)((char *)this + 88);
    v9(4294967291LL, (char *)this + 88);
    *((_DWORD *)this + 44) = 1;
  }
  v10 = *((int **)this + 43);
  *((_QWORD *)this + 20) = 0;
  if ( !v10 || *v10 > 1 )
  {
    a2 = nullptr;
    sub_4F4020((__m128i *)((char *)this + 344), 0, 0, 0, a5, a6);
    v10 = *((int **)this + 43);
  }
  v11 = *((QT::QObject **)this + 44);
  v12 = v11;
  if ( !v10 || *v10 > 1 )
  {
    a2 = nullptr;
    sub_4F4020((__m128i *)((char *)this + 344), 0, 0, 0, a5, a6);
    v11 = *((QT::QObject **)this + 44);
  }
  v13 = (QT::QObject *)((char *)v11 + 8 * *((_QWORD *)this + 45));
  while ( v13 != v12 )
  {
    v14 = v12;
    v12 = (QT::QObject *)((char *)v12 + 8);
    QT::QObject::disconnect(v14, a2);
  }
  v15 = *((volatile signed __int32 **)this + 53);
  if ( v15 )
  {
    if ( *v15 != -1 && !_InterlockedSub(v15, 1u) )
    {
      v16 = *((_QWORD **)this + 53);
      if ( v16 )
      {
        v17 = v16[4];
        if ( v17 )
        {
          v18 = v17 + 144LL * *(_QWORD *)(v17 - 8);
          if ( v17 == v18 )
          {
            v21 = 0;
          }
          else
          {
            do
            {
              v19 = v18;
              v20 = *(void **)(v18 - 16);
              v18 -= 144;
              if ( v20 )
                operator delete[](v20);
            }
            while ( v16[4] != v18 );
            v21 = 144LL * *(_QWORD *)(v19 - 152);
          }
          operator delete[]((void *)(v18 - 8), v21 + 8);
        }
        a2 = (const Connection *)&qword_28;
        operator delete(v16, 0x28u);
      }
    }
  }
  v22 = *((volatile signed __int32 **)this + 43);
  if ( v22 && !_InterlockedSub(v22, 1u) )
  {
    v38 = *((QT::QMetaObject::Connection **)this + 44);
    v39 = (QT::QMetaObject::Connection *)((char *)v38 + 8 * *((_QWORD *)this + 45));
    while ( v39 != v38 )
    {
      v40 = v38;
      v38 = (QT::QMetaObject::Connection *)((char *)v38 + 8);
      QT::QMetaObject::Connection::~Connection(v40);
    }
    free(*((void **)this + 43));
  }
  v23 = *((volatile signed __int32 **)this + 40);
  if ( v23 && !_InterlockedSub(v23, 1u) )
    free(*((void **)this + 40));
  v24 = *((_QWORD *)this + 34);
  if ( v24 )
  {
    *((_QWORD *)this + 35) = 0;
    qfree(v24, (const char *)a2);
  }
  v25 = *((_QWORD *)this + 30);
  while ( v25 )
  {
    sub_4F8E60(*(_QWORD **)(v25 + 24));
    v26 = (void *)v25;
    v25 = *(_QWORD *)(v25 + 16);
    a2 = (const Connection *)&qword_28;
    operator delete(v26, 0x28u);
  }
  v27 = *((_QWORD *)this + 17);
  if ( v27 )
  {
    v28 = *((_QWORD *)this + 18);
    if ( v28 )
    {
      for ( i = 0; i != v28; ++i )
      {
        v30 = (__int64 *)(v27 + 24 * i);
        v31 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v31, (const char *)a2);
          v27 = *((_QWORD *)this + 17);
        }
      }
    }
    *((_QWORD *)this + 18) = 0;
    qfree(v27, (const char *)a2);
  }
  v32 = *((_QWORD *)this + 8);
  if ( v32 )
  {
    *((_QWORD *)this + 9) = 0;
    qfree(v32, (const char *)a2);
  }
  v33 = *((_QWORD *)this + 5);
  if ( v33 )
  {
    v34 = *((_QWORD *)this + 6);
    if ( v34 )
    {
      for ( j = 0; j != v34; ++j )
      {
        v36 = v33 + 72 * j;
        v37 = *(_QWORD *)(v36 + 8);
        if ( v37 )
        {
          *(_QWORD *)(v36 + 16) = 0;
          qfree(v37, (const char *)a2);
          v33 = *((_QWORD *)this + 5);
        }
      }
    }
    *((_QWORD *)this + 6) = 0;
    qfree(v33, (const char *)a2);
  }
  QT::QWidget::~QWidget(this);
}
