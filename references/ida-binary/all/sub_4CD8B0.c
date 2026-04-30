void __fastcall sub_4CD8B0(QT::QWidget *a1, __int64 a2, double a3)
{
  const QT::QObject *v4; // rbp
  QT::QWidget ***v5; // rax
  QT::QWidget **v6; // rdi
  QT::QWidget **v7; // rdx

  if ( *(_WORD *)(a2 + 8) == 71
    && !*((_BYTE *)a1 + 52)
    && (_UNKNOWN **)(***(__int64 (__fastcall ****)(_QWORD))(a2 + 16))(*(_QWORD *)(a2 + 16)) != &off_899940 )
  {
    v4 = *(const QT::QObject **)(*((_QWORD *)a1 + 1) + 16LL);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = (QT::QWidget ***)QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v4);
        if ( v5 )
          break;
        v4 = *(const QT::QObject **)(*((_QWORD *)v4 + 1) + 16LL);
        if ( !v4 )
          goto LABEL_9;
      }
      sub_4C9DF0(v5, a1, a3);
    }
LABEL_9:
    QT::QObject::deleteLater(a1);
    v6 = (QT::QWidget **)qword_8D1DE0;
    v7 = (QT::QWidget **)(qword_8D1DE0 + 8 * xmmword_8D1DE8);
    if ( (QT::QWidget **)qword_8D1DE0 != v7 )
    {
      while ( a1 != *v6 )
      {
        if ( v7 == ++v6 )
          return;
      }
      if ( v6 != v7 )
      {
        memmove(v6, v6 + 1, (char *)v7 - (char *)v6 - 8);
        *(_QWORD *)&xmmword_8D1DE8 = xmmword_8D1DE8 - 1;
      }
    }
  }
}
