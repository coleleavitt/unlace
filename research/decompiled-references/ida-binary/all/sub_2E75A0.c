QT::QAbstractItemView *__fastcall sub_2E75A0(QT::QAbstractItemModel *this, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 i; // rbx
  __int64 v6; // rdi
  __m128i v7; // xmm1
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 j; // rbp
  __int64 *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __m128i si128; // xmm2
  QT::QAbstractItemView *result; // rax
  __m128i v17[3]; // [rsp+0h] [rbp-38h] BYREF

  QT::QAbstractItemModel::beginResetModel(this);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 3);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = *(_QWORD *)(v3 + 8 * i);
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
          v3 = *((_QWORD *)this + 2);
        }
      }
    }
    *((_QWORD *)this + 3) = 0;
    qfree(v3, (const char *)a2);
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 4) = 0;
  }
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  v8 = *a2;
  *a2 = 0;
  *(_OWORD *)(a2 + 1) = 0;
  v9 = *((_QWORD *)this + 5);
  v17[0] = v7;
  if ( v9 )
  {
    v10 = *((_QWORD *)this + 6);
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = (__int64 *)(v9 + 48 * j);
        v13 = v12[3];
        if ( v13 )
        {
          v12[4] = 0;
          qfree(v13, (const char *)a2);
        }
        v14 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v14, (const char *)a2);
        }
        v9 = *((_QWORD *)this + 5);
      }
    }
    *((_QWORD *)this + 6) = 0;
    qfree(v9, (const char *)a2);
  }
  si128 = _mm_load_si128(v17);
  *((_QWORD *)this + 5) = v8;
  *((_DWORD *)this + 16) = 0;
  *((__m128i *)this + 3) = si128;
  QT::QAbstractItemModel::endResetModel(this);
  result = (QT::QAbstractItemView *)QT::QMetaObject::cast(
                                      (QT::QMetaObject *)&off_889E80,
                                      *(const QT::QObject **)(*((_QWORD *)this + 1) + 16LL));
  if ( result )
    return (QT::QAbstractItemView *)sub_2E6340((__int64 *)this, result);
  return result;
}
