__int64 __fastcall sub_37B980(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rax
  QT::QWidget *v4; // rbp
  int v5; // eax
  int v6; // ebp
  QT::QTableWidget *v7; // r12
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // bp
  void *v13[4]; // [rsp+0h] [rbp-98h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-78h] BYREF
  void *v15; // [rsp+30h] [rbp-68h]
  _BYTE v16[40]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 48);
  v17 = __readfsqword(0x28u);
  v2 = QT::QTableWidget::currentRow(*(QT::QTableWidget **)(v1 + 32));
  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(QT::QWidget **)(v3 + 80);
  if ( v2 == -1 )
  {
    QT::QWidget::setEnabled(*(QT::QWidget **)(v3 + 80), 0);
    return QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 48) + 88LL), 0);
  }
  else
  {
    v5 = QT::QListWidget::currentRow(*(QT::QListWidget **)(v3 + 64));
    QT::QWidget::setEnabled(v4, v5 != -1);
    v6 = QT::QListWidget::currentRow(*(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 112LL));
    if ( v6 == -1 )
    {
      v11 = 0;
    }
    else
    {
      v7 = *(QT::QTableWidget **)(*(_QWORD *)(a1 + 48) + 32LL);
      v8 = QT::QTableWidget::currentRow(v7);
      v9 = QT::QTableWidget::item(v7, v8, 0);
      (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v16, v9, 0);
      QT::QVariant::toString((QT::QVariant *)ptr);
      QT::QVariant::~QVariant((QT::QVariant *)v16);
      v10 = QT::QListWidget::item(*(QT::QListWidget **)(*(_QWORD *)(a1 + 48) + 112LL), v6);
      (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v10 + 24LL))(v16, v10, 0);
      QT::QVariant::toString((QT::QVariant *)v13);
      v11 = 1;
      QT::QVariant::~QVariant((QT::QVariant *)v16);
      if ( v15 == v13[2] )
        v11 = QT::QtPrivate::equalStrings(v15, v13[1], v15, ptr[1]) ^ 1;
      if ( v13[0] && !_InterlockedSub((volatile signed __int32 *)v13[0], 1u) )
        free(v13[0]);
      if ( ptr[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
      }
    }
    return QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 48) + 88LL), v11);
  }
}
