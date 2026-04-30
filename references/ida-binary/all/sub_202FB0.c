unsigned __int64 __fastcall sub_202FB0(QT::QWidget *a1, char *s, int *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  __m128i v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  size_t v15; // rax
  double v16; // xmm0_8
  int v17; // eax
  _QWORD *v18; // rdi
  void (__fastcall *v19)(__int64, __int64); // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  QT::QScrollBar *v25; // r13
  __int64 v26; // rax
  QT::QScrollBar *v27; // r13
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  const __m128i *v31; // rax
  __int64 v32; // rdx
  __m128i v33; // xmm0
  __int64 v34; // r12
  __m128i *v35; // rax
  __m128i v36; // xmm0
  QT::QObject *v38; // [rsp+0h] [rbp-D0h]
  QT::QObject *v39; // [rsp+8h] [rbp-C8h]
  __int64 v40; // [rsp+10h] [rbp-C0h]
  _BYTE v41[8]; // [rsp+38h] [rbp-98h] BYREF
  __m128i v42; // [rsp+40h] [rbp-90h] BYREF
  void *ptr[4]; // [rsp+50h] [rbp-80h] BYREF
  _BYTE v44[40]; // [rsp+70h] [rbp-60h] BYREF
  unsigned __int64 v45; // [rsp+98h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  QT::QAbstractScrollArea::QAbstractScrollArea(a1, *((QT::QWidget **)a3 + 18));
  v5 = QT::QMetaObject::className((QT::QMetaObject *)&off_87B020);
  sub_525E40((char *)a1 + 40, qword_85DD40, 126, v5);
  sub_2778A0((char *)a1 + 104, a1);
  *((_QWORD *)a1 + 22) = 0;
  *((_QWORD *)a1 + 23) = -1;
  *((_OWORD *)a1 + 10) = 0;
  *(_QWORD *)a1 = &CustomIDAMemo___vtable;
  *((_QWORD *)a1 + 2) = CustomIDAMemo___vtable_at__16;
  *((_QWORD *)a1 + 13) = CustomIDAMemo___vtable_at__104;
  *((_QWORD *)a1 + 5) = CustomIDAMemo___vtable_at__40;
  *((_QWORD *)a1 + 24) = 0;
  v6 = (unsigned int)dword_8CD7F0;
  *((_QWORD *)a1 + 25) = 0;
  *((_QWORD *)a1 + 26) = get_module_data(v6);
  *((_QWORD *)a1 + 27) = a1;
  *((_QWORD *)a1 + 28) = 0;
  *((_QWORD *)a1 + 29) = 0;
  *((_BYTE *)a1 + 240) = 1;
  *((_QWORD *)a1 + 31) = 0;
  *((_DWORD *)a1 + 64) = 0;
  *((_DWORD *)a1 + 66) = 112;
  *((_QWORD *)a1 + 46) = 0;
  *((_QWORD *)a1 + 47) = 0;
  *((_OWORD *)a1 + 17) = 0;
  *((_OWORD *)a1 + 18) = 0;
  *((_OWORD *)a1 + 19) = 0;
  *((_OWORD *)a1 + 20) = 0;
  *((_OWORD *)a1 + 21) = 0;
  *((_OWORD *)a1 + 22) = 0;
  sub_1E9980((__int64)a1 + 384, (__int64)a1);
  sub_1F5FE0((__int64)a1 + 528, (__int64)a1);
  v7 = *a3;
  *((_BYTE *)a1 + 560) = 0;
  *((_DWORD *)a1 + 142) = 0;
  *((_DWORD *)a1 + 141) = v7;
  QT::QObject::QObject((QT::QWidget *)((char *)a1 + 576), nullptr);
  *((_QWORD *)a1 + 74) = 0;
  *((_DWORD *)a1 + 154) = 8;
  *(_OWORD *)((char *)a1 + 600) = 0;
  *((_QWORD *)a1 + 72) = &highlight_t___vtable;
  QT::QObject::QObject((QT::QWidget *)((char *)a1 + 624), nullptr);
  *((_QWORD *)a1 + 80) = 0;
  *((_BYTE *)a1 + 664) = 0;
  *((_BYTE *)a1 + 696) = 0;
  *((_QWORD *)a1 + 78) = &bookmarks_place_cache_t___vtable;
  *((_QWORD *)a1 + 84) = 0;
  *(_OWORD *)((char *)a1 + 648) = 0;
  *(_OWORD *)((char *)a1 + 680) = 0;
  v8 = *((_QWORD *)a3 + 6);
  *((_QWORD *)a1 + 97) = 0;
  *((_QWORD *)a1 + 91) = v8;
  *((_WORD *)a1 + 370) = 0;
  *((_DWORD *)a1 + 204) = 0;
  *((_QWORD *)a1 + 103) = 0;
  *((_DWORD *)a1 + 212) = 0;
  *((_QWORD *)a1 + 107) = 0;
  *((_OWORD *)a1 + 49) = 0;
  *((_OWORD *)a1 + 50) = 0;
  *((_OWORD *)a1 + 52) = 0;
  *((_OWORD *)a1 + 54) = 0;
  v9 = _mm_loadu_si128((const __m128i *)(a3 + 2));
  *((_WORD *)a1 + 440) = 0;
  v10 = *((_QWORD *)a3 + 3);
  *((_DWORD *)a1 + 184) = 0;
  *((_QWORD *)a1 + 113) = v10;
  LODWORD(v10) = a3[24];
  *((_DWORD *)a1 + 228) = 0;
  *((_DWORD *)a1 + 236) = v10;
  *((_QWORD *)a1 + 117) = 0;
  *(_OWORD *)((char *)a1 + 744) = 0;
  *(__m128i *)((char *)a1 + 888) = v9;
  *(_OWORD *)((char *)a1 + 920) = 0;
  *(_QWORD *)((char *)a1 + 948) = 0;
  *((_WORD *)a1 + 478) = 0x8000;
  LODWORD(v10) = a3[14];
  *((_DWORD *)a1 + 240) = 5;
  *((_DWORD *)a1 + 241) = v10;
  *((_WORD *)a1 + 484) = 0;
  *((_OWORD *)a1 + 61) = 0;
  *((_QWORD *)a1 + 124) = 0;
  QT::QObject::connect(ptr, (char *)a1 + 576, "2changed()", a1, "1on_highlights_changed()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, (char *)a1 + 624, "2local_changed()", a1, "1on_bookmarks_place_cache_local_changed()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  if ( dword_8CC5F0 )
    *((_DWORD *)a1 + 141) |= 2u;
  v11 = QT::QAbstractScrollArea::viewport(a1);
  QT::QWidget::setFocusPolicy(v11, 11);
  QT::QWidget::setAttribute(a1, 2, 1, v12, v13, v14, (char *)a1 + 576, (char *)a1 + 528, (char *)a1 + 384);
  v15 = 0;
  if ( s )
    v15 = strlen(s);
  v16 = QT::QString::fromUtf8(ptr, v15, s);
  QT::QWidget::setWindowTitle(a1, (const QT::QString *)ptr);
  if ( !ptr[0] || _InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v17 = *((_DWORD *)a1 + 141);
    if ( (v17 & 2) == 0 )
      goto LABEL_8;
LABEL_26:
    QT::QVariant::QVariant((QT::QVariant *)v44, 1);
    QT::QObject::doSetProperty(a1, "debugging", (const QT::QVariant *)v44, (QT::QVariant *)v44);
    QT::QVariant::~QVariant((QT::QVariant *)v44);
    if ( (*((_DWORD *)a1 + 141) & 4) == 0 )
      goto LABEL_9;
    goto LABEL_27;
  }
  free(ptr[0]);
  v17 = *((_DWORD *)a1 + 141);
  if ( (v17 & 2) != 0 )
    goto LABEL_26;
LABEL_8:
  if ( (v17 & 4) == 0 )
    goto LABEL_9;
LABEL_27:
  QT::QVariant::QVariant((QT::QVariant *)v44, 1);
  QT::QObject::doSetProperty(a1, "hints", (const QT::QVariant *)v44, (QT::QVariant *)v44);
  QT::QVariant::~QVariant((QT::QVariant *)v44);
LABEL_9:
  if ( !*((_BYTE *)a3 + 136) )
    qword_8CB510 = (__int64)a1;
  v18 = *((_QWORD **)a1 + 111);
  if ( v18 )
  {
    v19 = *(void (__fastcall **)(__int64, __int64))(*v18 + 96LL);
    if ( v19 == sub_1E6680 )
      v18[2] = a1;
    else
      ((void (__fastcall *)(_QWORD *, QT::QWidget *, double))v19)(v18, a1, v16);
  }
  v20 = *((_QWORD *)a1 + 112);
  if ( v20 )
    (*(void (__fastcall **)(__int64, QT::QWidget *, double))(*(_QWORD *)v20 + 96LL))(v20, a1, v16);
  v21 = *((_QWORD *)a1 + 113);
  if ( v21 )
    (*(void (__fastcall **)(__int64, QT::QWidget *, double))(*(_QWORD *)v21 + 96LL))(v21, a1, v16);
  v22 = xmmword_8CB528;
  v23 = qword_8CB520;
  if ( *((_QWORD *)&xmmword_8CB528 + 1) < (unsigned __int64)(xmmword_8CB528 + 1) )
  {
    qword_8CB520 = qvector_reserve(&qword_8CB520, qword_8CB520, xmmword_8CB528 + 1, 8);
    v23 = qword_8CB520;
    v22 = xmmword_8CB528;
  }
  *(_QWORD *)(v23 + 8 * v22) = a1;
  *(_QWORD *)&xmmword_8CB528 = xmmword_8CB528 + 1;
  sub_202B10((QT::QWidget **)a1);
  sub_1F6260((__int64)a1);
  sub_4EBBA0(a1);
  sub_1EBD50(a1, v23, v16);
  v24 = operator new(0x28u);
  *(_QWORD *)(v24 + 16) = 0;
  *(_WORD *)(v24 + 24) = 0;
  v25 = (QT::QScrollBar *)v24;
  *(_QWORD *)(v24 + 32) = 0;
  *(_OWORD *)v24 = 0;
  QT::QScrollBar::QScrollBar((QT::QScrollBar *)v24, nullptr);
  *(_QWORD *)v25 = &off_870520;
  *((_QWORD *)v25 + 2) = IDAMemoScrollBar___vtable_at__16;
  QT::QAbstractScrollArea::setHorizontalScrollBar(a1, v25);
  QT::QObject::connect(ptr, v25, "2actionTriggered(int)", a1, "1horizActionTriggered(int)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v26 = operator new(0x28u);
  *(_QWORD *)(v26 + 16) = 0;
  *(_WORD *)(v26 + 24) = 0;
  v27 = (QT::QScrollBar *)v26;
  *(_QWORD *)(v26 + 32) = 0;
  *(_OWORD *)v26 = 0;
  QT::QScrollBar::QScrollBar((QT::QScrollBar *)v26, nullptr);
  *(_QWORD *)v27 = &off_870520;
  *((_QWORD *)v27 + 2) = IDAMemoScrollBar___vtable_at__16;
  QT::QAbstractScrollArea::setVerticalScrollBar(a1, v27);
  QT::QObject::connect(ptr, v27, "2actionTriggered(int)", a1, "1vertActionTriggered(int)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, qword_8CD748, "2endTraceBufChange()", a1, "1traceBufChangeCompleted()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QWidget::setAttribute(a1, 121, 1, v28, v29, v30, v38, v39, v40);
  QT::QWidget::grabGesture(a1, 3, 0);
  v31 = *((const __m128i **)a3 + 4);
  if ( v31 )
  {
    v32 = *((_QWORD *)a3 + 5);
    *(__m128i *)((char *)a1 + 264) = _mm_loadu_si128(v31);
    *(__m128i *)((char *)a1 + 280) = _mm_loadu_si128(v31 + 1);
    *(__m128i *)((char *)a1 + 296) = _mm_loadu_si128(v31 + 2);
    *(__m128i *)((char *)a1 + 312) = _mm_loadu_si128(v31 + 3);
    *(__m128i *)((char *)a1 + 328) = _mm_loadu_si128(v31 + 4);
    *(__m128i *)((char *)a1 + 344) = _mm_loadu_si128(v31 + 5);
    v33 = _mm_loadu_si128(v31 + 6);
    *((_QWORD *)a1 + 47) = v32;
    *(__m128i *)((char *)a1 + 360) = v33;
  }
  v34 = sub_414310();
  if ( v34 )
  {
    v42.m128i_i64[1] = 0;
    v42.m128i_i64[0] = (__int64)sub_1E85E0;
    ptr[1] = nullptr;
    ptr[0] = sub_4762C0;
    v35 = (__m128i *)operator new(0x20u);
    v35->m128i_i32[0] = 1;
    v36 = _mm_load_si128(&v42);
    v35->m128i_i64[1] = (__int64)&loc_1E6A00;
    v35[1] = v36;
    QT::QObject::connectImpl(v41, v34, ptr, a1, &v42, v35, 0, 0, &off_893BE0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v41);
  }
  sub_1F4990(6u, a1);
  return v45 - __readfsqword(0x28u);
}
