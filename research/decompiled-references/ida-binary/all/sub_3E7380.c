unsigned __int64 __fastcall sub_3E7380(
        QT::QAbstractItemView *this,
        int a2,
        const QT::QString *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  QT::QAbstractItemModel *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  double v17; // xmm4_8
  double v18; // xmm5_8
  QT::QAbstractItemView *v20; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  QT::QTreeView::QTreeView(this, nullptr);
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 9) = 0;
  *(_OWORD *)((char *)this + 56) = 0;
  *(_QWORD *)this = &watch_view_t___vtable;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 138) = 0;
  *((_QWORD *)this + 2) = watch_view_t___vtable_at__16;
  *((_QWORD *)this + 5) = watch_view_t___vtable_at__40;
  *((_QWORD *)this + 140) = 0;
  *((_WORD *)this + 556) = 0;
  *(_OWORD *)((char *)this + 1128) = 0;
  v12 = (QT::QAbstractItemModel *)operator new(0x28u);
  sub_3DEF80((__int64)v12, (__int64)this);
  QT::QTreeView::setModel(this, v12);
  *((_DWORD *)this + 279) = a2;
  QT::QWidget::setWindowTitle(this, a3);
  v13 = unk_8CA278;
  if ( *((_DWORD *)this + 279) == -1 )
    v13 = unk_8CA270;
  (*(void (__fastcall **)(QT::QAbstractItemView **, _QWORD *, __int64))(*QT::QCoreApplication::self + 144LL))(
    &v20,
    QT::QCoreApplication::self,
    v13);
  QT::QWidget::setWindowIcon(this, (const QT::QIcon *)&v20);
  QT::QIcon::~QIcon((QT::QIcon *)&v20);
  QT::QAbstractItemView::setEditTriggers(this, 6);
  QT::QTreeView::setColumnWidth(this, 0, 200);
  QT::QTreeView::setColumnWidth(this, 1, 200);
  QT::QTreeView::setColumnWidth(this, 2, 200);
  v14 = xmmword_8D1248;
  v20 = this;
  v15 = qword_8D1240;
  if ( *((_QWORD *)&xmmword_8D1248 + 1) < (unsigned __int64)(xmmword_8D1248 + 1) )
  {
    qword_8D1240 = qvector_reserve(&qword_8D1240, qword_8D1240, xmmword_8D1248 + 1, 8);
    v15 = qword_8D1240;
    v14 = xmmword_8D1248;
  }
  *(_QWORD *)(v15 + 8 * v14) = this;
  *(_QWORD *)&xmmword_8D1248 = xmmword_8D1248 + 1;
  v16 = QT::QAbstractItemView::selectionModel(this);
  QT::QObject::connect(
    &v20,
    v16,
    "2selectionChanged(QItemSelection,QItemSelection)",
    this,
    "1force_update_actions()",
    1);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v20);
  QT::QObject::connect(&v20, this, "2activated(QModelIndex)", this, "1item_activated(QModelIndex)", 2);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v20);
  if ( *((_DWORD *)this + 279) == -1 )
  {
    QT::QObject::connect(&v20, qword_8CD748, "2srcviewChanged(QWidget*)", this, "1srcview_changed(QWidget*)", 1);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v20);
  }
  sub_4EBBA0(this);
  *((_BYTE *)this + 1112) = 1;
  sub_3E71D0(this, 0.0, a5, a6, a7, v17, v18, a10, a11);
  sub_3E0A90((__int64)this);
  return v21 - __readfsqword(0x28u);
}
