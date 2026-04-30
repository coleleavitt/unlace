unsigned __int64 __fastcall sub_2ABDD0(QT::QWidget *this, __int64 a2)
{
  int v3; // ebx
  __m128i v4; // xmm5
  __int64 v5; // r12
  __int64 v6; // r8
  __m128i v7; // xmm2
  __int64 v8; // r9
  __int64 v9; // r15
  __m128i si128; // xmm3
  char *v11; // rsi
  __int64 v12; // rax
  __m128i *v13; // rbp
  __m128i v14; // xmm4
  char *v15; // rdi
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  char *v20; // rdi
  char *v21; // rax
  __int64 v22; // rax
  __m128 v23; // xmm0
  QT::QComboBox *v24; // rbx
  unsigned int v25; // eax
  __m128i *v26; // r15
  QT::QComboBox *v27; // rbx
  unsigned int v28; // eax
  QT::QHBoxLayout *v29; // r12
  __int64 v30; // rbp
  __int64 v31; // rbp
  QT::QVBoxLayout *v32; // r13
  _QWORD *v33; // rbp
  double v34; // xmm0_8
  __int64 v35; // rdx
  void *v36; // rax
  QT::QGroupBox *v37; // rbp
  QT::QLayout *v38; // r15
  QT::QDialogButtonBox *v39; // rbp
  void **v40; // rbx
  void **v41; // rbp
  __int64 v43; // rdx
  char *v44; // rax
  __m128 v45; // xmm0
  QT::QImage *v46[2]; // [rsp+0h] [rbp-E8h] BYREF
  __m128i *v47; // [rsp+10h] [rbp-D8h]
  QT::QString *v48; // [rsp+18h] [rbp-D0h]
  void *v49; // [rsp+20h] [rbp-C8h] BYREF
  QT::QLayout *v50; // [rsp+28h] [rbp-C0h]
  void *src[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+40h] [rbp-A8h]
  void *v53[4]; // [rsp+50h] [rbp-98h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v55; // [rsp+80h] [rbp-68h]
  void *v56[3]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v57; // [rsp+A8h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  sub_53A8A0(this, a2, 0);
  *(_QWORD *)this = &GraphPrintDialog___vtable;
  *((_QWORD *)this + 2) = GraphPrintDialog___vtable_at__16;
  v50 = (QT::QLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v50);
  v3 = 1;
  v52 = 0;
  v48 = (QT::QString *)ptr;
  v47 = (__m128i *)src;
  *(_OWORD *)src = 0;
  do
  {
    QT::QString::number(v48, v3, 10);
    v9 = v52;
    if ( !src[0] )
    {
      si128 = _mm_load_si128((const __m128i *)ptr);
      v5 = v55;
      v55 = 0;
      v49 = ptr[1];
      *(__m128i *)v46 = si128;
      *(_OWORD *)ptr = 0;
      sub_1B21C0(v47, 0, 1, 0, v6, v8);
      v11 = (char *)src[1];
      v12 = v52;
      goto LABEL_14;
    }
    if ( *(int *)src[0] <= 1 )
    {
      v15 = (char *)src[1];
      v16 = (void *)(((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *((_QWORD *)src[0] + 1) - 0xAAAAAAAAAAAAAAABLL * (((char *)src[1] - (char *)v16) >> 3) != v52 )
      {
        v43 = v55;
        v44 = (char *)src[1] + 24 * v52;
        v45 = _mm_loadh_ps((const double *)&ptr[1]);
        v55 = 0;
        *((_QWORD *)v44 + 2) = v43;
        *(__m128 *)v44 = v45;
        *(_OWORD *)ptr = 0;
        ++v52;
        goto LABEL_5;
      }
      if ( v52 )
      {
        v17 = ptr[1];
        v5 = v55;
        *(_OWORD *)ptr = 0;
        v49 = v17;
        v55 = 0;
        *(__m128 *)v46 = _mm_loadh_ps((const double *)&v49);
        if ( *(int *)src[0] > 1 )
          goto LABEL_31;
        goto LABEL_18;
      }
      if ( v16 != src[1] )
      {
        v22 = v55;
        v55 = 0;
        v23 = _mm_loadh_ps((const double *)&ptr[1]);
        *(_OWORD *)ptr = 0;
        *((_QWORD *)src[1] - 1) = v22;
        *(__m128 *)(v15 - 24) = v23;
        src[1] = (char *)src[1] - 24;
        ++v52;
        goto LABEL_5;
      }
    }
    v4 = _mm_load_si128((const __m128i *)ptr);
    v5 = v55;
    v49 = ptr[1];
    v55 = 0;
    *(__m128i *)v46 = v4;
    *(_OWORD *)ptr = 0;
    LOBYTE(v6) = 0;
    if ( *(int *)src[0] > 1 )
      goto LABEL_31;
LABEL_18:
    v11 = (char *)src[1];
    v18 = *((_QWORD *)src[0] + 1);
    v6 = (__int64)src[1] - (((unsigned __int64)src[0] + 31) & 0xFFFFFFFFFFFFFFF0LL);
    v12 = v52;
    v19 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 3);
    if ( (__int64)(v18 - v52 - v19) > 0 )
      goto LABEL_14;
    if ( v6 <= 0 || (v6 = 3 * v52, 3 * v52 >= 2 * v18) )
    {
LABEL_31:
      sub_1B21C0(v47, 0, 1, 0, v6, v8);
      v20 = (char *)src[1];
LABEL_32:
      v12 = v52;
      v11 = v20;
LABEL_14:
      v13 = (__m128i *)&v11[24 * v9];
      memmove(&v13[1].m128i_u64[1], v13, 24 * (v12 - v9));
      v14 = _mm_load_si128((const __m128i *)v46);
      v13[1].m128i_i64[0] = v5;
      *v13 = v14;
      ++v52;
      goto LABEL_5;
    }
    v6 = 0;
    v8 = 0;
    v20 = (char *)src[1] - 24 * v19;
    if ( v52 && v20 != src[1] && src[1] && v20 )
    {
      LOBYTE(v49) = 0;
      v21 = (char *)memmove(v20, src[1], 24 * v52);
      v6 = (unsigned __int8)v49;
      v20 = v21;
    }
    src[1] = v20;
    if ( !(_BYTE)v6 )
      goto LABEL_32;
    v7 = _mm_load_si128((const __m128i *)v46);
    *((_QWORD *)v20 - 1) = v5;
    *(__m128i *)(v20 - 24) = v7;
    src[1] = (char *)src[1] - 24;
    ++v52;
LABEL_5:
    if ( !src[0] || *(int *)src[0] > 1 )
      sub_1B21C0(v47, 0, 0, 0, v6, v8);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    ++v3;
  }
  while ( v3 != 10 );
  v24 = (QT::QComboBox *)operator new(0x28u);
  QT::QComboBox::QComboBox(v24, nullptr);
  *((_QWORD *)this + 7) = v24;
  v25 = QT::QComboBox::count(v24);
  v26 = v47;
  QT::QComboBox::insertItems(v24, v25, v47);
  v27 = (QT::QComboBox *)operator new(0x28u);
  QT::QComboBox::QComboBox(v27, nullptr);
  *((_QWORD *)this + 8) = v27;
  v28 = QT::QComboBox::count(v27);
  QT::QComboBox::insertItems(v27, v28, v26);
  v29 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v29);
  QT::QBoxLayout::setSpacing(v29, 20);
  v30 = operator new(0x28u);
  QT::QMetaObject::tr((QT::QMetaObject *)v56, off_8858E0, "Columns:", 0);
  sub_53BA20(v30, v56, 0);
  QT::QBoxLayout::addWidget(v29, v30, 0, 0);
  if ( v56[0] && !_InterlockedSub((volatile signed __int32 *)v56[0], 1u) )
    free(v56[0]);
  QT::QBoxLayout::addWidget(v29, *((_QWORD *)this + 8), 0, 0);
  v31 = operator new(0x28u);
  QT::QMetaObject::tr((QT::QMetaObject *)v56, off_8858E0, "Rows:", 0);
  sub_53BA20(v31, v56, 0);
  QT::QBoxLayout::addWidget(v29, v31, 0, 0);
  if ( v56[0] && !_InterlockedSub((volatile signed __int32 *)v56[0], 1u) )
    free(v56[0]);
  QT::QBoxLayout::addWidget(v29, *((_QWORD *)this + 7), 0, 0);
  v32 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v32);
  QT::QBoxLayout::setSpacing(v32, 20);
  v33 = (_QWORD *)operator new(0x48u);
  QT::QWidget::QWidget(v33, 0, 0);
  *v33 = &off_8719A8;
  v33[2] = GraphPrintPreviewWidget___vtable_at__16;
  v46[0] = (QT::QImage *)(v33 + 5);
  QT::QImage::QImage((QT::QImage *)(v33 + 5));
  v34 = QT::QString::fromUtf8(v53, 40, ":/IDAG/resources/graph_print_preview.png");
  QT::QImage::QImage(v48, (const QT::QString *)v53, nullptr);
  QT::QPaintDevice::QPaintDevice((QT::QPaintDevice *)v56);
  v35 = v55;
  v55 = 0;
  v56[0] = (char *)&`vtable for'QT::QImage + 16;
  v36 = (void *)v33[7];
  v33[7] = v35;
  v56[2] = v36;
  QT::QImage::~QImage((QT::QImage *)v56);
  QT::QImage::~QImage(v48);
  if ( v53[0] && !_InterlockedSub((volatile signed __int32 *)v53[0], 1u) )
    free(v53[0]);
  *((_QWORD *)this + 9) = v33;
  v33[8] = 0x100000001LL;
  QT::QBoxLayout::addLayout(v32, v29, 0);
  QT::QBoxLayout::addWidget(v32, *((_QWORD *)this + 9), 0, 0);
  v37 = (QT::QGroupBox *)operator new(0x28u);
  QT::QMetaObject::tr((QT::QMetaObject *)v56, off_8858E0, "Layout", 0);
  QT::QGroupBox::QGroupBox(v37, (const QT::QString *)v56, nullptr);
  if ( v56[0] && !_InterlockedSub((volatile signed __int32 *)v56[0], 1u) )
    free(v56[0]);
  QT::QWidget::setLayout(v37, v32);
  v38 = v50;
  QT::QBoxLayout::addWidget(v50, v37, 0, 0);
  v39 = (QT::QDialogButtonBox *)operator new(0x28u);
  QT::QDialogButtonBox::QDialogButtonBox(v39, 4195328, 0, v34);
  *((_QWORD *)this + 6) = v39;
  QT::QDialogButtonBox::setCenterButtons(v39, 1);
  QT::QBoxLayout::addWidget(v38, *((_QWORD *)this + 6), 0, 0);
  QT::QWidget::setLayout(this, v38);
  QT::QMetaObject::tr((QT::QMetaObject *)v56, off_8858E0, "Graph print page layout", 0);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)v56);
  if ( v56[0] && !_InterlockedSub((volatile signed __int32 *)v56[0], 1u) )
    free(v56[0]);
  QT::QObject::connect(v56, *((_QWORD *)this + 7), "2currentIndexChanged(int)", this, "1layoutChanged()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v56);
  QT::QObject::connect(v56, *((_QWORD *)this + 8), "2currentIndexChanged(int)", this, "1layoutChanged()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v56);
  QT::QObject::connect(v56, *((_QWORD *)this + 6), "2accepted()", this, "1accept()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v56);
  QT::QObject::connect(v56, *((_QWORD *)this + 6), "2rejected()", this, "1reject()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v56);
  QT::QWidget::setWindowFlags(this, *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0xFFFEFFFF);
  if ( src[0] && !_InterlockedSub((volatile signed __int32 *)src[0], 1u) )
  {
    v40 = (void **)src[1];
    v41 = (void **)((char *)src[1] + 24 * v52);
    if ( src[1] != v41 )
    {
      do
      {
        if ( *v40 && !_InterlockedSub((volatile signed __int32 *)*v40, 1u) )
          free(*v40);
        v40 += 3;
      }
      while ( v41 != v40 );
    }
    free(src[0]);
  }
  return v57 - __readfsqword(0x28u);
}
