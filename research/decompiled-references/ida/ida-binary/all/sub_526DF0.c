unsigned __int64 __fastcall sub_526DF0(__int64 a1, char *a2)
{
  __int64 StandardContextMenu; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  void (__fastcall *v5)(_QWORD *, _QWORD *, void **); // rax
  void *ptr[4]; // [rsp+0h] [rbp-D8h] BYREF
  _QWORD v8[17]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v9; // [rsp+A8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  sub_532F10(v8, a1);
  StandardContextMenu = QT::QPlainTextEdit::createStandardContextMenu(a1, a2 + 40);
  v3 = v8[0];
  v4 = StandardContextMenu;
  QT::QWidget::actions((QT::QWidget *)ptr);
  QT::QWidget::addActions(v3, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = *(void (__fastcall **)(_QWORD *, _QWORD *, void **))(*QT::QCoreApplication::self + 184LL);
  LODWORD(ptr[0]) = 1;
  ptr[1] = a2;
  ptr[2] = nullptr;
  v5(QT::QCoreApplication::self, v8, ptr);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  sub_531E50(v8);
  return v9 - __readfsqword(0x28u);
}
