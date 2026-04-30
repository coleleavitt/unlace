void __fastcall til_view_t__::vfunc_3(QT::QSplitter *this, __int64 a2)
{
  QT::QObject *v3; // rdi
  volatile signed __int32 *v4; // rbp
  volatile signed __int32 *v5; // rdx
  signed __int32 v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdi

  v3 = (QT::QSplitter *)((char *)this + 88);
  *((_QWORD *)v3 - 11) = &til_view_t___vtable;
  *((_QWORD *)v3 - 9) = til_view_t___vtable_at__16;
  *(_QWORD *)v3 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(v3);
  *((_QWORD *)this + 7) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QSplitter *)((char *)this + 56));
  v4 = *((volatile signed __int32 **)this + 6);
  if ( !v4 )
  {
LABEL_7:
    QT::QSplitter::~QSplitter(this);
    return;
  }
  v5 = v4 + 2;
  if ( *((_QWORD *)v4 + 1) != 0x100000001LL )
  {
    if ( &_pthread_key_create )
    {
      v6 = _InterlockedExchangeAdd(v5, 0xFFFFFFFF);
    }
    else
    {
      v6 = *((_DWORD *)v4 + 2);
      *((_DWORD *)v4 + 2) = v6 - 1;
    }
    if ( v6 == 1 )
      sub_28E9C0(v4);
    goto LABEL_7;
  }
  v7 = *(_QWORD *)v4;
  v8 = *((_QWORD *)this + 6);
  *((_QWORD *)v4 + 1) = 0;
  (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v7 + 16))(v8, a2, v5);
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 24LL))(v4);
  QT::QSplitter::~QSplitter(this);
}
