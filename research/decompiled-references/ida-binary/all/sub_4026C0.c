QT::QObject *__fastcall sub_4026C0(__int64 a1, char a2)
{
  __int64 v2; // rbp
  __int64 *func; // rax
  __int64 v4; // rcx
  QT::QObject **v5; // rax
  QT::QObject **v6; // rdx
  QT::QObject *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v2 = a1;
  if ( a1 == -1 )
    v2 = xmmword_8CC810;
  if ( !a2 )
    goto LABEL_11;
  func = (__int64 *)get_func(v2);
  if ( func )
  {
    v4 = *func;
    if ( *func == -1 )
      v4 = v2;
  }
  else
  {
    v4 = v2;
  }
  v5 = (QT::QObject **)qword_8D14A0;
  v6 = (QT::QObject **)(qword_8D14A0 + 8 * xmmword_8D14A8);
  if ( (QT::QObject **)qword_8D14A0 == v6 )
  {
LABEL_11:
    v7 = (QT::QObject *)operator new(0x1D8u);
    sub_401EC0(v7, v2, 0);
    QT::QWidget::setAttribute(v7, 55, 1, v8, v9, v10);
  }
  else
  {
    while ( 1 )
    {
      v7 = *v5;
      if ( *v5 )
      {
        if ( *((_QWORD *)v7 + 35) == v4 )
          break;
      }
      if ( v6 == ++v5 )
        goto LABEL_11;
    }
  }
  sub_479090(QT::QCoreApplication::self + 2, v7, 1);
  return v7;
}
