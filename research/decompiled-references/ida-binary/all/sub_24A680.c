__int64 __fastcall sub_24A680(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  QT::QMenu *v9; // rax
  QT::QMenu *v10; // rax
  QT::QMenu *v11; // rax
  QT::QAction *v12; // rbx
  _BOOL4 v13; // esi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( a1 )
  {
    get_debugger_plugins(0);
  }
  else if ( !dbg )
  {
    term_plugins(32);
  }
  v9 = (QT::QMenu *)sub_53DC50(qword_8CD748, "DebuggerRunTo");
  sub_24A3B0(a1, v9, (__int64)"1run_debugger()", 0);
  v10 = (QT::QMenu *)sub_53DC50(qword_8CD748, "DebuggerAttach");
  sub_24A3B0(a1, v10, (__int64)"1attach_debugger()", 1);
  v11 = (QT::QMenu *)sub_53DC50(qword_8CD748, "DebuggerRunToAndAttach");
  v12 = (QT::QAction *)QT::QMenu::menuAction(v11);
  sub_53DC50(qword_8CD748, "DebuggerRunTo");
  QT::QWidget::actions((QT::QWidget *)ptr);
  v13 = ptr[2] != nullptr;
  QT::QAction::setVisible(v12, v13);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return sub_312B60((_DWORD)qword_8CD748, v13, v14, v15, v16, v17, a7, a8, a9);
}
