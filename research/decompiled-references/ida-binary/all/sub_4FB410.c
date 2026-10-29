QT::QComboBox *__fastcall sub_4FB410(
        QT::QObject *a1,
        const QT::QString *a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned int v12; // eax
  QT::QComboBox *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  int v17; // r15d
  int v18; // eax
  __int64 v19; // rdx
  const char *v20; // rsi
  double v21; // xmm0_8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  unsigned __int64 v25; // rdx
  size_t v26; // rax
  const char *v27; // rbp
  QT::QObject *v28; // rax
  unsigned __int64 v29; // rdx
  size_t v30; // rax
  const char *v31; // rbp
  volatile signed __int32 *v32; // r14
  char v34; // r15
  const char *v35; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+8h] [rbp-C0h]
  void *v37[2]; // [rsp+20h] [rbp-A8h] BYREF
  void *v38; // [rsp+30h] [rbp-98h]
  void *ptr[4]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v40; // [rsp+60h] [rbp-68h] BYREF
  __int64 v41; // [rsp+70h] [rbp-58h]
  __int64 v42; // [rsp+78h] [rbp-50h]
  unsigned __int64 v43; // [rsp+88h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v12 = sub_4F93E0((__int64)a1, *(_BYTE *)(a3 + 16), *(_DWORD *)(a3 + 12));
  v13 = (QT::QComboBox *)(*(__int64 (__fastcall **)(QT::QObject *, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 480LL))(
                           a1,
                           1,
                           v12,
                           a3);
  v14 = QT::QComboBox::completer(v13);
  if ( v14 )
  {
    v15 = v14;
    QT::QCompleter::setCompletionMode(v14, 0);
    QT::QCompleter::setCaseSensitivity(v15, 1);
  }
  if ( *(int *)(a3 + 8) > 0 )
  {
    v16 = QT::QComboBox::view(v13);
    QT::QAbstractItemView::setTextElideMode(v16, 2);
    QT::QWidget::setSizePolicy(v13, &stru_50000);
    v17 = *(_DWORD *)(a3 + 8);
    QT::QString::fromUtf8(ptr, 1, "X");
    v18 = sub_4F9CA0((QT::QString *)ptr, v17);
    QT::QWidget::setFixedWidth(v13, *((_DWORD *)a1 + 74) + v18);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  QT::QComboBox::setEditable(v13, 1);
  sub_4FB100(v13, a2);
  v19 = (unsigned int)*(char *)(a3 + 16);
  v20 = *(const char **)(a3 + 40);
  v21 = 0.0;
  v35 = nullptr;
  v36 = 0;
  if ( (unsigned __int8)sub_4F9450(
                          (__int64)a1,
                          v20,
                          v19,
                          (__int64 *)&v35,
                          0,
                          v22,
                          (__m128)0LL,
                          a5,
                          a6,
                          a7,
                          v23,
                          v24,
                          a10,
                          a11) )
  {
    if ( !(unsigned int)QT::QComboBox::count(v13) )
    {
      v41 = 0;
      v42 = 2;
      v40 = 0;
      if ( (_QWORD)v36 )
      {
        v26 = v36 - 1;
        v27 = v35;
        v25 = (unsigned __int64)(v36 - 1) >> 63;
      }
      else
      {
        LOBYTE(v25) = 0;
        v26 = 0;
        v27 = &s1;
      }
      if ( !v27 || (_BYTE)v25 )
      {
        v26 = 0;
        if ( v27 )
          v26 = strlen(v27);
      }
      v21 = QT::QString::fromUtf8(ptr, v26, v27);
      QT::QIcon::QIcon((QT::QIcon *)v37);
      QT::QComboBox::insertItem(v13, 0, (const QT::QIcon *)v37, (const QT::QString *)ptr, (const QT::QVariant *)&v40);
      QT::QIcon::~QIcon((QT::QIcon *)v37);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      QT::QVariant::~QVariant((QT::QVariant *)&v40);
LABEL_17:
      QT::QComboBox::setCurrentIndex(v13, 0);
      v28 = (QT::QObject *)QT::QComboBox::lineEdit(v13);
      v20 = (const char *)a1;
      QT::QObject::installEventFilter(v28, a1);
      goto LABEL_33;
    }
    if ( (_QWORD)v36 )
    {
      v30 = v36 - 1;
      v31 = v35;
      v29 = (unsigned __int64)(v36 - 1) >> 63;
    }
    else
    {
      LOBYTE(v29) = 0;
      v30 = 0;
      v31 = &s1;
    }
    if ( !v31 || (_BYTE)v29 )
    {
      v30 = 0;
      if ( v31 )
        v30 = strlen(v31);
    }
    v21 = QT::QString::fromUtf8(v37, v30, v31);
    QT::QComboBox::itemText((QT::QComboBox *)ptr, (int)v13);
    v32 = (volatile signed __int32 *)ptr[0];
    if ( v38 == ptr[2] )
    {
      v34 = QT::QtPrivate::equalStrings(v38, ptr[1], v38, v37[1]);
      if ( v32 && !_InterlockedSub(v32, 1u) )
        free(ptr[0]);
      if ( v34 )
        goto LABEL_27;
    }
    else if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      free(ptr[0]);
    }
    v21 = 0.0;
    v41 = 0;
    v42 = 2;
    v40 = 0;
    QT::QIcon::QIcon((QT::QIcon *)ptr);
    QT::QComboBox::insertItem(v13, 0, (const QT::QIcon *)ptr, (const QT::QString *)v37, (const QT::QVariant *)&v40);
    QT::QIcon::~QIcon((QT::QIcon *)ptr);
    QT::QVariant::~QVariant((QT::QVariant *)&v40);
LABEL_27:
    if ( v37[0] && !_InterlockedSub((volatile signed __int32 *)v37[0], 1u) )
      free(v37[0]);
    goto LABEL_17;
  }
  if ( v13 )
    (*(void (__fastcall **)(QT::QComboBox *))(*(_QWORD *)v13 + 32LL))(v13);
  v13 = nullptr;
LABEL_33:
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, v20, v21);
  }
  return v13;
}
