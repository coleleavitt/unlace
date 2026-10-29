void __fastcall sub_471170(_QWORD *a1, __int64 a2)
{
  QT::QSplitter *v2; // rbp
  QT::QObject *v4; // rdi
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rax

  v2 = (QT::QSplitter *)(a1 - 2);
  v4 = (QT::QObject *)(a1 + 9);
  *((_QWORD *)v4 - 11) = &til_view_t___vtable;
  *((_QWORD *)v4 - 9) = til_view_t___vtable_at__16;
  *(_QWORD *)v4 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(v4);
  a1[5] = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 5));
  v5 = (volatile signed __int32 *)a1[4];
  if ( v5 )
  {
    v6 = v5 + 2;
    if ( *((_QWORD *)v5 + 1) == 0x100000001LL )
    {
      v8 = *(_QWORD *)v5;
      *((_QWORD *)v5 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v8 + 16))(v5, a2, v6);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v7 = _InterlockedExchangeAdd(v6, 0xFFFFFFFF);
      }
      else
      {
        v7 = *((_DWORD *)v5 + 2);
        *((_DWORD *)v5 + 2) = v7 - 1;
      }
      if ( v7 == 1 )
        sub_28E9C0(v5);
    }
  }
  QT::QSplitter::~QSplitter(v2);
  operator delete(v2, 0x78u);
}
