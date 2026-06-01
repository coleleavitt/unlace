unsigned __int64 __fastcall sub_4D6020(QT::QAbstractButton **this, QT::QAbstractButton *a2, __int64 a3)
{
  __int64 v4; // rax
  QT::QAbstractButton *v5; // r12
  double v6; // xmm0_8
  volatile signed __int32 *v7; // rax
  double v8; // xmm0_8
  QT::QComboBox *v9; // r15
  double v10; // xmm0_8
  int v11; // eax
  QT::QComboBox *v12; // r15
  double v13; // xmm0_8
  int v14; // eax
  QT::QComboBox *v15; // r15
  double v16; // xmm0_8
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // r13d
  __int64 v21; // rax
  QT::QHeaderView *v22; // rax
  double v23; // xmm0_8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  double v29; // xmm0_8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  double v35; // xmm0_8
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  double v41; // xmm0_8
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // r9
  double v47; // xmm0_8
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  QT::QHeaderView *v54; // rax
  QT::QHeaderView *v55; // rax
  QT::QHBoxLayout *v56; // r12
  QT::QHBoxLayout *v57; // rbp
  __int64 v58; // rax
  __m128i si128; // xmm1
  __int64 v60; // rax
  __m128i v61; // xmm2
  QT::QVBoxLayout *v62; // r14
  QT::QVBoxLayout *v63; // r14
  void **v64; // rbx
  void **v65; // rbp
  QT::QAbstractButton *v67; // [rsp+0h] [rbp-138h]
  void *ptr[2]; // [rsp+10h] [rbp-128h] BYREF
  __int64 v69; // [rsp+20h] [rbp-118h]
  __m128i v70[2]; // [rsp+30h] [rbp-108h] BYREF
  __m128i v71[2]; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v72[2]; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v73[2]; // [rsp+90h] [rbp-A8h] BYREF
  __m128i v74[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v75; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v76; // [rsp+E0h] [rbp-58h]
  __int64 v77; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v78; // [rsp+F8h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  sub_53A8A0(this, a3, 0);
  *(this + 8) = nullptr;
  *(this + 10) = a2;
  *(this + 11) = nullptr;
  *(this + 2) = (QT::QAbstractButton *)edit_filters_dialog_t___vtable_at__16;
  *this = (QT::QAbstractButton *)&edit_filters_dialog_t___vtable;
  *(this + 9) = (QT::QAbstractButton *)0xFFFFFFFF00000000LL;
  *((_OWORD *)this + 3) = 0;
  v4 = operator new(0x68u);
  *(this + 12) = (QT::QAbstractButton *)v4;
  *(this + 13) = nullptr;
  *((_BYTE *)this + 112) = 0;
  sub_4D49D0(v4, (QT::QWidget *)this);
  v5 = (QT::QAbstractButton *)operator new(0x58u);
  v6 = QT::QString::fromUtf8(v74, 9, "Highlight");
  sub_4AF580(v5, (const QT::QString *)v74, nullptr, 0);
  v7 = (volatile signed __int32 *)v74[0].m128i_i64[0];
  *(this + 13) = v5;
  if ( v7 && !_InterlockedSub(v7, 1u) )
    free((void *)v74[0].m128i_i64[0]);
  v8 = QT::QString::fromUtf8(v74, 17, "Modify filters...", v6);
  QT::QWidget::setWindowTitle((QT::QWidget *)this, (const QT::QString *)v74);
  if ( v74[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v74[0].m128i_i64[0], 1u) )
    free((void *)v74[0].m128i_i64[0]);
  (*(void (__fastcall **)(__m128i *, _QWORD *, __int64, double))(*QT::QCoreApplication::self + 136LL))(
    v74,
    QT::QCoreApplication::self,
    181,
    v8);
  QT::QWidget::setWindowIcon((QT::QWidget *)this, (const QT::QIcon *)v74);
  QT::QIcon::~QIcon((QT::QIcon *)v74);
  QT::QWidget::setWindowFlags(this, *((_DWORD *)*(this + 4) + 3) & 0xFFFE3FFF | 0xC000);
  sub_4D5310((__int64)this, 0);
  v9 = *((QT::QComboBox **)*(this + 12) + 5);
  v75 = 0;
  v76 = 0;
  v77 = 2;
  v10 = QT::QString::fromUtf8(v74, 7, "include");
  (*(void (__fastcall **)(__m128i *, _QWORD *, __int64, double))(*QT::QCoreApplication::self + 136LL))(
    v73,
    QT::QCoreApplication::self,
    50,
    v10);
  v11 = QT::QComboBox::count(v9);
  QT::QComboBox::insertItem(v9, v11, (const QT::QIcon *)v73, (const QT::QString *)v74, (const QT::QVariant *)&v75);
  QT::QIcon::~QIcon((QT::QIcon *)v73);
  if ( v74[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v74[0].m128i_i64[0], 1u) )
    free((void *)v74[0].m128i_i64[0]);
  QT::QVariant::~QVariant((QT::QVariant *)&v75);
  v12 = *((QT::QComboBox **)*(this + 12) + 5);
  v75 = 0;
  v76 = 0;
  v77 = 2;
  v13 = QT::QString::fromUtf8(v74, 7, "exclude");
  (*(void (__fastcall **)(__m128i *, _QWORD *, __int64, double))(*QT::QCoreApplication::self + 136LL))(
    v73,
    QT::QCoreApplication::self,
    51,
    v13);
  v14 = QT::QComboBox::count(v12);
  QT::QComboBox::insertItem(v12, v14, (const QT::QIcon *)v73, (const QT::QString *)v74, (const QT::QVariant *)&v75);
  QT::QIcon::~QIcon((QT::QIcon *)v73);
  if ( v74[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v74[0].m128i_i64[0], 1u) )
    free((void *)v74[0].m128i_i64[0]);
  QT::QVariant::~QVariant((QT::QVariant *)&v75);
  v15 = *((QT::QComboBox **)*(this + 12) + 5);
  v75 = 0;
  v76 = 0;
  v77 = 2;
  v16 = QT::QString::fromUtf8(v74, 9, "highlight");
  (*(void (__fastcall **)(__m128i *, _QWORD *, __int64, double))(*QT::QCoreApplication::self + 136LL))(
    v73,
    QT::QCoreApplication::self,
    174,
    v16);
  v17 = QT::QComboBox::count(v15);
  QT::QComboBox::insertItem(v15, v17, (const QT::QIcon *)v73, (const QT::QString *)v74, (const QT::QVariant *)&v75);
  QT::QIcon::~QIcon((QT::QIcon *)v73);
  if ( v74[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v74[0].m128i_i64[0], 1u) )
    free((void *)v74[0].m128i_i64[0]);
  QT::QVariant::~QVariant((QT::QVariant *)&v75);
  v18 = QT::QComboBox::completer(*((QT::QComboBox **)*(this + 12) + 3));
  if ( v18 )
    QT::QCompleter::setCaseSensitivity(v18, 1);
  v19 = QT::QComboBox::lineEdit(*((QT::QComboBox **)*(this + 12) + 3));
  QT::QObject::connect(v74, v19, "2returnPressed()", this, "1on_btnAdd_clicked()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v74);
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)v74, (QT::QAbstractButton *)((char *)*(this + 4) + 56));
  v20 = QT::QFontMetrics::height((QT::QFontMetrics *)v74) + 4;
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)v74);
  v21 = QT::QTableView::verticalHeader(*((QT::QTableView **)*(this + 12) + 11));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 104LL))(v21, 0);
  v22 = (QT::QHeaderView *)QT::QTableView::verticalHeader(*((QT::QTableView **)*(this + 12) + 11));
  QT::QHeaderView::setDefaultSectionSize(v22, v20);
  QT::QTableWidget::setColumnCount(*((QT::QTableWidget **)*(this + 12) + 11), 5);
  v69 = 0;
  *(_OWORD *)ptr = 0;
  v23 = QT::QString::fromUtf8(v70, 6, "Column");
  sub_1D5280((__m128i *)ptr, v69, v70, v24, v25, v26);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v27, v28);
  v29 = QT::QString::fromUtf8(v71, 9, "Condition", v23);
  sub_1D5280((__m128i *)ptr, v69, v71, v30, v31, v32);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v33, v34);
  v35 = QT::QString::fromUtf8(v72, 5, "Value", v29);
  sub_1D5280((__m128i *)ptr, v69, v72, v36, v37, v38);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v39, v40);
  v41 = QT::QString::fromUtf8(v73, 6, "Action", v35);
  sub_1D5280((__m128i *)ptr, v69, v73, v42, v43, v44);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v45, v46);
  v47 = QT::QString::fromUtf8(v74, 5, "Flags", v41);
  sub_1D5280((__m128i *)ptr, v69, v74, v48, v49, v50);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_1B21C0((__m128i *)ptr, 0, 0, 0, v51, v52);
  if ( v74[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v74[0].m128i_i64[0], 1u) )
    free((void *)v74[0].m128i_i64[0]);
  if ( v73[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v73[0].m128i_i64[0], 1u) )
    free((void *)v73[0].m128i_i64[0]);
  if ( v72[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v72[0].m128i_i64[0], 1u) )
    free((void *)v72[0].m128i_i64[0]);
  if ( v71[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v71[0].m128i_i64[0], 1u) )
    free((void *)v71[0].m128i_i64[0]);
  if ( v70[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v70[0].m128i_i64[0], 1u) )
    free((void *)v70[0].m128i_i64[0]);
  QT::QTableWidget::setHorizontalHeaderLabels(*((_QWORD *)*(this + 12) + 11), ptr);
  v53 = QT::QTableView::horizontalHeader(*((QT::QTableView **)*(this + 12) + 11));
  QT::QHeaderView::setSectionResizeMode(v53, 2, 1);
  v54 = (QT::QHeaderView *)QT::QTableView::verticalHeader(*((QT::QTableView **)*(this + 12) + 11));
  QT::QHeaderView::setHighlightSections(v54, 0);
  v55 = (QT::QHeaderView *)QT::QTableView::horizontalHeader(*((QT::QTableView **)*(this + 12) + 11));
  QT::QHeaderView::setHighlightSections(v55, 0);
  QT::QAbstractItemView::setSelectionBehavior(*((_QWORD *)*(this + 12) + 11), 1);
  QT::QAbstractItemView::setSelectionMode(*((_QWORD *)*(this + 12) + 11), 3);
  QT::QObject::installEventFilter(*((QT::QObject **)*(this + 12) + 11), (QT::QObject *)this);
  v56 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v56);
  QT::QLayout::setContentsMargins(v56, 0, 0, 0, 0);
  (*(void (__fastcall **)(QT::QHBoxLayout *, __int64, double))(*(_QWORD *)v56 + 104LL))(v56, 5, v47);
  QT::QBoxLayout::addWidget(v56, *(_QWORD *)*(this + 12), 0, 0);
  QT::QBoxLayout::addWidget(v56, *((_QWORD *)*(this + 12) + 1), 0, 0);
  QT::QBoxLayout::addWidget(v56, *((_QWORD *)*(this + 12) + 2), 0, 0);
  QT::QBoxLayout::addWidget(v56, *((_QWORD *)*(this + 12) + 3), 0, 0);
  QT::QBoxLayout::addWidget(v56, *((_QWORD *)*(this + 12) + 4), 0, 0);
  QT::QBoxLayout::addWidget(v56, *((_QWORD *)*(this + 12) + 5), 0, 0);
  v57 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v57);
  QT::QLayout::setContentsMargins(v57, 0, 0, 0, 0);
  (*(void (__fastcall **)(QT::QHBoxLayout *, __int64))(*(_QWORD *)v57 + 104LL))(v57, 5);
  QT::QBoxLayout::addWidget(v57, *((_QWORD *)*(this + 12) + 6), 0, 0);
  QT::QBoxLayout::addWidget(v57, *((_QWORD *)*(this + 12) + 7), 0, 0);
  v58 = operator new(0x28u);
  *(_DWORD *)(v58 + 8) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_DWORD *)(v58 + 20) = 0x100000;
  *(_QWORD *)v58 = (char *)&`vtable for'QT::QSpacerItem + 16;
  *(_QWORD *)(v58 + 12) = 0x100000014LL;
  *(__m128i *)(v58 + 24) = si128;
  QT::QBoxLayout::addSpacerItem(v57);
  v67 = *(this + 13);
  QT::QColor::QColor(&v75, 12);
  sub_4AF280(v67, (int *)&v75);
  QT::QBoxLayout::addWidget(v57, *(this + 13), 0, 0);
  v60 = operator new(0x28u);
  *(_DWORD *)(v60 + 8) = 0;
  v61 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_QWORD *)(v60 + 12) = 0x100000014LL;
  *(_DWORD *)(v60 + 20) = 1245184;
  *(_QWORD *)v60 = (char *)&`vtable for'QT::QSpacerItem + 16;
  *(__m128i *)(v60 + 24) = v61;
  QT::QBoxLayout::addSpacerItem(v57);
  QT::QBoxLayout::addWidget(v57, *((_QWORD *)*(this + 12) + 8), 0, 0);
  QT::QBoxLayout::addWidget(v57, *((_QWORD *)*(this + 12) + 12), 0, 0);
  QT::QBoxLayout::addWidget(v57, *((_QWORD *)*(this + 12) + 9), 0, 0);
  v62 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v62);
  QT::QBoxLayout::addWidget(v62, *((_QWORD *)*(this + 12) + 11), 0, 0);
  QT::QWidget::setLayout(*((QT::QWidget **)*(this + 12) + 10), v62);
  v63 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v63);
  QT::QLayout::setContentsMargins(v63, 10, 10, 10, 10);
  (*(void (__fastcall **)(QT::QVBoxLayout *, __int64))(*(_QWORD *)v63 + 104LL))(v63, 20);
  QT::QBoxLayout::addLayout(v63, v56, 0);
  QT::QBoxLayout::addLayout(v63, v57, 0);
  QT::QBoxLayout::addWidget(v63, *((_QWORD *)*(this + 12) + 10), 0, 0);
  QT::QWidget::setLayout((QT::QWidget *)this, v63);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v64 = (void **)ptr[1];
    v65 = (void **)((char *)ptr[1] + 24 * v69);
    if ( ptr[1] != v65 )
    {
      do
      {
        if ( *v64 && !_InterlockedSub((volatile signed __int32 *)*v64, 1u) )
          free(*v64);
        v64 += 3;
      }
      while ( v65 != v64 );
    }
    free(ptr[0]);
  }
  return v78 - __readfsqword(0x28u);
}
