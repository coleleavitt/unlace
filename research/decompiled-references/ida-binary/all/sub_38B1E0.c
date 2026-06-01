__int64 __fastcall offsets_select_deselect_all_ah_t__::vfunc_1(__int64 a1, __int64 a2)
{
  bool v2; // zf
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  char v8; // bp
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  char v13; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v2 = *(_BYTE *)(a1 + 12) == 0;
  v3 = *(_DWORD *)(a2 + 8);
  v14 = __readfsqword(0x28u);
  if ( v2 )
  {
    if ( v3 != 40 )
      return 6;
    v5 = QT::QMetaObject::cast((QT::QMetaObject *)&off_88EAE0, *(const QT::QObject **)a2);
  }
  else
  {
    if ( v3 != 39 )
      return 6;
    v5 = QT::QMetaObject::cast((QT::QMetaObject *)&off_88EB20, *(const QT::QObject **)a2);
  }
  if ( !v5 )
    return 6;
  v6 = 0;
  if ( *(_DWORD *)(a2 + 8) == 40 )
    v6 = QT::QMetaObject::cast((QT::QMetaObject *)&off_88EAE0, *(const QT::QObject **)a2);
  v7 = *(_QWORD *)(v6 + 40);
  if ( (int)QT::QTableWidget::rowCount(*(QT::QTableWidget **)(v7 + 88)) <= 0 )
  {
    v11 = *(_QWORD *)(a2 + 72);
    v13 = 0;
    v12 = sub_534430(v11);
    if ( v12 )
    {
      sub_537630(v12, 8, &v13);
      return 7;
    }
    return 7;
  }
  if ( *(_BYTE *)(a1 + 13) )
    v8 = sub_38AF30(v7) ^ 1;
  else
    v8 = sub_38B090(v7) ^ 1;
  v9 = *(_QWORD *)(a2 + 72);
  v13 = v8;
  v10 = sub_534430(v9);
  if ( v10 )
    sub_537630(v10, 8, &v13);
  result = 3;
  if ( !v8 )
    return 7;
  return result;
}
