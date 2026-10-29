__int64 __fastcall sub_2EF6B0(double a1)
{
  __int64 v1; // rax
  QT::QMenu *v2; // rdi
  QT::QAction *v3; // rbx
  __int64 ph; // rbp
  bool v5; // si

  v1 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 224LL))(QT::QCoreApplication::self);
  v2 = (QT::QMenu *)sub_53DC50(v1, "Lumina");
  v3 = (QT::QAction *)QT::QMenu::menuAction(v2);
  ph = get_ph(v2, "Lumina");
  v5 = 0;
  if ( (unsigned __int8)netnode_inited(a1) )
    v5 = (*(_BYTE *)(ph + 12) & 0x20) != 0;
  return QT::QAction::setVisible(v3, v5);
}
