unsigned __int64 __fastcall sub_365390(
        QT::QDialog *this,
        __int64 a2,
        unsigned int *a3,
        double a4,
        double a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 i; // r13
  size_t v16; // rax
  char *v17; // r15
  unsigned __int64 v18; // rdx
  double v19; // xmm0_8
  __int64 v20; // rsi
  QT::QComboBox *v21; // r15
  size_t v22; // rax
  char *v23; // rbx
  unsigned __int64 v24; // rdx
  QT::QComboBox *v25; // r14
  __int64 v26; // rax
  __m128i si128; // xmm0
  char *v28; // rsi
  QT::QAbstractButton *v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rsi
  double v32; // xmm4_8
  double v33; // xmm5_8
  __int64 v34; // rax
  __int64 v36; // rbp
  __int64 v37; // rax
  size_t v38; // rax
  const char *v39; // r13
  size_t v40; // rdx
  __int64 Child_helper; // rdi
  __int64 v42; // rax
  int v43; // [rsp+4h] [rbp-F4h]
  _BYTE v45[8]; // [rsp+28h] [rbp-D0h] BYREF
  char *v46; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v47; // [rsp+38h] [rbp-C0h]
  char *s; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v49; // [rsp+58h] [rbp-A0h]
  void *ptr[4]; // [rsp+70h] [rbp-88h] BYREF
  __int128 v51; // [rsp+90h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-58h]
  __int64 v53; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v54; // [rsp+B8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  sub_53A8A0(this, a2, 0);
  *((_QWORD *)this + 2) = OptionsDialog___vtable_at__16;
  *(_QWORD *)this = &OptionsDialog___vtable;
  *((_QWORD *)this + 6) = get_module_data((unsigned int)dword_8CD7F0);
  *((_QWORD *)this + 7) = operator new(0x800u);
  if ( !qword_8CAC18 )
  {
    v42 = operator new(0x18u);
    *(_QWORD *)v42 = 0;
    qword_8CAC18 = (_QWORD *)v42;
    *(_OWORD *)(v42 + 8) = 0;
  }
  *((_BYTE *)this + 69) = sub_193C10();
  sub_3588E0(*((_QWORD *)this + 7), (_DWORD)this, v11, v12, v13, v14);
  for ( i = 0; i != 10; ++i )
  {
    v46 = nullptr;
    v20 = (unsigned __int8)byte_5E84D0[i];
    v47 = 0;
    s = nullptr;
    v49 = 0;
    if ( (_BYTE)v20 == 0xFF )
    {
      *((_DWORD *)this + 16) = i;
      v26 = qvector_reserve(&v46, 0, 21, 1);
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DD120);
      *(_DWORD *)(v26 + 16) = 1684370529;
      v46 = (char *)v26;
      *(_QWORD *)&v47 = 21;
      *(__m128i *)v26 = si128;
      v46[20] = 0;
      v28 = s;
      if ( *((_QWORD *)&v49 + 1) <= 0x37u )
      {
        s = (char *)qvector_reserve(&s, s, 56, 1);
        v28 = s;
      }
      *(_QWORD *)&v49 = 56;
      *(__m128i *)v28 = _mm_load_si128((const __m128i *)&xmmword_5DD130);
      *((__m128i *)v28 + 1) = _mm_load_si128((const __m128i *)&xmmword_5DD140);
      *((__m128i *)v28 + 2) = _mm_load_si128((const __m128i *)&xmmword_5DD150);
      *(_QWORD *)(v28 + 47) = 0x7372657463617261LL;
      s[55] = 0;
    }
    else
    {
      print_strlit_type(&v46, v20, &s, 0);
    }
    v21 = *(QT::QComboBox **)(*((_QWORD *)this + 7) + 896LL);
    v52 = 0;
    v53 = 2;
    v51 = 0;
    if ( (_QWORD)v47 )
    {
      v22 = v47 - 1;
      v23 = v46;
      v24 = (unsigned __int64)(v47 - 1) >> 63;
      if ( v46 )
        goto LABEL_18;
    }
    else
    {
      v23 = (char *)&s1;
      LOBYTE(v24) = 0;
      v22 = 0;
      if ( &s1 )
      {
LABEL_18:
        if ( !(_BYTE)v24 )
          goto LABEL_19;
      }
    }
    v22 = 0;
    if ( v23 )
      v22 = strlen(v23);
LABEL_19:
    QT::QString::fromUtf8(ptr, v22, v23);
    v43 = QT::QComboBox::count(v21);
    QT::QIcon::QIcon((QT::QIcon *)v45);
    QT::QComboBox::insertItem(v21, v43, (const QT::QIcon *)v45, (const QT::QString *)ptr, (const QT::QVariant *)&v51);
    QT::QIcon::~QIcon((QT::QIcon *)v45);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    QT::QVariant::~QVariant((QT::QVariant *)&v51);
    v25 = *(QT::QComboBox **)(*((_QWORD *)this + 7) + 896LL);
    if ( (_QWORD)v49 )
    {
      v16 = v49 - 1;
      v17 = s;
      v18 = (unsigned __int64)(v49 - 1) >> 63;
      if ( s )
        goto LABEL_5;
    }
    else
    {
      v17 = (char *)&s1;
      LOBYTE(v18) = 0;
      v16 = 0;
      if ( &s1 )
      {
LABEL_5:
        if ( !(_BYTE)v18 )
          goto LABEL_6;
      }
    }
    v16 = 0;
    if ( v17 )
      v16 = strlen(v17);
LABEL_6:
    v19 = QT::QString::fromUtf8(ptr, v16, v17);
    QT::QVariant::QVariant((QT::QVariant *)&v51, (const QT::QString *)ptr);
    QT::QComboBox::setItemData(v25, i, (const QT::QVariant *)&v51, 3);
    QT::QVariant::~QVariant((QT::QVariant *)&v51);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( s )
    {
      *(_QWORD *)&v49 = 0;
      v19 = qfree(s, (const char *)(unsigned int)i, v19);
    }
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      v19 = qfree(v46, (const char *)(unsigned int)i, v19);
    }
  }
  QT::QObject::connect(ptr, *(_QWORD *)(*((_QWORD *)this + 7) + 2040LL), "2accepted()", this, "1accept()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, *(_QWORD *)(*((_QWORD *)this + 7) + 2040LL), "2rejected()", this, "1reject()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v29 = (QT::QAbstractButton *)QT::QDialogButtonBox::button(*(_QWORD *)(*((_QWORD *)this + 7) + 2040LL), 0x1000000);
  sub_17F3A0((QT::QAction *)ptr);
  QT::QAbstractButton::setShortcut(v29, (const QT::QKeySequence *)ptr);
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)ptr);
  v30 = QT::QDialogButtonBox::button(*(_QWORD *)(*((_QWORD *)this + 7) + 2040LL), 0x1000000);
  QT::QObject::connect(ptr, v30, "2clicked()", this, "1help_clicked()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v31 = (unsigned int)dword_8CF098;
  if ( a3 )
  {
    v31 = *a3;
    dword_8CF098 = *a3;
  }
  QT::QTabWidget::setCurrentIndex(*(QT::QTabWidget **)(*((_QWORD *)this + 7) + 16LL), v31);
  sub_34F6D0(v19, (__int64)this, v31);
  sub_356650((__int64)this);
  sub_358390((__int64)this, v19, (__m128)0LL, a6, a7, v32, v33, a10, a11);
  sub_356C50((__int64)this);
  sub_363FF0((__int64)this);
  sub_357220((__int64)this);
  sub_364F20((__int64)this);
  sub_357930((__int64)this);
  v34 = QT::QDialog::minimumSizeHint(this);
  HIDWORD(s) = HIDWORD(v34);
  LODWORD(s) = v34 + 10;
  QT::QWidget::resize(this, &s);
  QT::QWidget::setWindowFlags(this, *(_DWORD *)(*((_QWORD *)this + 4) + 12LL) & 0xFFFEFFFF);
  ptr[0] = (void *)QT::QDialog::sizeHint(this);
  QT::QWidget::setFixedSize(this, ptr);
  if ( a3 )
  {
    if ( *((_QWORD *)a3 + 2) > 1u )
    {
      v36 = QT::QTabWidget::currentWidget(*(QT::QTabWidget **)(*((_QWORD *)this + 7) + 16LL));
      if ( v36 )
      {
        v37 = *((_QWORD *)a3 + 2);
        if ( v37 )
        {
          v38 = v37 - 1;
          v39 = *((const char **)a3 + 1);
          v40 = v38 >> 63;
        }
        else
        {
          LOBYTE(v40) = 0;
          v38 = 0;
          v39 = &s1;
        }
        if ( !v39 || (_BYTE)v40 )
        {
          v38 = 0;
          if ( v39 )
            v38 = strlen(v39);
        }
        QT::QString::fromUtf8(ptr, v38, v39);
        Child_helper = QT::qt_qFindChild_helper(
                         v36,
                         ptr[1],
                         (unsigned __int64)ptr[2] | 0x8000000000000000LL,
                         &QT::QWidget::staticMetaObject,
                         1);
        if ( Child_helper )
          QT::QWidget::setFocus(Child_helper, 7);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
      }
    }
  }
  return v54 - __readfsqword(0x28u);
}
