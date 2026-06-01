void __fastcall sub_482E40(QT::QApplication *this, const char *a2)
{
  __int64 v3; // rdi
  void *v4; // rbp
  __int64 v5; // rbp
  _QWORD *v6; // r12
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rax
  _QWORD *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r13
  void *v13; // rdi
  __int64 v14; // rax
  volatile signed __int32 *v15; // rax
  _QWORD *v16; // r12
  void **v17; // rax
  void **v18; // rbp
  void **v19; // r15
  char *v20; // rdi
  void **v21; // r13
  void **v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  QT::QObject *v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // r13
  __int64 i; // r12
  __int64 *v30; // rbp
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi

  *(_QWORD *)this = &app_t___vtable;
  *((_QWORD *)this + 2) = &unk_8954A0;
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  v4 = *((void **)this + 17);
  *((_QWORD *)this + 15) = 0;
  if ( v4 )
  {
    jvalue_t_clear(v4);
    a2 = (const char *)&off_18;
    operator delete(v4, 0x18u);
  }
  *((_QWORD *)this + 17) = 0;
  QT::QTimer::~QTimer((QT::QApplication *)((char *)this + 656));
  v5 = *((_QWORD *)this + 77);
  while ( v5 )
  {
    v6 = (_QWORD *)v5;
    sub_4788A0(*(_QWORD **)(v5 + 24), a2);
    v7 = *(_QWORD *)(v5 + 32);
    v5 = *(_QWORD *)(v5 + 16);
    if ( v7 )
    {
      v6[5] = 0;
      qfree(v7, a2);
    }
    a2 = (_BYTE *)dword_40;
    operator delete(v6, 0x40u);
  }
  v8 = *((volatile signed __int32 **)this + 74);
  if ( v8 )
  {
    if ( *v8 != -1 && !_InterlockedSub(v8, 1u) )
    {
      v9 = *((_QWORD **)this + 74);
      if ( v9 )
      {
        v10 = v9[4];
        if ( v10 )
        {
          v11 = v10 + 144LL * *(_QWORD *)(v10 - 8);
          if ( v10 == v11 )
          {
            v14 = 0;
          }
          else
          {
            do
            {
              v12 = v11;
              v13 = *(void **)(v11 - 16);
              v11 -= 144;
              if ( v13 )
                operator delete[](v13);
            }
            while ( v9[4] != v11 );
            v14 = 144LL * *(_QWORD *)(v12 - 152);
          }
          operator delete[]((void *)(v11 - 8), v14 + 8);
        }
        a2 = (const char *)&qword_28;
        operator delete(v9, 0x28u);
      }
    }
  }
  v15 = *((volatile signed __int32 **)this + 73);
  if ( v15 )
  {
    if ( *v15 != -1 && !_InterlockedSub(v15, 1u) )
    {
      v16 = *((_QWORD **)this + 73);
      if ( v16 )
      {
        v17 = (void **)v16[4];
        if ( v17 )
        {
          v18 = &v17[18 * (_QWORD)*(v17 - 1)];
          if ( v17 == v18 )
          {
            v24 = 0;
          }
          else
          {
            v19 = v18 - 2;
            do
            {
              v20 = (char *)*v19;
              v21 = v18;
              v18 -= 18;
              if ( *v19 )
              {
                v22 = v18;
                if ( v18 == v19 )
                  goto LABEL_34;
                do
                {
                  v23 = *(unsigned __int8 *)v22;
                  if ( (_BYTE)v23 != 0xFF )
                  {
                    QT::QIcon::~QIcon((QT::QIcon *)&v20[16 * v23 + 8]);
                    v20 = (char *)*v19;
                  }
                  v22 = (void **)((char *)v22 + 1);
                }
                while ( v22 != v19 );
                if ( v20 )
LABEL_34:
                  operator delete[](v20);
              }
              v19 -= 18;
            }
            while ( (void **)v16[4] != v18 );
            v24 = 144LL * (_QWORD)*(v21 - 19);
          }
          operator delete[](v18 - 1, v24 + 8);
        }
        a2 = (const char *)&qword_28;
        operator delete(v16, 0x28u);
      }
    }
  }
  QT::QSignalMapper::~QSignalMapper((QT::QApplication *)((char *)this + 552));
  v25 = (QT::QApplication *)((char *)this + 488);
  *((_QWORD *)this + 62) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QApplication *)((char *)this + 496));
  if ( (char *)this + 488 != (char *)this + 168 )
  {
    do
    {
      *((_QWORD *)v25 - 4) = &object_lifecycle_monitor_t___vtable;
      v25 = (QT::QObject *)((char *)v25 - 32);
      QT::QObject::~QObject(v25);
    }
    while ( v25 != (QT::QApplication *)((char *)this + 168) );
  }
  v26 = *((_QWORD *)this + 18);
  if ( v26 )
  {
    v27 = *((_QWORD *)this + 19);
    if ( v27 )
    {
      v28 = 0;
      for ( i = 0; i != v27; ++i )
      {
        v30 = (__int64 *)(v26 + v28);
        v31 = *(_QWORD *)(v26 + v28 + 24);
        if ( v31 )
        {
          v30[4] = 0;
          qfree(v31, a2);
        }
        v32 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v32, a2);
        }
        v26 = *((_QWORD *)this + 18);
        v28 += 56;
      }
    }
    *((_QWORD *)this + 19) = 0;
    qfree(v26, a2);
  }
  v33 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 2) = &unk_893C50;
  qmutex_free(v33);
  v34 = *((_QWORD *)this + 7);
  if ( v34 )
  {
    *((_QWORD *)this + 8) = 0;
    qfree(v34, a2);
  }
  v35 = *((_QWORD *)this + 4);
  if ( v35 )
  {
    *((_QWORD *)this + 5) = 0;
    qfree(v35, a2);
  }
  QT::QApplication::~QApplication(this);
}
