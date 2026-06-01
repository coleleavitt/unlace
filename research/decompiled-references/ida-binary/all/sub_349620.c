unsigned __int64 __fastcall sub_349620(QT::QPlainTextEdit *this, __int64 a2)
{
  __int64 StandardContextMenu; // rax
  __int64 v3; // r15
  __int64 v4; // rbx
  _QWORD *v5; // r15
  void (__fastcall *v6)(_QWORD *, _QWORD *, void **); // r14
  void *ptr[4]; // [rsp+10h] [rbp-E8h] BYREF
  _QWORD v9[17]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v10; // [rsp+B8h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  sub_532F10(v9, this);
  StandardContextMenu = QT::QPlainTextEdit::createStandardContextMenu(this);
  v3 = v9[0];
  v4 = StandardContextMenu;
  QT::QWidget::actions((QT::QWidget *)ptr);
  QT::QWidget::addActions(v3, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = QT::QCoreApplication::self;
  v6 = *(void (__fastcall **)(_QWORD *, _QWORD *, void **))(*QT::QCoreApplication::self + 184LL);
  ptr[2] = (void *)QT::QWidget::mapToGlobal(this, a2);
  LODWORD(ptr[0]) = 2;
  v6(v5, v9, ptr);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  sub_531E50(v9);
  return v10 - __readfsqword(0x28u);
}
