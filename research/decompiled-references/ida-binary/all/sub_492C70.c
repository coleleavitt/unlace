unsigned __int64 __fastcall sub_492C70(QT::QObject *this, char *s, unsigned int a3, QT::QWidget *a4)
{
  double v6; // xmm0_8
  __int64 v7; // rax
  size_t v8; // rax
  __int64 v9; // rax
  QT::QWidget *v10; // rax
  QT::QWidget *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  QT::QObject **v14; // rcx
  QT::QObject **v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v26; // rax
  _QWORD v27[2]; // [rsp+10h] [rbp-C0h] BYREF
  _QWORD v28[2]; // [rsp+20h] [rbp-B0h] BYREF
  _QWORD v29[2]; // [rsp+30h] [rbp-A0h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-90h] BYREF
  _QWORD v31[2]; // [rsp+50h] [rbp-80h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-70h] BYREF
  _QWORD v33[2]; // [rsp+70h] [rbp-60h] BYREF
  void *ptr[3]; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+98h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  QT::QTreeView::QTreeView(this, a4);
  *(_QWORD *)this = &base_dirtree_widget_t___vtable;
  *((_QWORD *)this + 2) = &unk_895C40;
  QT::QStyledItemDelegate::QStyledItemDelegate((QT::QObject *)((char *)this + 40), nullptr);
  *((_QWORD *)this + 7) = this;
  v6 = 0.0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = &off_893E50;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = -1;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_DWORD *)this + 54) = 15;
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = a3;
  *(_OWORD *)((char *)this + 88) = 0;
  *((_OWORD *)this + 8) = 0;
  *((_OWORD *)this + 9) = 0;
  *((_OWORD *)this + 10) = -1;
  *(_OWORD *)((char *)this + 184) = 0;
  *(_OWORD *)((char *)this + 200) = -1;
  v7 = QT::QAbstractItemView::itemDelegate(this);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  QT::QAbstractItemView::setItemDelegate(this, (QT::QObject *)((char *)this + 40));
  if ( s )
  {
    v8 = strlen(s);
    v6 = QT::QString::fromUtf8(ptr, v8, s);
    QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  *((_QWORD *)this + 28) = (*(__int64 (__fastcall **)(__int64, QT::QObject *))(*(_QWORD *)v9 + 104LL))(v9, this);
  QT::QTreeView::setUniformRowHeights(this, 1);
  QT::QAbstractItemView::setSelectionMode(this, 3);
  QT::QAbstractItemView::setEditTriggers(this, *((unsigned int *)QT::QCoreApplication::self + 163));
  QT::QAbstractItemView::setDragEnabled(this, 1);
  QT::QWidget::setAcceptDrops(this, 1);
  v10 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(this);
  QT::QWidget::setAcceptDrops(v10, 1);
  QT::QAbstractItemView::setDropIndicatorShown(this, 1);
  QT::QAbstractItemView::setDragDropMode(this, 3);
  if ( (*((_BYTE *)this + 233) & 1) != 0 )
  {
    v11 = (QT::QWidget *)QT::QTreeView::header(this);
    QT::QWidget::hide(v11);
  }
  sub_4EBBA0(this);
  v12 = qword_8D17F0;
  v13 = xmmword_8D17F8;
  v14 = (QT::QObject **)(qword_8D17F0 + 8 * xmmword_8D17F8);
  if ( (QT::QObject **)qword_8D17F0 == v14 )
    goto LABEL_19;
  v15 = (QT::QObject **)qword_8D17F0;
  while ( this != *v15 )
  {
    if ( v14 == ++v15 )
      goto LABEL_19;
  }
  if ( v15 == v14 )
  {
LABEL_19:
    v13 = xmmword_8D17F8 + 1;
    if ( *((_QWORD *)&xmmword_8D17F8 + 1) < (unsigned __int64)(xmmword_8D17F8 + 1) )
    {
      v26 = qvector_reserve(&qword_8D17F0, qword_8D17F0, v13, 8);
      v13 = xmmword_8D17F8;
      qword_8D17F0 = v26;
      v14 = (QT::QObject **)(v26 + 8 * xmmword_8D17F8);
    }
    *v14 = this;
    *(_QWORD *)&xmmword_8D17F8 = xmmword_8D17F8 + 1;
  }
  if ( (*((_BYTE *)this + 232) & 7) != 0 && !s )
  {
    if ( !under_debugger )
      interr(40802, v12, v13, v14, v6);
    BUG();
  }
  v16 = QT::QCoreApplication::self;
  if ( QT::QCoreApplication::self )
  {
    v27[1] = 0;
    v27[0] = sub_545750;
    v17 = operator new(0x18u);
    *(_DWORD *)v17 = 1;
    *(_QWORD *)(v17 + 8) = sub_4908A0;
    *(_QWORD *)(v17 + 16) = this;
    QT::QObject::connectImpl(ptr, v16, v27, this, 0, v17, 0, 0, &off_8955C0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
    v28[1] = 0;
    v28[0] = sub_5457C0;
    v18 = operator new(0x18u);
    *(_DWORD *)v18 = 1;
    *(_QWORD *)(v18 + 16) = this;
    *(_QWORD *)(v18 + 8) = sub_48F500;
    QT::QObject::connectImpl(ptr, v16, v28, this, 0, v18, 0, 0, &off_8955C0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
    v29[1] = 0;
    v29[0] = sub_545820;
    v19 = operator new(0x18u);
    *(_DWORD *)v19 = 1;
    *(_QWORD *)(v19 + 16) = this;
    *(_QWORD *)(v19 + 8) = sub_48F4B0;
    QT::QObject::connectImpl(ptr, v16, v29, this, 0, v19, 0, 0, &off_8955C0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
    v30[1] = 0;
    v30[0] = sub_545880;
    v20 = operator new(0x18u);
    *(_DWORD *)v20 = 1;
    *(_QWORD *)(v20 + 16) = this;
    *(_QWORD *)(v20 + 8) = sub_48F460;
    QT::QObject::connectImpl(ptr, v16, v30, this, 0, v20, 0, 0, &off_8955C0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
    v31[1] = 0;
    v31[0] = sub_5458E0;
    v21 = operator new(0x18u);
    *(_DWORD *)v21 = 1;
    *(_QWORD *)(v21 + 16) = this;
    *(_QWORD *)(v21 + 8) = sub_48F410;
    QT::QObject::connectImpl(ptr, v16, v31, this, 0, v21, 0, 0, &off_8955C0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
    v32[1] = 0;
    v32[0] = sub_545940;
    v22 = operator new(0x18u);
    *(_DWORD *)v22 = 1;
    *(_QWORD *)(v22 + 16) = this;
    *(_QWORD *)(v22 + 8) = sub_48F3C0;
    QT::QObject::connectImpl(ptr, v16, v32, this, 0, v22, 0, 0, &off_8955C0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
    v33[1] = 0;
    v33[0] = sub_5459A0;
    v23 = operator new(0x18u);
    *(_DWORD *)v23 = 1;
    *(_QWORD *)(v23 + 16) = this;
    *(_QWORD *)(v23 + 8) = sub_48F370;
    QT::QObject::connectImpl(ptr, v16, v33, this, 0, v23, 0, 0, &off_8955C0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
    ptr[1] = nullptr;
    ptr[0] = sub_545A00;
    v24 = operator new(0x18u);
    *(_DWORD *)v24 = 1;
    *(_QWORD *)(v24 + 16) = this;
    *(_QWORD *)(v24 + 8) = sub_48F320;
    QT::QObject::connectImpl(v33, v16, ptr, this, 0, v24, 0, 0, &off_8955C0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v33);
  }
  return v35 - __readfsqword(0x28u);
}
