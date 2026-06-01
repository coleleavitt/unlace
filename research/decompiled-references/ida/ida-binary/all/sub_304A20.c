__int64 __fastcall sub_304A20(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // r15
  __int64 v10; // rax
  _BOOL8 v11; // r14
  __int64 result; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64, const QT::QObject *); // r14
  const QT::QObject *v16; // rsi

  v4 = (__int64)(a1 + 85);
  sub_5318E0(a1 + 85, 11, *(_QWORD *)(a2 + 8), 0);
  nullsub_255(a1, a2, a3);
  v6 = sub_479220(a1 + 2, *(_QWORD *)(a2 + 8));
  if ( v6 )
  {
    v7 = v6;
    v8 = *(__int64 (__fastcall **)(__int64))(*a1 + 488LL);
    if ( v8 != sub_17A210 )
      v4 = v8((__int64)a1);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, v9);
    v10 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89B0A0, *(const QT::QObject **)(a2 + 8));
    v11 = v10 == 0;
    sub_1AACE0(v10 == 0, 138, v7, a2, v9);
    sub_539320(a2);
    sub_1AACE0(v11, 139, v7, a2, v9);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, v9);
  }
  result = QT::QAction::isEnabled(qword_8CA1C8);
  if ( (_BYTE)result )
  {
    v13 = a1[3];
    v14 = *(_QWORD *)(v13 + 16);
    v15 = *(__int64 (__fastcall **)(__int64, const QT::QObject *))(v14 + 56);
    v16 = (const QT::QObject *)(*(__int64 (__fastcall **)(__int64))(v14 + 48))(v13 + 16);
    if ( v15 == IDAApplication__::vfunc_7 )
      result = sub_3011A0(v13, v16);
    else
      result = v15(v13 + 16, v16);
    if ( (_DWORD)result != 36 && (_DWORD)result != 41 )
      return sub_5399D0(a2, qword_8CA1C8, 9);
  }
  return result;
}
