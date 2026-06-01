unsigned __int64 __fastcall sub_482750(QT::QApplication *this, int *a2, char **a3)
{
  __int64 v4; // r12
  QT::QObject *v5; // rax
  QT::QObject *v6; // r15
  const char *exception_class; // r14
  size_t v9; // rax
  size_t v10; // r13
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // r14
  size_t v12; // rax
  size_t v13; // r13
  size_t v14; // r13
  void *v15; // r14
  size_t v16; // r12
  void *v17; // r15
  int v18; // r8d
  __int64 v19; // rdx
  const char *v20; // rsi
  char *v21; // rax
  __m128i v22; // xmm0
  void *v23; // rdi
  __m128i *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // r15
  __m128i *v27; // rax
  __m128i v28; // xmm0
  __m128i *v29; // rax
  __m128i si128; // xmm0
  __int64 v32; // rax
  size_t v33; // r15
  void *v34; // rdi
  size_t v35; // r15
  QT::QTimer *v36; // [rsp+20h] [rbp-E0h]
  QT::QSignalMapper *v37; // [rsp+28h] [rbp-D8h]
  int v38; // [rsp+34h] [rbp-CCh]
  struct _Unwind_Exception *v39; // [rsp+38h] [rbp-C8h]
  _QWORD v40[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v41[24]; // [rsp+50h] [rbp-B0h] BYREF
  void *src; // [rsp+68h] [rbp-98h] BYREF
  size_t n[2]; // [rsp+70h] [rbp-90h]
  int private_1; // [rsp+80h] [rbp-80h]
  __m128i v45; // [rsp+90h] [rbp-70h] BYREF
  int v46; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v47; // [rsp+C8h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  QT::QApplication::QApplication(this, a2, a3, 395266);
  sub_478F50((__int64)this + 16, (const char *)this);
  v4 = 9;
  *((_QWORD *)this + 18) = 0;
  *((_OWORD *)this + 8) = 0;
  *(_OWORD *)((char *)this + 152) = 0;
  *((_QWORD *)this + 2) = &unk_8954A0;
  v5 = (QT::QApplication *)((char *)this + 168);
  *(_QWORD *)this = &app_t___vtable;
  do
  {
    v6 = v5;
    QT::QObject::QObject(v5, nullptr);
    *((_QWORD *)v6 + 2) = 0;
    v6 = (QT::QObject *)((char *)v6 + 32);
    *((_BYTE *)v6 - 8) = 0;
    *((_QWORD *)v6 - 4) = &object_lifecycle_monitor_t___vtable;
    v5 = v6;
  }
  while ( v4-- != 0 );
  *((_QWORD *)this + 61) = 10;
  QT::QObject::QObject((QT::QApplication *)((char *)this + 496), nullptr);
  *((_QWORD *)this + 64) = 0;
  *((_BYTE *)this + 520) = 0;
  *(_OWORD *)((char *)this + 536) = 0;
  *((_QWORD *)this + 62) = &object_lifecycle_monitor_t___vtable;
  *((_DWORD *)this + 132) = 0;
  v37 = (QT::QApplication *)((char *)this + 552);
  QT::QSignalMapper::QSignalMapper((QT::QApplication *)((char *)this + 552), nullptr);
  *((_DWORD *)this + 152) = 0;
  *((_QWORD *)this + 78) = (char *)this + 608;
  *((_QWORD *)this + 79) = (char *)this + 608;
  *((_QWORD *)this + 77) = 0;
  *((_QWORD *)this + 80) = 0;
  *((_QWORD *)this + 81) = 1;
  *(_OWORD *)((char *)this + 568) = 0;
  *(_OWORD *)((char *)this + 584) = 0;
  v36 = (QT::QApplication *)((char *)this + 656);
  QT::QTimer::QTimer((QT::QApplication *)((char *)this + 656), nullptr);
  *((_QWORD *)this + 84) = 0;
  *((_DWORD *)this + 163) = 8;
  v39 = (struct _Unwind_Exception *)off_86C740;
  do
  {
    memset(v41, 0, sizeof(v41));
    src = nullptr;
    exception_class = (const char *)v39->exception_class;
    private_1 = 0;
    *(_OWORD *)n = 0;
    if ( exception_class )
    {
      v9 = strlen(exception_class);
      v10 = v9;
      if ( v9 )
      {
        v33 = v9 + 1;
        *(_QWORD *)v41 = qvector_reserve(v41, 0, v9 + 1, 1);
        *(_QWORD *)&v41[8] = v33;
        memmove(*(void **)v41, exception_class, v10);
        *(_BYTE *)(*(_QWORD *)v41 + v10) = 0;
      }
    }
    exception_cleanup = v39->exception_cleanup;
    if ( exception_cleanup && (v12 = strlen((const char *)v39->exception_cleanup), (v13 = v12) != 0) )
    {
      v34 = src;
      v35 = v12 + 1;
      if ( n[1] < v12 + 1 )
      {
        src = (void *)qvector_reserve(&src, src, v35, 1);
        v34 = src;
      }
      n[0] = v35;
      memmove(v34, exception_cleanup, v13);
      *((_BYTE *)src + v13) = 0;
    }
    else
    {
      n[0] = 0;
    }
    v14 = *(_QWORD *)&v41[8];
    v15 = nullptr;
    private_1 = v39->private_1;
    if ( *(_QWORD *)&v41[8] )
    {
      v15 = (void *)qalloc_or_throw(*(_QWORD *)&v41[8]);
      memcpy(v15, *(const void **)v41, v14);
    }
    v16 = n[0];
    v17 = nullptr;
    if ( n[0] )
    {
      v17 = (void *)qalloc_or_throw(n[0]);
      memcpy(v17, src, v16);
    }
    v18 = private_1;
    v19 = *((_QWORD *)this + 19);
    v20 = *((const char **)this + 18);
    v46 = private_1;
    if ( *((_QWORD *)this + 20) < (unsigned __int64)(v19 + 1) )
    {
      v38 = private_1;
      v32 = qvector_reserve((char *)this + 144, v20, v19 + 1, 56);
      *((_QWORD *)this + 18) = v32;
      v19 = *((_QWORD *)this + 19);
      v20 = (const char *)v32;
      v18 = v38;
    }
    v21 = (char *)&v20[56 * v19];
    *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
    v22 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
    *(_QWORD *)v21 = v15;
    *((_QWORD *)v21 + 3) = v17;
    *((_DWORD *)v21 + 12) = v18;
    *((__m128i *)v21 + 2) = v22;
    v23 = src;
    ++*((_QWORD *)this + 19);
    if ( v23 )
    {
      n[0] = 0;
      *(double *)v22.m128i_i64 = qfree(v23, v20);
    }
    if ( *(_QWORD *)v41 )
    {
      *(_QWORD *)&v41[8] = 0;
      qfree(*(_QWORD *)v41, v20, *(double *)v22.m128i_i64);
    }
    v39 = (struct _Unwind_Exception *)((char *)v39 + 24);
  }
  while ( &`vtable for'dirtree_widget_qmodel_visitor_t != (__int64 *)v39 );
  QT::QObject::connect(
    &v45,
    this,
    "2focusChanged(QWidget *, QWidget *)",
    this,
    "1on_focus_changed(QWidget *, QWidget *)",
    1);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v45);
  v45.m128i_i64[1] = 0;
  v40[1] = 0;
  v45.m128i_i64[0] = (__int64)sub_542830;
  v40[0] = &QT::QTimer::timeout;
  v24 = (__m128i *)operator new(0x20u);
  v25 = _mm_load_si128(&v45);
  v24->m128i_i32[0] = 1;
  v24->m128i_i64[1] = (__int64)sub_4785F0;
  v24[1] = v25;
  QT::QObject::connectImpl(v41, v36, v40, this, &v45, v24, 0, 0, &QT::QTimer::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v41);
  QT::QTimer::setSingleShot(v36, 1);
  v45.m128i_i64[1] = 0;
  v45.m128i_i64[0] = (__int64)sub_47F9F0;
  v26 = QT::QGuiApplication::styleHints(v36);
  *(_QWORD *)&v41[8] = 0;
  *(_QWORD *)v41 = &QT::QStyleHints::colorSchemeChanged;
  v27 = (__m128i *)operator new(0x20u);
  v28 = _mm_load_si128(&v45);
  v27->m128i_i64[1] = (__int64)sub_4785F0;
  v27->m128i_i32[0] = 1;
  v27[1] = v28;
  QT::QObject::connectImpl(v40, v26, v41, this, &v45, v27, 0, 0, &QT::QStyleHints::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v40);
  QT::QCoreApplication::setAttribute(28, 0);
  *(_QWORD *)&v41[8] = 0;
  *(_QWORD *)v41 = sub_47BF70;
  v45.m128i_i64[1] = 0;
  v45.m128i_i64[0] = (__int64)&QT::QSignalMapper::mappedString;
  v29 = (__m128i *)operator new(0x20u);
  v29->m128i_i32[0] = 1;
  si128 = _mm_load_si128((const __m128i *)v41);
  v29->m128i_i64[1] = (__int64)&loc_478480;
  v29[1] = si128;
  QT::QObject::connectImpl(v40, v37, &v45, this, v41, v29, 0, 0, &QT::QSignalMapper::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v40);
  return v47 - __readfsqword(0x28u);
}
