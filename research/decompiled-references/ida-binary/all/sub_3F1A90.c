unsigned __int64 __fastcall sub_3F1A90(_QWORD *a1)
{
  __int64 v1; // r15
  __m128i *v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // r15
  __m128i *v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // r15
  __m128i *v9; // rax
  __m128i v10; // xmm0
  QT::QAbstractItemView *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r14
  __m128i *v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rsi
  __m128i *v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rsi
  __m128i *v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rsi
  __m128i *v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rsi
  __m128i *v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rsi
  __m128i *v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rsi
  __m128i *v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rsi
  __m128i *v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rsi
  __m128i *v38; // rax
  __m128i v39; // xmm0
  QT::QTreeView *v40; // rdi
  __int64 v41; // rax
  __m128i *v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rsi
  __m128i *v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rsi
  __m128i *v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rsi
  __m128i *v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // rsi
  __m128i *v54; // rax
  __m128i v55; // xmm0
  __m128i *v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rsi
  __m128i *v59; // rax
  __m128i v60; // xmm0
  __int64 v61; // rsi
  __m128i *v62; // rax
  __m128i v63; // xmm0
  __int64 v64; // rsi
  __m128i *v65; // rax
  __m128i v66; // xmm0
  __int64 v67; // rbp
  __int64 v68; // rax
  __int64 v70; // [rsp+8h] [rbp-80h]
  _BYTE v71[8]; // [rsp+18h] [rbp-70h] BYREF
  __m128i v72; // [rsp+20h] [rbp-68h] BYREF
  __int64 (__fastcall *v73)(); // [rsp+30h] [rbp-58h] BYREF
  __int64 v74; // [rsp+38h] [rbp-50h]
  unsigned __int64 v75; // [rsp+48h] [rbp-40h]

  v1 = a1[13];
  v75 = __readfsqword(0x28u);
  v72.m128i_i64[0] = (__int64)sub_408B80;
  v72.m128i_i64[1] = 0;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractItemView::doubleClicked;
  v74 = 0;
  v3 = (__m128i *)operator new(0x20u);
  v4 = _mm_load_si128(&v72);
  v3->m128i_i64[1] = (__int64)sub_3EEEB0;
  v3->m128i_i32[0] = 1;
  v3[1] = v4;
  QT::QObject::connectImpl(v71, v1, &v73, a1, &v72, v3, 0, 0, &QT::QAbstractItemView::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v5 = a1[13];
  v72.m128i_i64[0] = (__int64)sub_3FB5C0;
  v72.m128i_i64[1] = 0;
  v73 = (__int64 (__fastcall *)())&QT::QTreeView::expanded;
  v74 = 0;
  v6 = (__m128i *)operator new(0x20u);
  v7 = _mm_load_si128(&v72);
  v6->m128i_i64[1] = (__int64)sub_3EEEB0;
  v6[1] = v7;
  v6->m128i_i32[0] = 1;
  QT::QObject::connectImpl(v71, v5, &v73, a1, &v72, v6, 0, 0, &QT::QTreeView::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v8 = a1[13];
  v72.m128i_i64[0] = (__int64)sub_3FB850;
  v72.m128i_i64[1] = 0;
  v73 = (__int64 (__fastcall *)())&QT::QTreeView::collapsed;
  v74 = 0;
  v9 = (__m128i *)operator new(0x20u);
  v10 = _mm_load_si128(&v72);
  v9->m128i_i64[1] = (__int64)sub_3EEEB0;
  v9[1] = v10;
  v9->m128i_i32[0] = 1;
  QT::QObject::connectImpl(v71, v8, &v73, a1, &v72, v9, 0, 0, &QT::QTreeView::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v11 = (QT::QAbstractItemView *)a1[13];
  v72.m128i_i64[1] = 0;
  v72.m128i_i64[0] = (__int64)sub_3EDE10;
  v12 = QT::QAbstractItemView::selectionModel(v11);
  v74 = 0;
  v13 = v12;
  v73 = (__int64 (__fastcall *)())&QT::QItemSelectionModel::selectionChanged;
  v14 = (__m128i *)operator new(0x20u);
  v15 = _mm_load_si128(&v72);
  v14->m128i_i32[0] = 1;
  v14[1] = v15;
  v14->m128i_i64[1] = (__int64)sub_3EEDB0;
  QT::QObject::connectImpl(v71, v13, &v73, a1, &v72, v14, 0, 0, &QT::QItemSelectionModel::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v16 = a1[34];
  v72.m128i_i64[0] = (__int64)sub_3FD3A0;
  v72.m128i_i64[1] = 0;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractButton::clicked;
  v74 = 0;
  v17 = (__m128i *)operator new(0x20u);
  v18 = _mm_load_si128(&v72);
  v17->m128i_i32[0] = 1;
  v17[1] = v18;
  v17->m128i_i64[1] = (__int64)sub_3EEDB0;
  QT::QObject::connectImpl(v71, v16, &v73, a1, &v72, v17, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v19 = a1[17];
  v72.m128i_i64[0] = (__int64)sub_407980;
  v72.m128i_i64[1] = 0;
  v73 = sub_473400;
  v74 = 0;
  v20 = (__m128i *)operator new(0x20u);
  v21 = _mm_load_si128(&v72);
  v20->m128i_i32[0] = 1;
  v20[1] = v21;
  v20->m128i_i64[1] = (__int64)sub_3EEDB0;
  QT::QObject::connectImpl(v71, v19, &v73, a1, &v72, v20, 0, 0, &off_8935A0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v22 = a1[23];
  v72.m128i_i64[0] = (__int64)sub_401C10;
  v72.m128i_i64[1] = 0;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractButton::toggled;
  v74 = 0;
  v23 = (__m128i *)operator new(0x20u);
  v24 = _mm_load_si128(&v72);
  v23->m128i_i32[0] = 1;
  v23[1] = v24;
  v23->m128i_i64[1] = (__int64)sub_3EEFB0;
  QT::QObject::connectImpl(v71, v22, &v73, a1, &v72, v23, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v25 = a1[24];
  v72.m128i_i64[1] = 0;
  v72.m128i_i64[0] = (__int64)sub_401C40;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractButton::toggled;
  v74 = 0;
  v26 = (__m128i *)operator new(0x20u);
  v27 = _mm_load_si128(&v72);
  v26->m128i_i32[0] = 1;
  v26[1] = v27;
  v26->m128i_i64[1] = (__int64)sub_3EEFB0;
  QT::QObject::connectImpl(v71, v25, &v73, a1, &v72, v26, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v28 = a1[25];
  v72.m128i_i64[1] = 0;
  v72.m128i_i64[0] = (__int64)sub_3F7730;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractButton::toggled;
  v74 = 0;
  v29 = (__m128i *)operator new(0x20u);
  v30 = _mm_load_si128(&v72);
  v29->m128i_i32[0] = 1;
  v29[1] = v30;
  v29->m128i_i64[1] = (__int64)sub_3EEFB0;
  QT::QObject::connectImpl(v71, v28, &v73, a1, &v72, v29, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v31 = a1[26];
  v72.m128i_i64[1] = 0;
  v72.m128i_i64[0] = (__int64)sub_3EE2F0;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractButton::toggled;
  v74 = 0;
  v32 = (__m128i *)operator new(0x20u);
  v33 = _mm_load_si128(&v72);
  v32->m128i_i32[0] = 1;
  v32[1] = v33;
  v32->m128i_i64[1] = (__int64)sub_3EEDB0;
  QT::QObject::connectImpl(v71, v31, &v73, a1, &v72, v32, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v34 = a1[27];
  v72.m128i_i64[1] = 0;
  v72.m128i_i64[0] = (__int64)sub_3EE2F0;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractButton::toggled;
  v74 = 0;
  v35 = (__m128i *)operator new(0x20u);
  v36 = _mm_load_si128(&v72);
  v35->m128i_i32[0] = 1;
  v35[1] = v36;
  v35->m128i_i64[1] = (__int64)sub_3EEDB0;
  QT::QObject::connectImpl(v71, v34, &v73, a1, &v72, v35, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v37 = a1[28];
  v72.m128i_i64[1] = 0;
  v72.m128i_i64[0] = (__int64)sub_3EE2F0;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractButton::toggled;
  v74 = 0;
  v38 = (__m128i *)operator new(0x20u);
  v39 = _mm_load_si128(&v72);
  v38->m128i_i32[0] = 1;
  v38[1] = v39;
  v38->m128i_i64[1] = (__int64)sub_3EEDB0;
  QT::QObject::connectImpl(v71, v37, &v73, a1, &v72, v38, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v40 = (QT::QTreeView *)a1[13];
  v72.m128i_i64[1] = 0;
  v72.m128i_i64[0] = (__int64)sub_3EDE40;
  v41 = QT::QTreeView::header(v40);
  v74 = 0;
  v70 = v41;
  v73 = (__int64 (__fastcall *)())&QT::QHeaderView::sectionResized;
  v42 = (__m128i *)operator new(0x20u);
  v43 = _mm_load_si128(&v72);
  v42->m128i_i32[0] = 1;
  v42->m128i_i64[1] = (__int64)sub_3EE600;
  v42[1] = v43;
  QT::QObject::connectImpl(v71, v70, &v73, a1, &v72, v42, 0, 0, &QT::QHeaderView::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v44 = a1[29];
  v72.m128i_i64[1] = 0;
  v72.m128i_i64[0] = (__int64)sub_401C80;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractButton::toggled;
  v74 = 0;
  v45 = (__m128i *)operator new(0x20u);
  v46 = _mm_load_si128(&v72);
  v45->m128i_i32[0] = 1;
  v45[1] = v46;
  v45->m128i_i64[1] = (__int64)sub_3EEFB0;
  QT::QObject::connectImpl(v71, v44, &v73, a1, &v72, v45, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v47 = a1[30];
  v72.m128i_i64[1] = 0;
  v72.m128i_i64[0] = (__int64)sub_401CA0;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractButton::toggled;
  v74 = 0;
  v48 = (__m128i *)operator new(0x20u);
  v49 = _mm_load_si128(&v72);
  v48->m128i_i32[0] = 1;
  v48[1] = v49;
  v48->m128i_i64[1] = (__int64)sub_3EEFB0;
  QT::QObject::connectImpl(v71, v47, &v73, a1, &v72, v48, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v50 = a1[31];
  v72.m128i_i64[1] = 0;
  v72.m128i_i64[0] = (__int64)sub_401CC0;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractButton::toggled;
  v74 = 0;
  v51 = (__m128i *)operator new(0x20u);
  v52 = _mm_load_si128(&v72);
  v51->m128i_i32[0] = 1;
  v51[1] = v52;
  v51->m128i_i64[1] = (__int64)sub_3EEFB0;
  QT::QObject::connectImpl(v71, v50, &v73, a1, &v72, v51, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v53 = a1[32];
  v72.m128i_i64[1] = 0;
  v72.m128i_i64[0] = (__int64)sub_3F7820;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractButton::toggled;
  v74 = 0;
  v54 = (__m128i *)operator new(0x20u);
  v55 = _mm_load_si128(&v72);
  v54->m128i_i32[0] = 1;
  v54->m128i_i64[1] = (__int64)sub_3EEFB0;
  v54[1] = v55;
  QT::QObject::connectImpl(v71, v53, &v73, a1, &v72, v54, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v72.m128i_i64[1] = 0;
  v72.m128i_i64[0] = (__int64)sub_401BD0;
  v74 = 0;
  v73 = (__int64 (__fastcall *)())sub_45E0F0;
  v56 = (__m128i *)operator new(0x20u);
  v57 = _mm_load_si128(&v72);
  v56->m128i_i32[0] = 1;
  v56->m128i_i64[1] = (__int64)sub_3EF030;
  v56[1] = v57;
  QT::QObject::connectImpl(v71, &qword_8CC800, &v73, a1, &v72, v56, 0, 0, &off_87B7E0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v58 = a1[19];
  v72.m128i_i64[0] = (__int64)sub_408110;
  v72.m128i_i64[1] = 0;
  v73 = (__int64 (__fastcall *)())&QT::QLineEdit::textChanged;
  v74 = 0;
  v59 = (__m128i *)operator new(0x20u);
  v60 = _mm_load_si128(&v72);
  v59->m128i_i32[0] = 1;
  v59[1] = v60;
  v59->m128i_i64[1] = (__int64)sub_3EEDB0;
  QT::QObject::connectImpl(v71, v58, &v73, a1, &v72, v59, 0, 0, &QT::QLineEdit::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v61 = a1[20];
  v72.m128i_i64[0] = (__int64)sub_3FF2D0;
  v72.m128i_i64[1] = 0;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractButton::clicked;
  v74 = 0;
  v62 = (__m128i *)operator new(0x20u);
  v63 = _mm_load_si128(&v72);
  v62->m128i_i32[0] = 1;
  v62[1] = v63;
  v62->m128i_i64[1] = (__int64)sub_3EEDB0;
  QT::QObject::connectImpl(v71, v61, &v73, a1, &v72, v62, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v64 = a1[21];
  v72.m128i_i64[0] = (__int64)sub_3FF310;
  v72.m128i_i64[1] = 0;
  v73 = (__int64 (__fastcall *)())&QT::QAbstractButton::clicked;
  v74 = 0;
  v65 = (__m128i *)operator new(0x20u);
  v66 = _mm_load_si128(&v72);
  v65->m128i_i32[0] = 1;
  v65[1] = v66;
  v65->m128i_i64[1] = (__int64)sub_3EEDB0;
  QT::QObject::connectImpl(v71, v64, &v73, a1, &v72, v65, 0, 0, &QT::QAbstractButton::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v71);
  v74 = 0;
  v67 = a1[18];
  v73 = (__int64 (__fastcall *)())sub_462B20;
  v68 = operator new(0x18u);
  *(_DWORD *)v68 = 1;
  *(_QWORD *)(v68 + 16) = a1;
  *(_QWORD *)(v68 + 8) = &sub_3F5F30;
  QT::QObject::connectImpl(&v72, v67, &v73, a1, 0, v68, 0, 0, &off_882280);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v72);
  return v75 - __readfsqword(0x28u);
}
