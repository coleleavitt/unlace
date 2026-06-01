unsigned __int64 __fastcall sub_30F260(QT::QMainWindow *this, __int64 a2, double a3)
{
  __int64 v3; // rax
  QT::QStatusBar *v4; // rax
  __int64 v6; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v7[5]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  sub_2DE620((QT::QMenu *)v7, nullptr);
  QT::QObject::setObjectName(v7, "ctxmenu", 7);
  sub_2DE800((QT::QWidget *)v7, unk_8C9BE0, a3);
  sub_2DE800((QT::QWidget *)v7, unk_8CA210, a3);
  if ( (unsigned __int8)QT::QAction::isEnabled(unk_8C9F68) )
    sub_2DE800((QT::QWidget *)v7, unk_8C9F68, a3);
  v3 = QT::QMainWindow::statusBar(this);
  v6 = QT::QWidget::mapToGlobal(v3, a2);
  QT::QMenu::exec(v7, &v6, 0);
  v4 = (QT::QStatusBar *)QT::QMainWindow::statusBar(this);
  QT::QStatusBar::clearMessage(v4);
  v7[2] = IdaMenu___vtable_at__16;
  v7[0] = &IdaMenu___vtable;
  QT::QMenu::~QMenu((QT::QMenu *)v7);
  return v8 - __readfsqword(0x28u);
}
