void __fastcall forms_ui::controller_t__::vfunc_3(QT::QObject *this, const char *a2)
{
  QT::QObject **v3; // rbx
  QT::QObject **v4; // r13
  QT::QObject *v5; // rbp
  QT::QObject *v6; // rdi
  volatile signed __int32 *v7; // rax
  QT::QMetaObject::Connection *v8; // rbx
  QT::QMetaObject::Connection *v9; // rbp
  QT::QMetaObject::Connection *v10; // rdi

  v3 = *((QT::QObject ***)this + 6);
  *(_QWORD *)this = &forms_ui::controller_t___vtable;
  v4 = &v3[*((_QWORD *)this + 7)];
  if ( v4 != v3 )
  {
    do
    {
      v5 = *v3;
      if ( *v3 )
      {
        v6 = *v3;
        *(_QWORD *)v5 = &object_lifecycle_monitor_t___vtable;
        QT::QObject::~QObject(v6);
        a2 = (const char *)&dword_30;
        operator delete(v5, 0x30u);
      }
      ++v3;
    }
    while ( v4 != v3 );
    v3 = *((QT::QObject ***)this + 6);
  }
  if ( v3 )
  {
    *((_QWORD *)this + 7) = 0;
    qfree(v3, a2);
  }
  v7 = *((volatile signed __int32 **)this + 2);
  if ( v7 && !_InterlockedSub(v7, 1u) )
  {
    v8 = *((QT::QMetaObject::Connection **)this + 3);
    v9 = (QT::QMetaObject::Connection *)((char *)v8 + 8 * *((_QWORD *)this + 4));
    while ( v9 != v8 )
    {
      v10 = v8;
      v8 = (QT::QMetaObject::Connection *)((char *)v8 + 8);
      QT::QMetaObject::Connection::~Connection(v10);
    }
    free(*((void **)this + 2));
  }
  QT::QObject::~QObject(this);
}
