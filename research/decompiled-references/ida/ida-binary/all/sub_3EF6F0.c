__int64 __fastcall sub_3EF6F0(QT::QAbstractProxyModel **a1, const __m128i *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  int v6; // r12d
  int v7; // eax
  __int64 v8; // rbp
  _QWORD *v10; // r12
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-70h] BYREF
  __m128i v13; // [rsp+10h] [rbp-68h] BYREF
  __int64 v14; // [rsp+20h] [rbp-58h]
  _QWORD v15[3]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-30h]
  unsigned __int64 v17; // [rsp+58h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v3 = a2[1].m128i_i64[0];
  if ( v3 )
  {
    if ( a2->m128i_i32[1] == 1 )
    {
      v14 = v3;
      v13 = _mm_loadu_si128(a2);
    }
    else
    {
      (*(void (__fastcall **)(__m128i *, __int64, _QWORD, __int64))(*(_QWORD *)v3 + 112LL))(
        &v13,
        v3,
        a2->m128i_u32[0],
        1);
    }
  }
  else
  {
    v13 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v14 = 0;
  }
  v4 = QT::QAbstractProxyModel::sourceModel(*a1);
  (*(void (__fastcall **)(_QWORD *, __int64, __m128i *, __int64))(*(_QWORD *)v4 + 144LL))(v15, v4, &v13, 262);
  v5 = v16 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL) == QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
    goto LABEL_12;
  if ( !v5 || !QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType )
    goto LABEL_15;
  v6 = *(_DWORD *)&byte_9[4 * (v16 >> 2) + 3];
  if ( !v6 )
    v6 = QT::QMetaType::registerHelper(v5);
  v7 = QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType[3];
  if ( !v7 )
    v7 = QT::QMetaType::registerHelper(QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType);
  if ( v6 == v7 )
  {
LABEL_12:
    v8 = v15[0];
  }
  else
  {
LABEL_15:
    v12 = 0;
    v10 = v15;
    if ( (v16 & 1) != 0 )
      v10 = (_QWORD *)(*(int *)(v15[0] + 4LL) + v15[0]);
    v11 = QT::QVariant::metaType((QT::QVariant *)v15);
    QT::QMetaType::convert(v11, v10, QT::QtPrivate::QMetaTypeInterfaceWrapper<unsigned long long>::metaType, &v12);
    v8 = v12;
  }
  QT::QVariant::~QVariant((QT::QVariant *)v15);
  return v8;
}
