QT::QWidget *__fastcall sub_4CF1B0(QT::QStackedWidget **a1)
{
  __int64 (*v1)(void); // rax
  QT::QWidget *result; // rax
  int v3; // ebp
  unsigned int v4; // ebx
  __int64 (__fastcall *v5)(__int64, int); // rax
  const QT::QObject *v6; // rax
  __int64 v7; // rax

  v1 = *((__int64 (**)(void))*a1 + 58);
  if ( (char *)v1 == (char *)sub_4C46A0 )
    result = (QT::QWidget *)QT::QStackedWidget::count(a1[9]);
  else
    result = (QT::QWidget *)v1();
  v3 = (int)result;
  if ( (_DWORD)result )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = *((__int64 (__fastcall **)(__int64, int))*a1 + 57);
        if ( v5 == sub_4C46C0 )
        {
          v6 = (const QT::QObject *)QT::QStackedWidget::widget(a1[9], v4);
          result = (QT::QWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v6);
        }
        else
        {
          result = (QT::QWidget *)v5((__int64)a1, v4);
        }
        if ( !*((_DWORD *)result + 10) )
          break;
        if ( v3 == ++v4 )
          return result;
      }
      ++v4;
      v7 = sub_4CD420(result, 0);
      result = (QT::QWidget *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 104LL))(v7, 0);
    }
    while ( v3 != v4 );
  }
  return result;
}
