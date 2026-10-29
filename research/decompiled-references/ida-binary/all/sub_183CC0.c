__int64 __fastcall sub_183CC0(__int64 a1, const QT::QObject **a2, double a3)
{
  char *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rbx
  unsigned int *v7; // rax
  unsigned int *v8; // r12
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  unsigned int *v11; // rax
  int v12; // r13d
  const char *v13; // rdi
  __int64 v14; // rbx

  v3 = *(char **)(a1 + 192);
  v4 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, *a2);
  if ( v4 )
  {
    v5 = v4 + 576;
    v6 = v4;
    v7 = (unsigned int *)sub_1E8D00(v4 + 576);
    v8 = v7;
    if ( v7 )
    {
      v9 = *v7;
      v10 = v7[18];
      v11 = (unsigned int *)sub_1E9510(v5, v7);
      if ( v11 )
      {
        LOBYTE(v12) = 1;
        sub_183620(v3, v6, *v11, a3);
      }
      else
      {
        v12 = (v10 >> 2) & 1;
        sub_183620(v3, v6, v9, a3);
      }
      v13 = &s1;
      if ( *((_QWORD *)v8 + 5) )
        v13 = *((const char **)v8 + 4);
      v14 = sub_1E8D50(v13);
      QT::QAction::setCheckable((QT::QAction *)v3, 1);
      QT::QAction::setChecked((QT::QAction *)v3, v12 & (v14 != 0));
      if ( !v14 )
        return 7;
    }
    else
    {
      sub_183620(v3, v6, 0xFFFFFFFF, a3);
      QT::QAction::setCheckable((QT::QAction *)v3, 1);
      QT::QAction::setChecked((QT::QAction *)v3, 0);
    }
    return 3;
  }
  QT::QAction::setCheckable((QT::QAction *)v3, 1);
  QT::QAction::setChecked((QT::QAction *)v3, 0);
  return 7;
}
