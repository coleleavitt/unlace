__int64 __fastcall sub_3F2E60(QT::QAbstractProxyModel *this, __int64 a2, __int64 a3)
{
  _BOOL4 v3; // r13d
  __int64 v5; // rsi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r13d
  const QT::QObject *v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  char v15; // al
  unsigned int v16; // ecx
  __m128i si128; // xmm0
  __m128i v18[2]; // [rsp+0h] [rbp-B8h] BYREF
  _QWORD v19[4]; // [rsp+20h] [rbp-98h] BYREF
  __m128i v20; // [rsp+40h] [rbp-78h] BYREF
  __int64 v21; // [rsp+50h] [rbp-68h]
  _BYTE v22[24]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v23; // [rsp+78h] [rbp-40h]
  unsigned __int64 v24; // [rsp+88h] [rbp-30h]

  v5 = *(_QWORD *)(a2 + 16);
  v24 = __readfsqword(0x28u);
  if ( v5 )
  {
    (*(void (__fastcall **)(__m128i *, __int64, __int64))(*(_QWORD *)v5 + 104LL))(v18, v5, a2);
  }
  else
  {
    v18[0] = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v18[1].m128i_i64[0] = 0;
  }
  v7 = *(_QWORD *)(a3 + 16);
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(*(_QWORD *)v7 + 104LL))(v19, v7, a3);
    v8 = v19[1];
    v7 = v19[2];
    v9 = v19[0];
  }
  else
  {
    v9 = -1;
    v8 = 0;
  }
  if ( v18[0].m128i_i64[0] != v9 )
    return 0;
  if ( *(_OWORD *)((char *)v18 + 8) != __PAIR128__(v7, v8) )
    return 0;
  if ( (v18[0].m128i_i32[1] | v18[0].m128i_i32[0]) < 0 )
    return 0;
  if ( !v7 )
    return 0;
  v12 = (const QT::QObject *)QT::QAbstractProxyModel::sourceModel(this);
  v13 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QStandardItemModel::staticMetaObject, v12);
  if ( !v13 )
    return 0;
  if ( v18[1].m128i_i64[0] )
  {
    if ( v18[0].m128i_i32[1] )
    {
      (*(void (__fastcall **)(__m128i *, __int64, _QWORD, _QWORD, __m128i *))(*(_QWORD *)v18[1].m128i_i64[0] + 112LL))(
        &v20,
        v18[1].m128i_i64[0],
        v18[0].m128i_u32[0],
        0,
        v18);
    }
    else
    {
      si128 = _mm_load_si128(v18);
      v21 = v18[1].m128i_i64[0];
      v20 = si128;
    }
  }
  else
  {
    v20 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v21 = 0;
  }
  v14 = QT::QStandardItemModel::itemFromIndex(v13, &v20);
  if ( v14 )
  {
    (*(void (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)v14 + 16LL))(v22, v14, 257);
    v20.m128i_i64[0] = v23 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !(unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)&v20)
      || (unsigned int)QT::QVariant::toInt((QT::QVariant *)v22, nullptr) )
    {
      v15 = 0;
    }
    else
    {
      v15 = 1;
      v3 = *(_DWORD *)a3 > *(_DWORD *)a2;
    }
    v16 = v3;
    BYTE1(v16) = v15;
    v10 = v16;
    QT::QVariant::~QVariant((QT::QVariant *)v22);
  }
  else
  {
    return 0;
  }
  return v10;
}
