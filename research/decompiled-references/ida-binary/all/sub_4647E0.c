void __fastcall merge_controller_t__::vfunc_3(
        QT::QObject *this,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *v7; // rbx
  __int64 *v8; // r12
  void *v9; // rbp
  QT::QObject *v10; // rbx
  QT::QObject *v11; // rdi

  *(_QWORD *)this = &merge_controller_t___vtable;
  v7 = *((__int64 **)this + 18);
  v8 = &v7[*((_QWORD *)this + 19)];
  if ( v7 != v8 )
  {
    do
    {
      v9 = (void *)*v7;
      if ( *v7 )
      {
        sub_2775D0(*v7, a2, a3, a4, a5, a6);
        a2 = (const char *)&off_18;
        operator delete(v9, 0x18u);
      }
      ++v7;
    }
    while ( v8 != v7 );
    v8 = *((__int64 **)this + 18);
  }
  if ( v8 )
  {
    *((_QWORD *)this + 19) = 0;
    qfree(v8, a2);
  }
  v10 = (QT::QObject *)((char *)this + 80);
  do
  {
    *(_QWORD *)v10 = &object_lifecycle_monitor_t___vtable;
    v11 = v10;
    v10 = (QT::QObject *)((char *)v10 - 32);
    QT::QObject::~QObject(v11);
  }
  while ( v10 != (QT::QObject *)((char *)this - 16) );
  QT::QObject::~QObject(this);
}
