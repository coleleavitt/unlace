unsigned __int64 __fastcall sub_5277F0(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  size_t v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v3 = a2;
  v13 = __readfsqword(0x28u);
  QT::QWidget::QWidget(a1, a2, 0);
  v5 = QT::QMetaObject::className((QT::QMetaObject *)&off_89E220);
  sub_525E40(a1 + 40, (const __m128i *)off_86DBC0, 1, v5);
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = a2;
  *(_OWORD *)(a1 + 104) = 0;
  *(_QWORD *)a1 = &text_area_margin_widget_t___vtable;
  *(_QWORD *)(a1 + 16) = &unk_89DF40;
  *(_QWORD *)(a1 + 40) = algn_89DF90;
  *(_DWORD *)(a1 + 136) = 0;
  if ( a3 )
  {
    v6 = strlen(a3);
    QT::QString::fromUtf8(ptr, v6, a3);
    v7 = _mm_loadu_si128((const __m128i *)(a1 + 104));
    v8 = *(_QWORD *)(a1 + 120);
    v9 = v12;
    *(__m128i *)(a1 + 104) = _mm_load_si128((const __m128i *)ptr);
    *(_QWORD *)(a1 + 120) = v9;
    v12 = v8;
    *(__m128i *)ptr = v7;
    if ( v7.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v7.m128i_i64[0], 1u) )
      free(ptr[0]);
    v3 = *(_QWORD *)(a1 + 128);
  }
  QT::QObject::connect(ptr, v3, "2blockCountChanged(int)", v3, "1sync_viewport_margins()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, *(_QWORD *)(a1 + 128), "2updateRequest(QRect,int)", a1, "1on_updateRequest(QRect,int)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  return v13 - __readfsqword(0x28u);
}
