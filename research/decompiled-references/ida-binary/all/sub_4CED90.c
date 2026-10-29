__int64 __fastcall sub_4CED90(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v3; // ebp
  __int64 (__fastcall *v4)(__int64, int); // rax
  const QT::QObject *v5; // rax
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, int); // rax
  const QT::QObject *v8; // rax
  __int64 v9; // rax

  result = sub_4CEAC0((QT::QStackedWidget **)a1, a2);
  if ( (_DWORD)result != -1 )
  {
    v3 = result;
    if ( a1 )
    {
      v4 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 456LL);
      if ( v4 == sub_4C46C0 )
      {
        v5 = (const QT::QObject *)QT::QStackedWidget::widget(*(QT::QStackedWidget **)(a1 + 72), v3);
        v6 = QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v5);
      }
      else
      {
        v6 = v4(a1, v3);
      }
      *(_QWORD *)(a1 + 80) = v6;
    }
    v7 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 456LL);
    if ( v7 == sub_4C46C0 )
    {
      v8 = (const QT::QObject *)QT::QStackedWidget::widget(*(QT::QStackedWidget **)(a1 + 72), v3);
      v9 = QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v8);
    }
    else
    {
      v9 = v7(a1, v3);
    }
    QT::QWidget::setFocus(v9, 7);
    result = QT::QStackedWidget::setCurrentIndex(*(QT::QStackedWidget **)(a1 + 72), v3);
    if ( a1 )
      *(_QWORD *)(a1 + 80) = 0;
  }
  return result;
}
