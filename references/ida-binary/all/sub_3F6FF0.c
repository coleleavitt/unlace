__m128 *__fastcall sub_3F6FF0(__m128 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rax
  _DWORD *v7; // rbx
  int v8; // r15d
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // r13d
  _QWORD v14[4]; // [rsp+10h] [rbp-88h] BYREF
  _BYTE v15[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v6 = QT::QStandardItemModel::itemFromIndex(a2, a3);
  if ( v6 )
  {
    v7 = (_DWORD *)v6;
    (*(void (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)v6 + 16LL))(v15, v6, 257);
    v8 = QT::QVariant::toInt((QT::QVariant *)v15, nullptr);
    QT::QVariant::~QVariant((QT::QVariant *)v15);
    if ( v8 )
    {
      v9 = *(_QWORD *)(a3 + 16);
      if ( v9 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*(_QWORD *)v9 + 104LL))(v14, v9, a3);
      }
      else
      {
        v14[0] = -1;
        v14[1] = 0;
        v14[2] = 0;
      }
      v10 = QT::QStandardItemModel::itemFromIndex(a2, v14);
      (*(void (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)v10 + 16LL))(v15, v10, 257);
      v11 = QT::QVariant::toInt((QT::QVariant *)v15, nullptr);
      QT::QVariant::~QVariant((QT::QVariant *)v15);
      if ( v11 )
        sub_3F6A20(a1, a2, v7, v11, a4);
      else
        sub_3F5F70((__int64)a1, a2, v8, a4);
    }
    else
    {
      sub_3F6860((__m128i *)a1, a2, (__int64)v7, a4);
    }
  }
  else
  {
    a1[1].m128_u64[0] = 0;
    *a1 = 0;
  }
  return a1;
}
