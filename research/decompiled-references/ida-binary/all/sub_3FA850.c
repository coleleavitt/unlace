void __fastcall sub_3FA850(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  QT::QWidget *v3; // r12
  int *v4; // rax
  QT::QWidget *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rax

  if ( *(_QWORD *)(a1 + 160) )
  {
    v3 = (QT::QWidget *)QT::QApplication::focusWidget((QT::QApplication *)a1);
    v4 = *(int **)(a1 + 144);
    if ( !v4 || *v4 > 1 )
    {
      sub_3F9FE0(a1 + 144, 0, 0, 0, v1, v2);
      v4 = *(int **)(a1 + 144);
    }
    v5 = *(QT::QWidget **)(*(_QWORD *)(a1 + 152) + 8LL * *(_QWORD *)(a1 + 160) - 8);
    if ( !v4 || *v4 > 1 )
      sub_3F9FE0(a1 + 144, 0, 0, 0, v1, v2);
    --*(_QWORD *)(a1 + 160);
    QT::QLayout::removeWidget(*(QT::QLayout **)(a1 + 136), v5);
    QT::QObject::deleteLater(v5);
    (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)a1 + 104LL))(a1, *(_QWORD *)(a1 + 160) != 0);
    v6 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, *(const QT::QObject **)(*(_QWORD *)(a1 + 8) + 16LL));
    v7 = v6;
    if ( v6 )
    {
      ++*(_DWORD *)(v6 + 452);
      v8 = v6 + 452;
      v9 = operator new(0x38u);
      *(_DWORD *)v9 = 1;
      *(_QWORD *)(v9 + 8) = sub_3FA780;
      *(_QWORD *)(v9 + 16) = a1;
      *(_QWORD *)(v9 + 24) = v3;
      *(_QWORD *)(v9 + 40) = v7;
      *(_QWORD *)(v9 + 48) = v8;
      *(_BYTE *)(v9 + 32) = v3 == v5;
      QT::QTimer::singleShotImpl(0, 0, 0);
    }
    sub_473400(a1);
  }
}
