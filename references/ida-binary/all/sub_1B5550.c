unsigned __int64 __fastcall sub_1B5550(__int64 a1, int *a2, __int64 a3, unsigned __int64 a4, int a5)
{
  int v5; // r9d
  const QT::QObject *v8; // rax
  const char *v9; // rsi
  QT::QWidget *v10; // r13
  const char *v11; // rdx
  const char *v12; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v5 = *a2;
  v14 = __readfsqword(0x28u);
  if ( v5 && a5 >= 0 && a5 < a4 )
  {
    v8 = (const QT::QObject *)QT::QStackedWidget::currentWidget(*(QT::QStackedWidget **)(*(_QWORD *)(a1 + 256) + 176LL));
    v9 = (const char *)&v12;
    v10 = (QT::QWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&off_881840, v8);
    v13 = 0;
    v12 = nullptr;
    if ( (unsigned __int8)sub_524BD0((char *)v10 + 40, &v12) )
    {
      v11 = &s1;
      if ( (_QWORD)v13 )
        v11 = v12;
      v9 = (const char *)v10;
      sub_1B53E0(a1, v10, v11, (__int64)a2);
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12, v9);
    }
  }
  return v14 - __readfsqword(0x28u);
}
