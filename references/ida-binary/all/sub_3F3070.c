__int64 __fastcall sub_3F3070(QT::QAbstractProxyModel *a1, const __m128i *a2, const __m128i *a3)
{
  int v3; // r12d
  const QT::QObject *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  char v18; // r13
  char v19; // bl
  char v20; // al
  unsigned int v21; // ecx
  __m128i v23; // xmm0
  __m128i v24; // [rsp+0h] [rbp-78h] BYREF
  __int64 v25; // [rsp+10h] [rbp-68h]
  _BYTE v26[40]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v6 = (const QT::QObject *)QT::QAbstractProxyModel::sourceModel(a1);
  v7 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QStandardItemModel::staticMetaObject, v6);
  if ( !v7 )
    goto LABEL_14;
  v8 = a2[1].m128i_i64[0];
  v9 = v7;
  if ( v8 )
  {
    if ( a2->m128i_i32[1] )
    {
      (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, const __m128i *))(*(_QWORD *)v8 + 112LL))(
        &v24,
        v8,
        a2->m128i_u32[0],
        0,
        a2);
    }
    else
    {
      v25 = a2[1].m128i_i64[0];
      v24 = _mm_loadu_si128(a2);
    }
  }
  else
  {
    v24 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v25 = 0;
  }
  v10 = QT::QStandardItemModel::itemFromIndex(v9, &v24);
  v11 = a3[1].m128i_i64[0];
  v12 = v10;
  if ( v11 )
  {
    if ( a3->m128i_i32[1] )
    {
      (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, const __m128i *))(*(_QWORD *)v11 + 112LL))(
        &v24,
        v11,
        a3->m128i_u32[0],
        0,
        a3);
    }
    else
    {
      v23 = _mm_loadu_si128(a3);
      v25 = a3[1].m128i_i64[0];
      v24 = v23;
    }
  }
  else
  {
    v24 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v25 = 0;
  }
  v13 = QT::QStandardItemModel::itemFromIndex(v9, &v24);
  v17 = v13;
  if ( !v12 || !v13 )
    goto LABEL_14;
  (*(void (__fastcall **)(_BYTE *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v12 + 16LL))(
    v26,
    v12,
    260,
    v14,
    v15,
    v16,
    v24.m128i_i64[0],
    v24.m128i_i64[1],
    v25);
  v18 = QT::QVariant::toBool((QT::QVariant *)v26);
  QT::QVariant::~QVariant((QT::QVariant *)v26);
  (*(void (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)v17 + 16LL))(v26, v17, 260);
  v19 = QT::QVariant::toBool((QT::QVariant *)v26);
  QT::QVariant::~QVariant((QT::QVariant *)v26);
  if ( v19 == 1 || !v18 )
  {
    if ( v18 != 1 && v19 )
    {
      v3 = 1;
      goto LABEL_13;
    }
LABEL_14:
    v20 = 0;
    goto LABEL_15;
  }
  v3 = 0;
LABEL_13:
  v20 = 1;
LABEL_15:
  v21 = v3;
  BYTE1(v21) = v20;
  return v21;
}
