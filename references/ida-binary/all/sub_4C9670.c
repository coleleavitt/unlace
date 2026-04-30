QT::QStackedWidget **__fastcall sub_4C9670(double a1, __int64 a2, __int64 a3, QT::QStackedWidget **a4, int a5)
{
  QT::QStackedWidget *v5; // rax
  int i; // ebp
  int v8; // eax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64); // rax
  int v12; // eax
  const QT::QObject *v13; // rax
  __int64 (__fastcall *v14)(__int64, int); // rax
  unsigned int v15; // r12d

  if ( !a3 )
    return nullptr;
  ++dword_8D1D3C;
  v5 = *a4;
  i = a5;
  if ( a5 == -1 )
  {
    v11 = *((__int64 (__fastcall **)(__int64))v5 + 58);
    if ( v11 == sub_4C46A0 )
      v12 = QT::QStackedWidget::count(a4[9]);
    else
      v12 = v11((__int64)a4);
    for ( i = v12; ; --i )
    {
      v5 = *a4;
      if ( i <= 0 )
        break;
      v14 = *((__int64 (__fastcall **)(__int64, int))v5 + 57);
      v15 = i - 1;
      if ( v14 == sub_4C46C0 )
      {
        v13 = (const QT::QObject *)QT::QStackedWidget::widget(a4[9], v15);
        if ( !*(_BYTE *)(QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v13) + 44LL) )
          goto LABEL_16;
      }
      else if ( !*(_BYTE *)(v14((__int64)a4, v15) + 44) )
      {
LABEL_16:
        v5 = *a4;
        break;
      }
    }
  }
  (*((void (__fastcall **)(QT::QStackedWidget **, _QWORD, __int64))v5 + 59))(a4, (unsigned int)i, a3);
  (*((void (__fastcall **)(QT::QStackedWidget **, _QWORD))*a4 + 60))(a4, (unsigned int)i);
  v8 = dword_8D1D3C;
  if ( dword_8D1D3C <= 0 || (--dword_8D1D3C, v8 == 1) )
  {
    v10 = sub_47A690((__int64)QT::QCoreApplication::self);
    if ( v10 )
      sub_4C9440(v10, a1);
  }
  return a4;
}
