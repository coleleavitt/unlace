__int64 __fastcall offsets_add_missing_fields_ah_t__::vfunc_1(__int64 a1, __int64 a2)
{
  bool v2; // zf
  int v3; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-10h]

  v2 = *(_BYTE *)(a1 + 12) == 0;
  v3 = *(_DWORD *)(a2 + 8);
  v13 = __readfsqword(0x28u);
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
  if ( *(_BYTE *)(v7 + 56) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 64) + 72LL))(*(_QWORD *)(v7 + 64));
    v9 = *(_QWORD *)(a2 + 72);
    if ( v8 )
    {
      v12 = 1;
      v10 = sub_534430(v9);
      if ( v10 )
        sub_537630(v10, 8, &v12);
      return 3;
    }
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 72);
  }
  v12 = 0;
  v11 = sub_534430(v9);
  if ( v11 )
    sub_537630(v11, 8, &v12);
  return 7;
}
