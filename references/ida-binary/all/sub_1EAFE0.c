char __fastcall sub_1EAFE0(QT::QAbstractScrollArea *a1, const QT::QObject *a2, __int64 a3, __int64 a4, double a5)
{
  void *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // r12d
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rbp

  if ( *(_BYTE *)a2 )
    return sub_331080();
  v5 = *((void **)a1 + 53);
  if ( !v5 )
    goto LABEL_16;
  a2 = *((const QT::QObject **)a2 + 1);
  a1 = (QT::QAbstractScrollArea *)&off_87B020;
  v6 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, a2);
  if ( !v6 || (*(_BYTE *)(v6 + 564) & 0x20) != 0 )
    return 0;
  v7 = *(_QWORD *)(v6 + 424);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 112LL))(v5);
    if ( v8 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 112LL))(v7) )
      return 1;
    v9 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 120LL))(v5);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 120LL))(v7);
    if ( lookup_loc_converter2(v9, v10) || lookup_loc_converter(v9, v10) )
      return 1;
    v12 = idaplace_t__name(&qword_8CB4C0);
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 120LL))(v7);
    if ( !lookup_loc_converter2(v12, v13) && !lookup_loc_converter(v12, v13) )
      return 0;
    v14 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 120LL))(v5);
    v15 = idaplace_t__name(&qword_8CB4C0);
    if ( lookup_loc_converter2(v14, v15) )
      return 1;
    return lookup_loc_converter(v14, v15) != 0;
  }
  else
  {
LABEL_16:
    sub_1E69C0(a5, (__int64)a1, (__int64)a2, a3, a4);
    return sub_1EB140(a1);
  }
}
