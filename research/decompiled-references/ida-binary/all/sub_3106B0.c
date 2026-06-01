__int64 __fastcall IDAMainWindow__::vfunc_3(QT::QMainWindow *this)
{
  _QWORD *v2; // rsi
  char *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rdi
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rax
  void **v9; // rbp
  volatile signed __int32 *v11; // rax
  void **v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 i; // r12
  __int64 *v16; // rax
  __int64 v17; // rdi
  volatile signed __int32 *v18; // rax
  volatile signed __int32 *v19; // rax

  *(_QWORD *)this = &IDAMainWindow___vtable;
  *((_QWORD *)this + 2) = IDAMainWindow___vtable_at__16;
  sub_1AF300((__int64)&unk_8BA4A0, 0, 0);
  v2 = nullptr;
  qword_8CD8B8 = nullptr;
  qword_8CF010 = nullptr;
  if ( !byte_8CC998 )
    v2 = (_QWORD *)qword_8CC990;
  sub_310650((__int64)this, v2);
  v3 = *((char **)this + 40);
  sub_310650((__int64)this, v3);
  v4 = *((_QWORD *)this + 44);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 24);
    if ( !v5 || ((*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5), (v4 = *((_QWORD *)this + 44)) != 0) )
    {
      v11 = *(volatile signed __int32 **)(v4 + 168);
      if ( v11 )
      {
        if ( !_InterlockedSub(v11, 1u) )
        {
          v12 = *(void ***)(v4 + 168);
          if ( v12 )
          {
            sub_30E950(v12[3]);
            v3 = (char *)&word_38;
            operator delete(v12, 0x38u);
          }
        }
      }
      v13 = *(_QWORD *)(v4 + 120);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v4 + 128);
        if ( v14 )
        {
          for ( i = 0; i != v14; ++i )
          {
            v16 = (__int64 *)(v13 + 24 * i);
            v17 = *v16;
            if ( *v16 )
            {
              v16[1] = 0;
              qfree(v17, v3);
              v13 = *(_QWORD *)(v4 + 120);
            }
          }
        }
        *(_QWORD *)(v4 + 128) = 0;
        qfree(v13, v3);
      }
      if ( *(_DWORD *)(v4 + 104) )
        QT::QBasicTimer::stop((QT::QBasicTimer *)(v4 + 104));
      if ( *(_DWORD *)(v4 + 100) )
        QT::QBasicTimer::stop((QT::QBasicTimer *)(v4 + 100));
      if ( *(_DWORD *)(v4 + 96) )
        QT::QBasicTimer::stop((QT::QBasicTimer *)(v4 + 96));
      v18 = *(volatile signed __int32 **)(v4 + 72);
      if ( v18 && !_InterlockedSub(v18, 1u) )
        free(*(void **)(v4 + 72));
      v19 = *(volatile signed __int32 **)(v4 + 40);
      if ( v19 && !_InterlockedSub(v19, 1u) )
      {
        free(*(void **)(v4 + 40));
        operator delete((void *)v4, 0xB8u);
      }
      else
      {
        operator delete((void *)v4, 0xB8u);
      }
    }
    *((_QWORD *)this + 44) = 0;
  }
  qword_8CD748 = nullptr;
  v6 = *((volatile signed __int32 **)this + 47);
  if ( v6 && !_InterlockedSub(v6, 1u) )
    free(*((void **)this + 47));
  v7 = *((volatile signed __int32 **)this + 41);
  if ( v7 && !_InterlockedSub(v7, 1u) )
    free(*((void **)this + 41));
  v8 = *((volatile signed __int32 **)this + 38);
  if ( v8 )
  {
    if ( !_InterlockedSub(v8, 1u) )
    {
      v9 = *((void ***)this + 38);
      if ( v9 )
      {
        sub_30E8D0(v9[3]);
        operator delete(v9, 0x38u);
      }
    }
  }
  *((_QWORD *)this + 36) = &uicontext_t___vtable;
  QT::QObject::~QObject((QT::QMainWindow *)((char *)this + 288));
  return sub_53C280(this);
}
