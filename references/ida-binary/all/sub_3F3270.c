__int64 __fastcall sub_3F3270(QT::QAbstractProxyModel *this, const __m128i *a2, const __m128i *a3)
{
  __int64 result; // rax
  __int32 v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rax
  const QT::QVariant *v8; // rdx
  char v9; // al
  bool v10; // al
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  bool v13; // [rsp+Fh] [rbp-89h]
  QT::QAbstractProxyModel *v14; // [rsp+18h] [rbp-80h] BYREF
  _BYTE v15[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v16[40]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  result = sub_3F2E60(this, (__int64)a2, (__int64)a3);
  if ( !BYTE1(result) )
  {
    result = sub_3F3070(this, a2, a3);
    if ( !BYTE1(result) )
    {
      v5 = a2->m128i_i32[1];
      v14 = this;
      v6 = QT::QAbstractProxyModel::sourceModel(this);
      if ( v5 )
      {
        (*(void (__fastcall **)(_BYTE *, __int64, const __m128i *, __int64))(*(_QWORD *)v6 + 144LL))(v15, v6, a2, 262);
        v11 = QT::QAbstractProxyModel::sourceModel(this);
        (*(void (__fastcall **)(_BYTE *, __int64, const __m128i *, __int64))(*(_QWORD *)v11 + 144LL))(v16, v11, a3, 262);
      }
      else
      {
        (*(void (__fastcall **)(_BYTE *, __int64, const __m128i *, __int64))(*(_QWORD *)v6 + 144LL))(v15, v6, a2, 18790);
        v7 = QT::QAbstractProxyModel::sourceModel(this);
        (*(void (__fastcall **)(_BYTE *, __int64, const __m128i *, __int64))(*(_QWORD *)v7 + 144LL))(v16, v7, a3, 18790);
      }
      v9 = QT::QVariant::compare((QT::QVariant *)v15, (const QT::QVariant *)v16, v8);
      if ( v9 == -1 )
      {
        v10 = 1;
      }
      else
      {
        v10 = v5 != 1 && v9 != 1;
        if ( v10 )
        {
          v12 = sub_3EF6F0(&v14, a2);
          v10 = v12 < sub_3EF6F0(&v14, a3);
        }
      }
      v13 = v10;
      QT::QVariant::~QVariant((QT::QVariant *)v16);
      QT::QVariant::~QVariant((QT::QVariant *)v15);
      return v13;
    }
  }
  return result;
}
