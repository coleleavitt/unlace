__int64 __fastcall actions_inspector_chooser_widget_t__::vfunc_6(QT::QObject *a1, QT::QObject *a2, QT::QEvent *a3)
{
  __int64 v4; // rax
  int v6; // [rsp+10h] [rbp-C8h] BYREF
  QT::QEvent *v7; // [rsp+18h] [rbp-C0h]
  __int64 v8; // [rsp+20h] [rbp-B8h]
  _BYTE v9[136]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v10; // [rsp+B8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( *((QT::QObject **)a1 + 298) != a2 || *((_WORD *)a3 + 4) != 82 )
    return QT::QObject::eventFilter(a1, a2, a3);
  sub_532F10(v9, a1);
  v4 = *QT::QCoreApplication::self;
  v7 = a3;
  v6 = 1;
  v8 = 0;
  (*(void (__fastcall **)(_QWORD *, _BYTE *, int *))(v4 + 184))(QT::QCoreApplication::self, v9, &v6);
  sub_531E50(v9);
  return 1;
}
