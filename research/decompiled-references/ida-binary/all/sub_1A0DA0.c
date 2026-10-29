void __fastcall CustomIDAMemo__::vfunc_3(QT::QAbstractScrollArea *this, const char *a2)
{
  volatile signed __int32 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 i; // rbp
  void *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 j; // rbp
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 k; // rbp
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 m; // r12
  _QWORD *v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi

  *(_QWORD *)this = &CustomIDAMemo___vtable;
  *((_QWORD *)this + 2) = CustomIDAMemo___vtable_at__16;
  *((_QWORD *)this + 13) = CustomIDAMemo___vtable_at__104;
  *((_QWORD *)this + 5) = CustomIDAMemo___vtable_at__40;
  sub_204DF0();
  v3 = *((volatile signed __int32 **)this + 122);
  if ( v3 && !_InterlockedSub(v3, 1u) )
    free(*((void **)this + 122));
  v4 = *((_QWORD *)this + 107);
  if ( v4 )
  {
    *((_QWORD *)this + 108) = 0;
    qfree(v4, a2);
  }
  v5 = *((_QWORD *)this + 104);
  v6 = *((_QWORD *)this + 103);
  if ( v5 )
  {
    for ( i = 0; i != v5; ++i )
    {
      v8 = *(void **)(v6 + 8 * i);
      if ( v8 )
      {
        a2 = (const char *)&off_18;
        operator delete(v8, 0x18u);
        v6 = *((_QWORD *)this + 103);
      }
    }
  }
  if ( v6 )
  {
    *((_QWORD *)this + 104) = 0;
    qfree(v6, a2);
  }
  if ( *((_DWORD *)this + 200) )
    QT::QBasicTimer::stop((QT::QAbstractScrollArea *)((char *)this + 800));
  v9 = *((_QWORD *)this + 97);
  if ( v9 )
  {
    *((_QWORD *)this + 98) = 0;
    qfree(v9, a2);
  }
  v10 = *((_QWORD *)this + 84);
  *((_QWORD *)this + 78) = &bookmarks_place_cache_t___vtable;
  if ( v10 )
  {
    v11 = *((_QWORD *)this + 85);
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = j;
        qfree(*(_QWORD *)(v10 + 16 * v13), a2);
        v10 = *((_QWORD *)this + 84);
      }
    }
    *((_QWORD *)this + 85) = 0;
    qfree(v10, a2);
  }
  v14 = *((_QWORD *)this + 80);
  if ( v14 )
  {
    v15 = *((_QWORD *)this + 81);
    if ( v15 )
    {
      for ( k = 0; k != v15; ++k )
      {
        v17 = k;
        qfree(*(_QWORD *)(v14 + 16 * v17), a2);
        v14 = *((_QWORD *)this + 80);
      }
    }
    *((_QWORD *)this + 81) = 0;
    qfree(v14, a2);
  }
  QT::QObject::~QObject((QT::QAbstractScrollArea *)((char *)this + 624));
  v18 = *((_QWORD *)this + 74);
  *((_QWORD *)this + 72) = &highlight_t___vtable;
  if ( v18 )
  {
    v19 = *((_QWORD *)this + 75);
    if ( v19 )
    {
      for ( m = 0; m != v19; ++m )
      {
        v21 = (_QWORD *)(v18 + 80 * m);
        v22 = v21[4];
        if ( v22 )
        {
          v21[5] = 0;
          qfree(v22, a2);
        }
        v23 = v21[1];
        if ( v23 )
        {
          v21[2] = 0;
          qfree(v23, a2);
        }
        v18 = *((_QWORD *)this + 74);
      }
    }
    *((_QWORD *)this + 75) = 0;
    qfree(v18, a2);
  }
  QT::QObject::~QObject((QT::QAbstractScrollArea *)((char *)this + 576));
  *((_QWORD *)this + 66) = &caret_status_t___vtable;
  if ( *((_DWORD *)this + 138) )
    QT::QBasicTimer::stop((QT::QAbstractScrollArea *)((char *)this + 552));
  QT::QObject::~QObject((QT::QAbstractScrollArea *)((char *)this + 528));
  sub_1E9A00((char *)this + 384);
  v24 = *((_QWORD *)this + 25);
  if ( v24 )
    qfree(v24, a2);
  sub_277990((char *)this + 104);
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
  QT::QAbstractScrollArea::~QAbstractScrollArea(this);
}
