__int64 __fastcall sub_270A80(__int64 a1, QT::QPainter *a2, const __m128i *a3, __int64 a4)
{
  unsigned __int64 v5; // rbp
  QT::QAbstractItemView *v7; // rdi
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v13; // [rsp+20h] [rbp-148h]
  _OWORD v14[2]; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-118h] BYREF
  __m64 v16; // [rsp+60h] [rbp-108h]
  __int64 v17; // [rsp+90h] [rbp-D8h]
  __int64 v18; // [rsp+98h] [rbp-D0h]
  __int64 v19; // [rsp+A0h] [rbp-C8h]
  _BYTE v20[20]; // [rsp+A8h] [rbp-C0h] BYREF
  __int32 v21; // [rsp+BCh] [rbp-ACh]
  char v22[8]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-A0h]
  __m128i v24; // [rsp+D0h] [rbp-98h]
  __int64 v25; // [rsp+E0h] [rbp-88h]
  __int32 v26; // [rsp+E8h] [rbp-80h]
  char v27[8]; // [rsp+F0h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+F8h] [rbp-70h] BYREF
  __int64 v29; // [rsp+108h] [rbp-60h]
  __int32 v30; // [rsp+110h] [rbp-58h]
  _BYTE v31[16]; // [rsp+118h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+128h] [rbp-40h]

  v5 = *(_QWORD *)(a4 + 8);
  v32 = __readfsqword(0x28u);
  if ( !HIDWORD(v5) )
    return QT::QStyledItemDelegate::paint(a1, a2, a3);
  v7 = *(QT::QAbstractItemView **)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( !v7 || (*(_BYTE *)(*((_QWORD *)v7 + 1) + 48LL) & 1) == 0 )
    return QT::QStyledItemDelegate::paint(a1, a2, a3);
  v13 = QT::QAbstractItemView::model(v7);
  QT::QStyleOption::QStyleOption((QT::QStyleOption *)v15, 1, 10);
  v17 = 0;
  v19 = -1;
  QT::QFont::QFont((QT::QFont *)v20);
  v21 = 0;
  QT::QLocale::QLocale((QT::QLocale *)v22);
  v24 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v25 = 0;
  QT::QIcon::QIcon((QT::QIcon *)v27);
  v29 = 0;
  *(_OWORD *)ptr = 0;
  QT::QBrush::QBrush((QT::QBrush *)v31);
  QT::QStyleOption::operator=(v15, a3);
  v17 = a3[4].m128i_i64[0];
  v18 = a3[4].m128i_i64[1];
  v19 = a3[5].m128i_i64[0];
  QT::QFont::operator=(v20, &a3[5].m128i_u64[1]);
  v20[16] = a3[6].m128i_i8[8];
  v21 = a3[6].m128i_i32[3];
  QT::QLocale::operator=(v22, &a3[7]);
  v8 = _mm_loadu_si128(a3 + 8);
  v23 = a3[7].m128i_i64[1];
  v9 = a3[9].m128i_i64[0];
  v24 = v8;
  v25 = v9;
  v26 = a3[9].m128i_i32[2];
  QT::QIcon::operator=(v27, &a3[10]);
  QT::QString::operator=(ptr, &a3[10].m128i_u64[1]);
  v30 = a3[12].m128i_i32[0];
  QT::QBrush::operator=(v31, &a3[12].m128i_u64[1]);
  v10 = QT::QApplication::style((QT::QApplication *)v31);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *, QT::QPainter *, _QWORD))(*(_QWORD *)v10 + 176LL))(
    v10,
    45,
    v15,
    a2,
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL));
  QT::QPainter::save(a2);
  v14[0] = _mm_cvtepi32_pd(v16);
  QT::QPainter::translate(a2, v14);
  v11 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + ((HIDWORD(v5) - 1) << 6) + 56);
  memset(v14, 0, sizeof(v14));
  QT::QTextDocument::drawContents(v11, a2, v14);
  QT::QPainter::restore(a2);
  QT::QBrush::~QBrush((QT::QBrush *)v31);
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  QT::QIcon::~QIcon((QT::QIcon *)v27);
  QT::QLocale::~QLocale((QT::QLocale *)v22);
  QT::QFont::~QFont((QT::QFont *)v20);
  QT::QStyleOption::~QStyleOption((QT::QStyleOption *)v15);
  return v32 - __readfsqword(0x28u);
}
