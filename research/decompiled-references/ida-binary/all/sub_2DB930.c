unsigned __int64 __fastcall sub_2DB930(__int64 a1, int a2, const char *a3, __int64 a4, __int64 a5)
{
  size_t v6; // r12
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  _BYTE *v10; // rbx
  size_t v11; // r14
  size_t v12; // r14
  int v13; // eax
  unsigned __int64 *v14; // rbx
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  void *v17; // rdi
  _QWORD *v18; // rbx
  __int64 v19; // rax
  void *v21; // rax
  const void *v22; // rsi
  void *v23; // rax
  const void *v24; // rsi
  void *v25; // rax
  const void *v26; // rsi
  char v30[8]; // [rsp+28h] [rbp-118h] BYREF
  _QWORD v31[2]; // [rsp+30h] [rbp-110h] BYREF
  void *v32; // [rsp+40h] [rbp-100h]
  __int128 v33; // [rsp+48h] [rbp-F8h]
  __int64 v34; // [rsp+58h] [rbp-E8h]
  _BYTE v35[168]; // [rsp+60h] [rbp-E0h] BYREF
  unsigned __int64 v36; // [rsp+108h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a5 + 8);
  v36 = __readfsqword(0x28u);
  v33 = 0;
  v32 = nullptr;
  if ( v6 )
  {
    v25 = (void *)qalloc_or_throw(v6);
    v26 = *(const void **)a5;
    *((_QWORD *)&v33 + 1) = v6;
    v32 = v25;
    memcpy(v25, v26, v6);
    *(_QWORD *)&v33 = v6;
  }
  v7 = *(_QWORD *)(a5 + 24);
  v8 = 2;
  v9 = a5 + 32;
  v10 = v35;
  v34 = v7;
  do
  {
    v11 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)v10 = 0;
    *(_OWORD *)(v10 + 8) = 0;
    if ( v11 )
    {
      v23 = (void *)qalloc_or_throw(v11);
      *(_QWORD *)v10 = v23;
      v24 = *(const void **)v9;
      *((_QWORD *)v10 + 2) = v11;
      memcpy(v23, v24, v11);
      *((_QWORD *)v10 + 1) = v11;
    }
    v12 = *(_QWORD *)(v9 + 32);
    *((_QWORD *)v10 + 3) = 0;
    *((_OWORD *)v10 + 2) = 0;
    if ( v12 )
    {
      v21 = (void *)qalloc_or_throw(v12);
      *((_QWORD *)v10 + 3) = v21;
      v22 = *(const void **)(v9 + 24);
      *((_QWORD *)v10 + 5) = v12;
      memcpy(v21, v22, v12);
      *((_QWORD *)v10 + 4) = v12;
    }
    v13 = *(_DWORD *)(v9 + 48);
    --v8;
    v10 += 56;
    v9 += 56;
    *((_DWORD *)v10 - 2) = v13;
  }
  while ( v8 != -1 );
  LODWORD(v34) = v34 | 8;
  sub_520610((QT::QWidget *)a1);
  v14 = &v36;
  do
  {
    v15 = *(v14 - 4);
    v14 -= 7;
    if ( v15 )
    {
      v14[4] = 0;
      qfree(v15, a3);
    }
    v16 = *v14;
    if ( *v14 )
    {
      v14[1] = 0;
      qfree(v16, a3);
    }
  }
  while ( v14 != (unsigned __int64 *)v35 );
  v17 = v32;
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32, a3);
  }
  *(_QWORD *)(a1 + 2464) = 0;
  *(_QWORD *)a1 = &ida_dirtree_widget_t___vtable;
  *(_QWORD *)(a1 + 16) = ida_dirtree_widget_t___vtable_at__16;
  *(_QWORD *)(a1 + 240) = ida_dirtree_widget_t___vtable_at__240;
  *(_QWORD *)(a1 + 304) = ida_dirtree_widget_t___vtable_at__304;
  *(_DWORD *)(a1 + 2472) = -1;
  *(_QWORD *)(a1 + 2480) = 0;
  *(_OWORD *)(a1 + 2448) = 0;
  *(_DWORD *)(a1 + 2472) = *(_DWORD *)(get_eah(v17, a3, ida_dirtree_widget_t___vtable_at__240) + 24);
  v18 = QT::QCoreApplication::self;
  if ( QT::QCoreApplication::self )
  {
    if ( a2 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*QT::QCoreApplication::self + 136LL))(
        v31,
        QT::QCoreApplication::self);
      QT::QWidget::setWindowIcon((QT::QWidget *)a1, (const QT::QIcon *)v31);
      QT::QIcon::~QIcon((QT::QIcon *)v31);
    }
    v31[1] = 0;
    v31[0] = sub_467990;
    v19 = operator new(0x18u);
    *(_DWORD *)v19 = 1;
    *(_QWORD *)(v19 + 8) = sub_2DB550;
    *(_QWORD *)(v19 + 16) = a1;
    QT::QObject::connectImpl(v30, v18, v31, a1, 0, v19, 0, 0, &off_887520);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v30);
  }
  return v36 - __readfsqword(0x28u);
}
