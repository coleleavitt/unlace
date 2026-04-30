unsigned __int64 __fastcall sub_408330(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rsi
  QT::QVariant *(__fastcall *v10)(QT::QVariant *, __int64, __int64, __int64); // rax
  unsigned __int64 v11; // rdi
  int v12; // r13d
  int v13; // eax
  __int64 v14; // rbp
  double v15; // xmm4_8
  double v16; // xmm5_8
  _QWORD *v18; // r13
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+8h] [rbp-A0h] BYREF
  _DWORD v21[4]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v22; // [rsp+20h] [rbp-88h]
  _BYTE v23[32]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v24[3]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-40h]
  unsigned __int64 v26; // [rsp+78h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v21);
  if ( (v21[1] | v21[0]) >= 0 && v22 )
  {
    (*(void (__fastcall **)(_BYTE *, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 120) + 400LL))(
      v23,
      *(_QWORD *)(a1 + 120),
      v21);
    v9 = *(_QWORD *)(a1 + 112);
    v10 = *(QT::QVariant *(__fastcall **)(QT::QVariant *, __int64, __int64, __int64))(*(_QWORD *)v9 + 144LL);
    if ( v10 == sub_408230 )
      QT::QStandardItemModel::data(v24, v9, v23, 258);
    else
      v10((QT::QVariant *)v24, v9, (__int64)v23, 258);
    v20 = v25 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)&v20) )
    {
      v11 = v25 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (_DWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL) == QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
        goto LABEL_14;
      if ( !v11 || !QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
        goto LABEL_20;
      v12 = *(_DWORD *)&byte_9[4 * (v25 >> 2) + 3];
      if ( !v12 )
        v12 = QT::QMetaType::registerHelper(v11);
      v13 = QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType[3];
      if ( !v13 )
        v13 = QT::QMetaType::registerHelper(QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType);
      if ( v12 == v13 )
      {
LABEL_14:
        v14 = v24[0];
      }
      else
      {
LABEL_20:
        v20 = 0;
        v18 = v24;
        if ( (v25 & 1) != 0 )
          v18 = (_QWORD *)(*(int *)(v24[0] + 4LL) + v24[0]);
        v19 = QT::QVariant::metaType((QT::QVariant *)v24);
        QT::QMetaType::convert(v19, v18, QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType, &v20);
        v14 = v20;
      }
      if ( v14 != -1 && (unsigned __int8)is_mapped(v14) )
        sub_33D630(v14, a2, a3, a4, a5, v15, v16, a8, a9);
    }
    QT::QVariant::~QVariant((QT::QVariant *)v24);
  }
  return v26 - __readfsqword(0x28u);
}
