__m128i *__fastcall sub_3F6130(__m128i *a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rdi
  int v5; // r13d
  int v6; // eax
  __m128i v7; // xmm0
  __int64 v8; // rax
  __m128i *v9; // r13
  __int64 v10; // rax
  __m128i v11; // xmm0
  __m128i v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+10h] [rbp-68h]
  __m128i v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]
  unsigned __int64 v18; // [rsp+48h] [rbp-30h]

  v2 = *a2;
  v18 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__m128i *, __int64 *, _QWORD))(v2 + 16))(&v15, a2, 0);
  v4 = v17 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (_DWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL) == QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType )
    goto LABEL_9;
  if ( !v4 || !QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType )
    goto LABEL_10;
  v5 = *(_DWORD *)&byte_9[4 * (v17 >> 2) + 3];
  if ( !v5 )
    v5 = QT::QMetaType::registerHelper(v4);
  v6 = QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType[3];
  if ( !v6 )
    v6 = QT::QMetaType::registerHelper(QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType);
  if ( v5 == v6 )
  {
LABEL_9:
    v7 = _mm_load_si128(&v15);
    v8 = v16;
    v16 = 0;
    v15 = 0;
    *a1 = v7;
    a1[1].m128i_i64[0] = v8;
  }
  else
  {
LABEL_10:
    v14 = 0;
    v9 = &v15;
    v13 = 0;
    if ( (v17 & 1) != 0 )
      v9 = (__m128i *)(*(int *)(v15.m128i_i64[0] + 4) + v15.m128i_i64[0]);
    v10 = QT::QVariant::metaType((QT::QVariant *)&v15);
    QT::QMetaType::convert(v10, v9, QT::QtPrivate::QMetaTypeInterfaceWrapper<QT::QString>::metaType, &v13);
    v11 = _mm_load_si128(&v13);
    a1[1].m128i_i64[0] = v14;
    *a1 = v11;
  }
  QT::QVariant::~QVariant((QT::QVariant *)&v15);
  return a1;
}
