unsigned __int64 __fastcall sub_497D00(QT::QObject *a1, QT::QObject *this)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __m128i *v4; // rax
  __m128i v5; // xmm0
  __m128i *v6; // rax
  __m128i v7; // xmm0
  __m128i *v8; // rax
  __m128i v9; // xmm0
  _BYTE v11[8]; // [rsp+8h] [rbp-80h] BYREF
  __m128i v12; // [rsp+10h] [rbp-78h] BYREF
  _QWORD (**v13)(QT::QItemSelectionModel *__hidden, const QT::QItemSelection *, const QT::QItemSelection *); // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+28h] [rbp-60h]
  _QWORD v15[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  QT::QTreeView::setModel(a1, this);
  QT::QObject::setParent(this, a1);
  v15[2] = this;
  v15[0] = 0;
  v15[1] = 0xFFFFFFFF00000000LL;
  (*(void (__fastcall **)(QT::QObject *, _QWORD *))(*(_QWORD *)a1 + 536LL))(a1, v15);
  QT::QTreeView::setExpanded(a1, v15);
  v2 = QT::QAbstractItemView::selectionModel(a1);
  v12.m128i_i64[1] = 0;
  v14 = 0;
  v3 = v2;
  v12.m128i_i64[0] = (__int64)sub_48F660;
  v13 = (_QWORD (**)(QT::QItemSelectionModel *__hidden, const QT::QItemSelection *, const QT::QItemSelection *))&QT::QItemSelectionModel::currentChanged;
  v4 = (__m128i *)operator new(0x20u);
  v5 = _mm_load_si128(&v12);
  v4->m128i_i32[0] = 1;
  v4->m128i_i64[1] = (__int64)sub_4871E0;
  v4[1] = v5;
  QT::QObject::connectImpl(v11, v3, &v13, a1, &v12, v4, 0, 0, &QT::QItemSelectionModel::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v11);
  v12.m128i_i64[1] = 0;
  v12.m128i_i64[0] = (__int64)sub_48FF50;
  v14 = 0;
  v13 = &QT::QItemSelectionModel::selectionChanged;
  v6 = (__m128i *)operator new(0x20u);
  v7 = _mm_load_si128(&v12);
  v6->m128i_i32[0] = 1;
  v6->m128i_i64[1] = (__int64)sub_487260;
  v6[1] = v7;
  QT::QObject::connectImpl(v11, v3, &v13, a1, &v12, v6, 0, 0, &QT::QItemSelectionModel::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v11);
  v12 = (__m128i)0x349uLL;
  v13 = (_QWORD (**)(QT::QItemSelectionModel *__hidden, const QT::QItemSelection *, const QT::QItemSelection *))&QT::QAbstractItemModel::rowsAboutToBeInserted;
  v14 = 0;
  v8 = (__m128i *)operator new(0x20u);
  v9 = _mm_load_si128(&v12);
  v8->m128i_i32[0] = 1;
  v8->m128i_i64[1] = (__int64)sub_486B80;
  v8[1] = v9;
  QT::QObject::connectImpl(v11, this, &v13, a1, &v12, v8, 0, 0, &QT::QAbstractItemModel::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v11);
  if ( (*((_BYTE *)a1 + 232) & 4) != 0 )
    (*(void (__fastcall **)(QT::QObject *))(*(_QWORD *)a1 + 824LL))(a1);
  if ( (*((_BYTE *)a1 + 236) & 2) == 0 )
    QT::QTreeView::expandAll(a1);
  return v16 - __readfsqword(0x28u);
}
