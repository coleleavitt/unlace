unsigned __int64 __fastcall sub_51CDD0(QT::QWidget *a1, _DWORD *a2)
{
  __int64 v3; // rax
  const QT::QObject *v4; // rsi
  __int64 v5; // rdx
  int v6; // r14d
  void (__fastcall *v7)(_QWORD *, char *, void **); // rax
  __int64 StandardContextMenu; // rax
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v13; // [rsp+8h] [rbp-F0h]
  void *ptr[4]; // [rsp+20h] [rbp-D8h] BYREF
  char v15[136]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v16; // [rsp+C8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  sub_532F10(v15, a1);
  v3 = *((_QWORD *)a1 + 1);
  v13 = 0;
  v4 = *(const QT::QObject **)(v3 + 16);
  v12 = 0;
  v5 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89B360, v4);
  if ( v5 )
    sub_51CCB0(a1, &v12, v5, 0.0);
  v6 = a2[10];
  if ( (int)sub_51C0C0(a1, &v12) <= v6 )
  {
    StandardContextMenu = QT::QLineEdit::createStandardContextMenu(a1);
    v10 = *(_QWORD *)v15;
    v11 = StandardContextMenu;
    QT::QWidget::actions((QT::QWidget *)ptr);
    QT::QWidget::addActions(v10, ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    sub_5392E0(v15, 0, 1);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
  }
  v7 = *(void (__fastcall **)(_QWORD *, char *, void **))(*QT::QCoreApplication::self + 184LL);
  LODWORD(ptr[0]) = 1;
  ptr[1] = a2;
  ptr[2] = nullptr;
  v7(QT::QCoreApplication::self, v15, ptr);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12, v15);
  }
  sub_531E50(v15);
  return v16 - __readfsqword(0x28u);
}
