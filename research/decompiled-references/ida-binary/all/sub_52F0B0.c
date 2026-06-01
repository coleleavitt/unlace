__int64 __fastcall sub_52F0B0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rax
  QT::QApplication *v5; // rdi
  const QT::QWidget *v6; // rax
  QT::QWidget *v7; // rdi
  char isAncestorOf; // al
  __int64 v9; // rax
  __int64 v10; // rax
  const QT::QObject *v11; // rsi
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rbp
  const QT::QObject *v15; // rsi
  const QT::QObject *v16; // rsi
  __int64 v17; // rax

  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, a3);
  *(_QWORD *)a2 = v4;
  v5 = (QT::QApplication *)(QT::QCoreApplication::self + 2);
  *(_DWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(_QWORD *, __int64))(QT::QCoreApplication::self[2] + 56LL))(
                          QT::QCoreApplication::self + 2,
                          v4);
  v6 = (const QT::QWidget *)QT::QApplication::focusWidget(v5);
  v7 = *(QT::QWidget **)a2;
  *(_QWORD *)(a2 + 168) = v6;
  if ( v6 )
  {
    if ( v7 != v6 )
    {
      if ( v7 )
      {
        isAncestorOf = QT::QWidget::isAncestorOf(v7, v6);
        v7 = *(QT::QWidget **)a2;
        if ( !isAncestorOf )
          *(_QWORD *)(a2 + 168) = 0;
      }
    }
  }
  v9 = QT::QMetaObject::cast((QT::QMetaObject *)&off_895EA0, v7);
  *(_QWORD *)(a2 + 328) = v9;
  if ( v9
    || (v16 = *(const QT::QObject **)(a2 + 168)) != nullptr
    && (v17 = QT::QMetaObject::cast((QT::QMetaObject *)&off_895EA0, v16), (*(_QWORD *)(a2 + 328) = v17) != 0) )
  {
    *(_BYTE *)(a2 + 336) = 1;
  }
  v10 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89C920, *(const QT::QObject **)a2);
  *(_QWORD *)(a2 + 256) = v10;
  if ( !v10 )
  {
    v15 = *(const QT::QObject **)(a2 + 168);
    if ( !v15 )
      goto LABEL_12;
    *(_QWORD *)(a2 + 256) = QT::QMetaObject::cast((QT::QMetaObject *)&off_89C920, v15);
  }
  v11 = *(const QT::QObject **)(a2 + 168);
  if ( v11 )
  {
    v12 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89B0A0, v11);
    if ( v12 )
      *(_QWORD *)(a2 + 248) = sub_51C1C0(v12);
  }
LABEL_12:
  result = sub_4E0E80(*(_QWORD *)a2);
  *(_QWORD *)(a2 + 240) = result;
  v14 = result;
  if ( !result )
  {
    result = *(_QWORD *)(a2 + 248);
    if ( result )
    {
      result = QT::QMetaObject::cast(
                 (QT::QMetaObject *)&off_89D540,
                 *(const QT::QObject **)(*(_QWORD *)(result + 8) + 16LL));
      if ( result )
      {
        if ( !*(_BYTE *)(result + 64) )
        {
          v14 = *(_QWORD *)(result + 56);
          result = v14 + 304;
          if ( v14 )
            v14 += 304;
        }
        *(_QWORD *)(a2 + 240) = v14;
      }
    }
  }
  return result;
}
