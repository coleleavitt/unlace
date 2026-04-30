unsigned __int64 __fastcall sub_26EA80(QT::QAbstractItemView *this)
{
  __int64 v1; // rax
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 v4; // rax
  QT::QHeaderView *v5; // rax
  QT::QWidget *v6; // rax
  __int64 v7; // rax
  __m128i *v8; // rax
  __m128i v9; // xmm0
  __m128i *v10; // rax
  __m128i v11; // xmm0
  __int64 v13; // [rsp+0h] [rbp-80h]
  _BYTE v14[8]; // [rsp+18h] [rbp-68h] BYREF
  __m128i v15; // [rsp+20h] [rbp-60h] BYREF
  __m128i v16; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  QT::QTreeView::QTreeView(this, nullptr);
  QT::QObject::QObject((QT::QAbstractItemView *)((char *)this + 40), nullptr);
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 5) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)this + 40, v13);
  *(_QWORD *)this = &diff_details_t___vtable;
  *((_QWORD *)this + 2) = diff_details_t___vtable_at__16;
  QT::QStyledItemDelegate::QStyledItemDelegate((QT::QAbstractItemView *)((char *)this + 72), nullptr);
  *((_QWORD *)this + 9) = &off_8710B0;
  v1 = operator new(0x28u);
  *(_QWORD *)(v1 + 16) = 0;
  v2 = v1;
  *(_OWORD *)v1 = 0;
  *(_OWORD *)(v1 + 24) = 0;
  QT::QAbstractItemModel::QAbstractItemModel((QT::QAbstractItemModel *)v1, nullptr);
  *(_QWORD *)v2 = &off_870F18;
  *(_QWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  QT::QTreeView::setModel(this, (QT::QAbstractItemModel *)v2);
  QT::QObject::setParent((QT::QAbstractItemView *)((char *)this + 72), this);
  v3 = QT::QAbstractItemView::itemDelegate(this);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  QT::QAbstractItemView::setItemDelegate(this, (QT::QAbstractItemView *)((char *)this + 72));
  v4 = QT::QTreeView::header(this);
  QT::QHeaderView::setSectionResizeMode(v4, 0, 3);
  v5 = (QT::QHeaderView *)QT::QTreeView::header(this);
  QT::QHeaderView::setStretchLastSection(v5, 0);
  v6 = (QT::QWidget *)QT::QTreeView::header(this);
  QT::QWidget::hide(v6);
  QT::QAbstractItemView::setVerticalScrollMode(this, 1);
  v7 = sub_277DF0();
  QT::QObject::connect(
    &v16,
    v7,
    "2sync_required(const diffable_widget_sync_data_t &)",
    this,
    "1on_sync_required(const diffable_widget_sync_data_t &)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v16);
  v16.m128i_i64[1] = 0;
  v16.m128i_i64[0] = (__int64)sub_26E6D0;
  v15.m128i_i64[1] = 0;
  v15.m128i_i64[0] = (__int64)&QT::QTreeView::collapsed;
  v8 = (__m128i *)operator new(0x20u);
  v9 = _mm_load_si128(&v16);
  v8->m128i_i32[0] = 1;
  v8->m128i_i64[1] = (__int64)sub_26E750;
  v8[1] = v9;
  QT::QObject::connectImpl(v14, this, &v15, this, &v16, v8, 0, 0, &QT::QTreeView::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v14);
  v15.m128i_i64[1] = 0;
  v15.m128i_i64[0] = (__int64)sub_2705C0;
  v16.m128i_i64[1] = 0;
  v16.m128i_i64[0] = (__int64)&QT::QTreeView::expanded;
  v10 = (__m128i *)operator new(0x20u);
  v11 = _mm_load_si128(&v15);
  v10->m128i_i64[1] = (__int64)sub_26E750;
  v10->m128i_i32[0] = 1;
  v10[1] = v11;
  QT::QObject::connectImpl(v14, this, &v16, this, &v15, v10, 0, 0, &QT::QTreeView::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v14);
  return v17 - __readfsqword(0x28u);
}
