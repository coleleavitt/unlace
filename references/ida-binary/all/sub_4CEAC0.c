__int64 __fastcall sub_4CEAC0(QT::QStackedWidget **a1, int a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  int v3; // eax
  __int64 (__fastcall *v4)(__int64); // rax
  int v5; // r12d
  unsigned int v6; // ebx
  int v7; // ebp
  const QT::QObject *v8; // rax
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, int); // rax

  if ( a2 >= 0 )
  {
    v2 = *((__int64 (__fastcall **)(__int64))*a1 + 58);
    v3 = v2 == sub_4C46A0 ? QT::QStackedWidget::count(a1[9]) : ((__int64 (*)(void))v2)();
    if ( a2 < v3 )
    {
      v4 = *((__int64 (__fastcall **)(__int64))*a1 + 58);
      v5 = v4 == sub_4C46A0 ? QT::QStackedWidget::count(a1[9]) : v4((__int64)a1);
      if ( v5 > 0 )
      {
        v6 = 0;
        v7 = 0;
        do
        {
          v10 = *((__int64 (__fastcall **)(__int64, int))*a1 + 57);
          if ( v10 == sub_4C46C0 )
          {
            v8 = (const QT::QObject *)QT::QStackedWidget::widget(a1[9], v6);
            v9 = QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v8);
          }
          else
          {
            v9 = v10((__int64)a1, v6);
          }
          if ( !*(_BYTE *)(v9 + 44) )
          {
            if ( a2 == v7 )
              return v6;
            ++v7;
          }
          ++v6;
        }
        while ( v5 != v6 );
      }
    }
  }
  return (unsigned int)-1;
}
