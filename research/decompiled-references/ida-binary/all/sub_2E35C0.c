unsigned __int64 __fastcall sub_2E35C0(QT::QWidget **this, __int64 a2)
{
  size_t v4; // rax
  char *v5; // r12
  unsigned __int64 v6; // rdx
  const char *v7; // rsi
  double v8; // xmm0_8
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rdi
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  double v15; // xmm1_8
  double v16; // xmm0_8
  double v17; // xmm0_8
  int v18; // r15d
  int v19; // r15d
  QT::QWidget *v20; // r13
  size_t v21; // rax
  char *v22; // r14
  unsigned __int64 v23; // rdx
  const char *v24; // rsi
  double v25; // xmm0_8
  double v26; // xmm0_8
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // ebx
  __int64 v30; // rax
  void *ptr[4]; // [rsp+0h] [rbp-78h] BYREF
  char *s; // [rsp+20h] [rbp-58h] BYREF
  __int64 v34; // [rsp+28h] [rbp-50h]
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  sub_1FA630((__int64)&s);
  if ( v34 )
  {
    v4 = v34 - 1;
    v5 = s;
    v6 = (unsigned __int64)(v34 - 1) >> 63;
  }
  else
  {
    LOBYTE(v6) = 0;
    v4 = 0;
    v5 = (char *)&s1;
  }
  if ( !v5 || (_BYTE)v6 )
  {
    v4 = 0;
    if ( v5 )
      v4 = strlen(v5);
  }
  v7 = (const char *)v4;
  v8 = QT::QString::fromUtf8(ptr, v4, v5);
  if ( s )
  {
    v34 = 0;
    qfree(s, v7, v8);
  }
  if ( (unsigned __int8)sub_2E3510((__int64)ptr) || !dbg )
  {
    v19 = 75;
  }
  else
  {
    v9 = *(int *)(dbg + 64);
    if ( (int)v9 <= 0 )
    {
      v11 = 0;
    }
    else
    {
      v10 = *(_QWORD *)(dbg + 56);
      v11 = 0;
      v12 = v10 + 32 * v9;
      v13 = (_QWORD *)(qword_8CC390 + 8);
      do
      {
        if ( (*(_BYTE *)(v10 + 8) & 0x10) != 0 )
        {
          v14 = *v13 - 1LL;
          if ( v11 >= v14 )
            v14 = v11;
          if ( *v13 )
            v11 = v14;
        }
        v10 += 32;
        v13 += 7;
      }
      while ( v12 != v10 );
    }
    QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)&s, (const QT::QFont *)(*(_QWORD *)(a2 + 32) + 56LL));
    v15 = QT::QFontMetricsF::horizontalAdvance(&s, 88);
    if ( (v11 & 0x8000000000000000LL) != 0LL )
      v16 = (double)(int)(v11 & 1 | (v11 >> 1)) + (double)(int)(v11 & 1 | (v11 >> 1));
    else
      v16 = (double)(int)v11;
    v17 = v16 * v15;
    if ( v17 >= 9.223372036854776e18 )
      v18 = (int)(v17 - 9.223372036854776e18);
    else
      v18 = (int)v17;
    v19 = v18 + 10;
    QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)&s);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  HIDWORD(s) = v19;
  LODWORD(s) = 9;
  v34 = -1;
  sub_2ED730((QT::QSplitter *)this);
  *this = (QT::QWidget *)&IDAViewHost___vtable;
  *(this + 2) = (QT::QWidget *)IDAViewHost___vtable_at__16;
  sub_2EE0C0((QT::QSplitter *)this);
  v20 = nullptr;
  if ( !*((_BYTE *)this + 64) )
    v20 = *(this + 7);
  sub_1FA630((__int64)&s);
  if ( v34 )
  {
    v21 = v34 - 1;
    v22 = s;
    v23 = (unsigned __int64)(v34 - 1) >> 63;
  }
  else
  {
    LOBYTE(v23) = 0;
    v21 = 0;
    v22 = (char *)&s1;
  }
  if ( !v22 || (_BYTE)v23 )
  {
    v21 = 0;
    if ( v22 )
      v21 = strlen(v22);
  }
  v24 = (const char *)v21;
  v25 = QT::QString::fromUtf8(ptr, v21, v22);
  if ( s )
  {
    v34 = 0;
    v25 = qfree(s, v24, v25);
  }
  v26 = QT::QString::fromUtf8(&s, 17, "IDAView host for ", v25);
  QT::QString::append((QT::QString *)&s, (const QT::QString *)ptr);
  QT::QWidget::setAccessibleName((QT::QWidget *)this, (const QT::QString *)&s);
  if ( s && !_InterlockedSub((volatile signed __int32 *)s, 1u) )
    free(s);
  (*(void (__fastcall **)(char **, _QWORD *, _QWORD, double))(*QT::QCoreApplication::self + 144LL))(
    &s,
    QT::QCoreApplication::self,
    unk_8CA050,
    v26);
  QT::QWidget::setWindowIcon((QT::QWidget *)this, (const QT::QIcon *)&s);
  QT::QIcon::~QIcon((QT::QIcon *)&s);
  QT::QWidget::setWindowTitle((QT::QWidget *)this, (const QT::QString *)ptr);
  QT::QWidget::setFocusProxy((QT::QWidget *)this, v20);
  QT::QObject::connect(&s, v20, "2placeChanged(const place_t *)", this, "1onViewPlaceChanged(const place_t *)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&s);
  QT::QObject::connect(
    &s,
    v20,
    "2rendererChanged(tcc_renderer_type_t)",
    this,
    "1onRendererChanged(tcc_renderer_type_t)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&s);
  v29 = sub_1EB590((__int64)v20, (__int64)v20, v27, v28, v26) - 2;
  v30 = sub_2EDA50(this, 1);
  (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v30 + 104LL))(v30, v29 > 1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v35 - __readfsqword(0x28u);
}
