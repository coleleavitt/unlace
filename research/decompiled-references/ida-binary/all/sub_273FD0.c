unsigned __int64 __fastcall sub_273FD0(
        QT::QObject *a1,
        QT::QObject *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  __m128i *v15; // rax
  __m128i si128; // xmm0
  _UNKNOWN **v17; // r14
  __int64 v18; // rax
  __int64 v19; // rbx
  void (__fastcall *v20)(__int64); // r15
  __int64 v21; // rax
  __m128i *v22; // rax
  __m128i v23; // xmm0
  __m128i *v24; // rax
  __m128i *v25; // r9
  void *v26; // rax
  __int64 v27; // rdi
  __m128i *v29; // rax
  __m128i v30; // xmm0
  __m128i *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  void *v38; // rsi
  char v39; // [rsp+0h] [rbp-88h]
  _BYTE v40[8]; // [rsp+8h] [rbp-80h] BYREF
  void *v41[2]; // [rsp+10h] [rbp-78h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  void *v43; // [rsp+38h] [rbp-50h]
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v11 = *((_QWORD *)a1 + 5);
  v44 = __readfsqword(0x28u);
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
  if ( v13 )
  {
    v14 = v13;
    v41[1] = nullptr;
    v41[0] = sub_271CA0;
    v43 = nullptr;
    ptr = &QT::QAbstractSlider::valueChanged;
    v15 = (__m128i *)operator new(0x20u);
    si128 = _mm_load_si128((const __m128i *)v41);
    v15->m128i_i32[0] = 1;
    v15->m128i_i64[1] = (__int64)sub_272390;
    v15[1] = si128;
    QT::QObject::connectImpl(v40, v14, &ptr, a1, v41, v15, 0, 0, &QT::QAbstractSlider::staticMetaObject);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v40);
  }
  else
  {
    QT::QWidget::windowTitle((QT::QWidget *)v41);
    QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v41);
    v38 = v43;
    if ( !v43 )
      v38 = &QT::QByteArray::_empty;
    sub_169700(
      (int)"Note: widget %s is of unknown type. It will not be possible to maintain its state vis-a-vis other widgets.\n",
      (__int64)v38,
      v32,
      v33,
      v34,
      v35,
      a3,
      a4,
      a5,
      a6,
      v36,
      v37,
      a9,
      a10,
      v39);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    if ( v41[0] && !_InterlockedSub((volatile signed __int32 *)v41[0], 1u) )
      free(v41[0]);
  }
  v17 = &off_8974E0;
  v18 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8974E0, a2);
  v19 = v18;
  if ( v18 )
  {
    v20 = *(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 544LL);
    v21 = operator new(0x28u);
    *(_DWORD *)(v21 + 8) = 2;
    *(_QWORD *)v21 = diffpos_sorting_strategy_t___vtable;
    *(_QWORD *)(v21 + 16) = v19;
    *(_QWORD *)(v21 + 24) = 0;
    *(_QWORD *)(v21 + 32) = 0;
    v20(v19);
    v41[1] = nullptr;
    v41[0] = sub_271D40;
    v43 = nullptr;
    ptr = sub_547F50;
    v22 = (__m128i *)operator new(0x20u);
    v23 = _mm_load_si128((const __m128i *)v41);
    v22->m128i_i32[0] = 1;
    v22->m128i_i64[1] = (__int64)sub_272410;
    v22[1] = v23;
    QT::QObject::connectImpl(v40, v19, &ptr, a1, v41, v22, 0, 0, &off_8974E0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v40);
    v41[1] = nullptr;
    v41[0] = sub_271FC0;
    v43 = nullptr;
    ptr = sub_547EF0;
    v24 = (__m128i *)operator new(0x20u);
    v24->m128i_i32[0] = 1;
    v25 = v24;
    v26 = sub_272510;
LABEL_5:
    v25->m128i_i64[1] = (__int64)v26;
    v25[1] = _mm_load_si128((const __m128i *)v41);
    QT::QObject::connectImpl(v40, v19, &ptr, a1, v41, v25, 0, 0, v17);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v40);
    goto LABEL_6;
  }
  v17 = &off_87B020;
  v19 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, a2);
  if ( v19 )
  {
    v41[1] = nullptr;
    v41[0] = sub_271D10;
    v43 = nullptr;
    ptr = sub_459CA0;
    v29 = (__m128i *)operator new(0x20u);
    v30 = _mm_load_si128((const __m128i *)v41);
    v29->m128i_i32[0] = 1;
    v29->m128i_i64[1] = (__int64)sub_272310;
    v29[1] = v30;
    QT::QObject::connectImpl(v40, v19, &ptr, a1, v41, v29, 0, 0, &off_87B020);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v40);
    v41[1] = nullptr;
    v41[0] = sub_271EE0;
    v43 = nullptr;
    ptr = sub_459CC0;
    v31 = (__m128i *)operator new(0x20u);
    v31->m128i_i32[0] = 1;
    v25 = v31;
    v26 = sub_272490;
    goto LABEL_5;
  }
LABEL_6:
  v27 = sub_4CF3F0(a1);
  if ( v27 )
    return sub_4D0F80(v27, 0);
  else
    return v44 - __readfsqword(0x28u);
}
