__int64 __fastcall IDAApplication__::vfunc_3(QT::QApplication *this, const char *a2)
{
  __int64 *v3; // r13
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 i; // rbp
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 j; // rbp
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbp
  void *v16; // rdi
  __int64 v17; // rbp
  _QWORD *v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  const char *v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdi

  *(_QWORD *)this = &IDAApplication___vtable;
  v3 = (__int64 *)qword_8CB508;
  *((_QWORD *)this + 2) = IDAApplication___vtable_at__16;
  *((_QWORD *)this + 85) = IDAApplication___vtable_at__680;
  *((_QWORD *)this + 87) = IDAApplication___vtable_at__696;
  *((_QWORD *)this + 94) = IDAApplication___vtable_at__752;
  if ( v3 )
  {
    v4 = *v3;
    if ( *v3 )
    {
      v5 = v3[1];
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v7 = (__int64 *)(v4 + 24 * i);
          v8 = *v7;
          if ( *v7 )
          {
            v7[1] = 0;
            qfree(v8, a2);
            v4 = *v3;
          }
        }
      }
      v3[1] = 0;
      qfree(v4, a2);
    }
    a2 = (const char *)&off_18;
    operator delete(v3, 0x18u);
    qword_8CB508 = 0;
  }
  v9 = qword_8CAC18;
  if ( qword_8CAC18 )
  {
    v10 = *qword_8CAC18;
    if ( *qword_8CAC18 )
    {
      v11 = qword_8CAC18[1];
      if ( v11 )
      {
        for ( j = 0; j != v11; ++j )
        {
          v13 = (__int64 *)(v10 + 24 * j);
          v14 = *v13;
          if ( *v13 )
          {
            v13[1] = 0;
            qfree(v14, a2);
            v10 = *v9;
          }
        }
      }
      v9[1] = 0;
      qfree(v10, a2);
    }
    a2 = (const char *)&off_18;
    operator delete(v9, 0x18u);
    qword_8CAC18 = nullptr;
  }
  if ( *((_BYTE *)this + 1188) )
    sub_533CA0((char *)this + 1056);
  v15 = *((_QWORD *)this + 143);
  while ( v15 )
  {
    sub_2FFDC0(*(_QWORD **)(v15 + 24));
    v16 = (void *)v15;
    v15 = *(_QWORD *)(v15 + 16);
    a2 = (const char *)&dword_30;
    operator delete(v16, 0x30u);
  }
  v17 = *((_QWORD *)this + 137);
  while ( v17 )
  {
    v18 = (_QWORD *)v17;
    sub_3002A0(*(_QWORD **)(v17 + 24), a2);
    v19 = *(_QWORD *)(v17 + 32);
    v17 = *(_QWORD *)(v17 + 16);
    if ( v19 )
    {
      v18[5] = 0;
      qfree(v19, a2);
    }
    a2 = (_BYTE *)dword_40;
    operator delete(v18, 0x40u);
  }
  v20 = *((_QWORD *)this + 132);
  if ( v20 )
  {
    *((_QWORD *)this + 133) = 0;
    qfree(v20, a2);
  }
  v21 = *((_QWORD *)this + 128);
  if ( v21 )
  {
    *((_QWORD *)this + 129) = 0;
    qfree(v21, a2);
  }
  if ( *((_DWORD *)this + 255) )
    QT::QBasicTimer::stop((QT::QApplication *)((char *)this + 1020));
  v22 = *((_QWORD *)this + 124);
  *((_QWORD *)this + 94) = &hvui_common_t___vtable;
  *((_QWORD *)this + 102) = &vault_credentials_t___vtable;
  if ( v22 )
  {
    *((_QWORD *)this + 125) = 0;
    qfree(v22, a2);
  }
  v23 = *((_QWORD *)this + 120);
  *((_QWORD *)this + 102) = &login_credentials_t___vtable;
  if ( v23 )
  {
    *((_QWORD *)this + 121) = 0;
    qfree(v23, a2);
  }
  v24 = *((_QWORD *)this + 117);
  if ( v24 )
  {
    *((_QWORD *)this + 118) = 0;
    qfree(v24, a2);
  }
  v25 = *((_QWORD *)this + 113);
  if ( v25 )
  {
    *((_QWORD *)this + 114) = 0;
    qfree(v25, a2);
  }
  v26 = *((_QWORD *)this + 110);
  if ( v26 )
  {
    *((_QWORD *)this + 111) = 0;
    qfree(v26, a2);
  }
  v27 = *((_QWORD *)this + 107);
  if ( v27 )
  {
    *((_QWORD *)this + 108) = 0;
    qfree(v27, a2);
  }
  v28 = *((_QWORD *)this + 103);
  if ( v28 )
  {
    *((_QWORD *)this + 104) = 0;
    qfree(v28, a2);
  }
  v29 = *((_QWORD *)this + 99);
  if ( v29 )
  {
    *((_QWORD *)this + 100) = 0;
    qfree(v29, a2);
  }
  v30 = *((const char **)this + 98);
  if ( v30 )
    sub_416E40((char *)this + 784);
  *((_QWORD *)this + 94) = &unk_8729E8;
  unbind_event_handler_all((char *)this + 752);
  v31 = *((_QWORD *)this + 95);
  if ( v31 )
  {
    *((_QWORD *)this + 96) = 0;
    qfree(v31, v30);
  }
  v32 = *((_QWORD *)this + 90);
  *(_QWORD *)this = &ida_app_t___vtable;
  *((_QWORD *)this + 2) = &unk_8872E0;
  *((_QWORD *)this + 85) = &unk_8873F8;
  *((_QWORD *)this + 87) = ida_app_t___vtable_at__696;
  if ( v32 )
  {
    *((_QWORD *)this + 91) = 0;
    qfree(v32, v30);
  }
  return sub_482E40(this);
}
