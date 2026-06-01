__int64 __fastcall sub_1EC5D0(QT::QAbstractScrollArea *a1, __int64 a2, double a3)
{
  QT::QAbstractScrollArea *v3; // rbx
  __int64 v4; // rax
  void (*v5)(void); // rax
  QT::QWidget *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbp

  v3 = a1;
  v4 = *(_QWORD *)a1;
  qword_8CB510 = (__int64)a1;
  v5 = *(void (**)(void))(v4 + 760);
  if ( (char *)v5 == (char *)sub_1E6980 )
  {
    v6 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(a1);
    QT::QWidget::update(v6);
    a1 = *((QT::QAbstractScrollArea **)a1 + 96);
    if ( a1 && *(char *)(*((_QWORD *)a1 + 4) + 9LL) < 0 )
      QT::QWidget::update(a1);
  }
  else
  {
    v5();
  }
  if ( !*((_BYTE *)v3 + 968) )
    return sub_459C80(v3);
  if ( *((_QWORD *)v3 + 53) )
  {
    v9 = *((_DWORD *)v3 + 104);
    switch ( v9 )
    {
      case 2:
        v10 = *((_QWORD *)v3 + 112);
        break;
      case 3:
        v10 = *((_QWORD *)v3 + 113);
        break;
      case 1:
        v10 = *((_QWORD *)v3 + 111);
        break;
      default:
        return sub_459C80(v3);
    }
    if ( v10 )
    {
      if ( *(char *)(*((_QWORD *)v3 + 4) + 9LL) >= 0 )
        (*(void (__fastcall **)(QT::QAbstractScrollArea *))(*(_QWORD *)v3 + 960LL))(v3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 336LL))(v10);
    }
    return sub_459C80(v3);
  }
  sub_1E69C0(a3, (__int64)a1, a2, v7, v8);
  return sub_1EC6D0();
}
