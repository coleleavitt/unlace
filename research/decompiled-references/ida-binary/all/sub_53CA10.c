QT::QToolBar *__fastcall sub_53CA10(_QWORD *a1, const char *a2, const char *a3, __int64 a4, double a5)
{
  QT::QToolBar *v6; // r13
  size_t v7; // rax
  int v8; // eax
  size_t v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v13; // rax
  void *v14; // [rsp+8h] [rbp-50h]
  void *ptr[9]; // [rsp+10h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( !a2 || !*a2 )
  {
    if ( !under_debugger )
      interr(40413, a2, a3, a4, a5);
    BUG();
  }
  v6 = (QT::QToolBar *)operator new(0x28u);
  v7 = 0;
  if ( a3 )
    v7 = strlen(a3);
  QT::QString::fromUtf8(ptr, v7, a3);
  QT::QToolBar::QToolBar(v6, (const QT::QString *)ptr, nullptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)ptr, (const QT::QFont *)(a1[4] + 56LL));
  v8 = QT::QFontMetrics::height((QT::QFontMetrics *)ptr);
  v14 = (void *)_mm_shuffle_epi32(_mm_cvtsi32_si128(v8 + 8 - (v8 + 8) % 16), 224).m128i_u64[0];
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)ptr);
  ptr[0] = v14;
  QT::QToolBar::setIconSize(v6, ptr);
  v9 = strlen(a2);
  QT::QString::fromUtf8(ptr, v9, a2);
  QT::QObject::doSetObjectName(v6, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v10 = a1[10];
  v11 = a1[9];
  if ( a1[11] < (unsigned __int64)(v10 + 1) )
  {
    v13 = qvector_reserve(a1 + 9, v11, v10 + 1, 8);
    a1[9] = v13;
    v11 = v13;
    v10 = a1[10];
  }
  *(_QWORD *)(v11 + 8 * v10) = v6;
  ++a1[10];
  return v6;
}
