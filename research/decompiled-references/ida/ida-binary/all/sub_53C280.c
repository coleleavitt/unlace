void __fastcall sub_53C280(QT::QMainWindow *this, const char *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 i; // r12
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rbx
  void **v9; // rbx
  QT::QMainWindow *v10; // rbx
  QT::QObject *v11; // rdi
  __int64 v12; // rbx
  _QWORD *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  volatile signed __int32 *v17; // rax
  void **v18; // rbx

  v3 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 2) = &unk_89ECB8;
  v4 = *((_QWORD *)this + 7);
  *(_QWORD *)this = &ui_main_window_t___vtable;
  for ( i = v3 + 8 * v4; i != v3; v3 += 8 )
  {
    v6 = *(_QWORD **)v3;
    if ( !*(_BYTE *)(*(_QWORD *)v3 + 24LL) )
    {
      v7 = (_QWORD *)v6[2];
      if ( v7 )
      {
        if ( !*(_QWORD *)(v7[1] + 16LL) )
        {
          (*(void (__fastcall **)(_QWORD))(*v7 + 32LL))(v6[2]);
          v6 = *(_QWORD **)v3;
        }
      }
    }
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 32LL))(v6);
  }
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    if ( *(_DWORD *)v8 == 1 )
    {
      sub_53BE30(*(void **)(v8 + 24));
      *(_QWORD *)(v8 + 24) = 0;
      *(_QWORD *)(v8 + 32) = v8 + 16;
      *(_QWORD *)(v8 + 40) = v8 + 16;
      *(_QWORD *)(v8 + 48) = 0;
    }
    else
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v8, 1u) )
      {
        v9 = *((void ***)this + 5);
        if ( v9 )
        {
          sub_53BE30(v9[3]);
          a2 = (const char *)&word_38;
          operator delete(v9, 0x38u);
        }
      }
      *((_QWORD *)this + 5) = 0;
    }
  }
  *((_QWORD *)this + 20) = &active_corewidget_t___vtable;
  v10 = (QT::QMainWindow *)((char *)this + 256);
  do
  {
    *(_QWORD *)v10 = &object_lifecycle_monitor_t___vtable;
    v11 = v10;
    v10 = (QT::QMainWindow *)((char *)v10 - 32);
    QT::QObject::~QObject(v11);
  }
  while ( (QT::QMainWindow *)((char *)this + 160) != v10 );
  *((_QWORD *)this + 20) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QMainWindow *)((char *)this + 160));
  v12 = *((_QWORD *)this + 14);
  while ( v12 )
  {
    v13 = (_QWORD *)v12;
    sub_53BFC0(*(_QWORD **)(v12 + 24), a2);
    v14 = *(_QWORD *)(v12 + 32);
    v12 = *(_QWORD *)(v12 + 16);
    if ( v14 )
    {
      v13[5] = 0;
      qfree(v14, a2);
    }
    a2 = (_BYTE *)dword_40;
    operator delete(v13, 0x40u);
  }
  v15 = *((_QWORD *)this + 9);
  if ( v15 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v15, a2);
  }
  v16 = *((_QWORD *)this + 6);
  if ( v16 )
  {
    *((_QWORD *)this + 7) = 0;
    qfree(v16, a2);
  }
  v17 = *((volatile signed __int32 **)this + 5);
  if ( v17 )
  {
    if ( !_InterlockedSub(v17, 1u) )
    {
      v18 = *((void ***)this + 5);
      if ( v18 )
      {
        sub_53BE30(v18[3]);
        operator delete(v18, 0x38u);
      }
    }
  }
  QT::QMainWindow::~QMainWindow(this);
}
