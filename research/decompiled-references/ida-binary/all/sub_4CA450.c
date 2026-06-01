__int64 __fastcall sub_4CA450(QT::QWidget *a1, QT::QWidget *a2, double a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  QT::QStackedWidget ***v6; // rax
  QT::QStackedWidget **v7; // rbp
  QT::QWidget *v8; // r13
  __int64 (__fastcall *v9)(__int64); // rax
  int v10; // r14d
  __int64 (__fastcall *v11)(__int64, int); // rax
  const QT::QObject *v12; // rsi
  __int64 v13; // r12
  void (__fastcall *v14)(QT::QWidget *, _QWORD, __int64); // r15
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 (__fastcall **v19)(); // [rsp+0h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+8h] [rbp-50h]
  char v21; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v3 = *((_QWORD **)a1 + 5);
  v22 = __readfsqword(0x28u);
  if ( !*v3 || !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 464LL))(*v3) )
    return v22 - __readfsqword(0x28u);
  v6 = *((QT::QStackedWidget ****)a1 + 5);
  v7 = *v6;
  v19 = DockArea::countDockWidgets;
  v20 = 0;
  v21 = 1;
  if ( v7 || (v7 = *v6) != nullptr )
  {
    a2 = (QT::QWidget *)v7;
    sub_4CF2F0(&v19);
    v4 = v20;
    v7 = **((QT::QStackedWidget ****)a1 + 5);
    if ( *((_DWORD *)v7 + 10) == 2 && v20 == 1 )
    {
      v8 = (QT::QWidget *)operator new(0x70u);
      sub_4D0770(v8);
      a2 = a1;
      QT::QWidget::setParent(v8, a1);
      **((_QWORD **)a1 + 5) = v8;
      sub_4C5F10(a1);
      v9 = *((__int64 (__fastcall **)(__int64))*v7 + 58);
      if ( v9 == sub_4C46A0 )
        v10 = QT::QStackedWidget::count(v7[9]);
      else
        v10 = v9((__int64)v7);
      for ( ; v10; --v10 )
      {
        v11 = *((__int64 (__fastcall **)(__int64, int))*v7 + 57);
        if ( v11 == sub_4C46C0 )
        {
          v12 = (const QT::QObject *)QT::QStackedWidget::widget(v7[9], 0);
          v13 = QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v12);
        }
        else
        {
          v13 = v11((__int64)v7, 0);
        }
        v14 = *(void (__fastcall **)(QT::QWidget *, _QWORD, __int64))(*(_QWORD *)v8 + 472LL);
        v15 = (*(__int64 (__fastcall **)(QT::QWidget *))(*(_QWORD *)v8 + 512LL))(v8);
        v14(v8, v15, v13);
        a2 = (QT::QWidget *)v13;
        if ( *(_BYTE *)(v13 + 44) )
          sub_4C97F0(a1, (__int64 *)v13, a3);
        else
          sub_4CA250((__int64)a1, (QT::QWidget *)v13, 0, v16, v17, v18, a3);
      }
      v7 = **((QT::QStackedWidget ****)a1 + 5);
    }
  }
  if ( (*((int (__fastcall **)(QT::QStackedWidget **, QT::QWidget *, __int64))*v7 + 58))(v7, a2, v4) <= 1 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***((_QWORD ***)a1 + 5) + 456LL))(**((_QWORD **)a1 + 5), 0);
  else
    return v22 - __readfsqword(0x28u);
}
