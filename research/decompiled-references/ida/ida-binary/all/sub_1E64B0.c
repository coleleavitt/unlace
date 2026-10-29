unsigned __int64 __fastcall sub_1E64B0(QT::QApplication *a1, const QT::QString *a2)
{
  __int64 active; // rax
  QT::QPushButton *v3; // rax
  _QWORD v5[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 (__fastcall **v6)(); // [rsp+10h] [rbp-48h]
  __int64 v7; // [rsp+20h] [rbp-38h]
  void *v8; // [rsp+30h] [rbp-28h]
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  active = QT::QApplication::activeWindow(a1);
  sub_1E63D0((QT::QWidget *)v5, active);
  QT::QWidget::setWindowFlags(v5, *(_DWORD *)(v7 + 12) & 0xFFFEFFFF);
  v3 = (QT::QPushButton *)QT::QDialogButtonBox::button(*((_QWORD *)v8 + 3), 1024);
  QT::QPushButton::setDefault(v3, 1);
  QT::QTextEdit::setPlainText(*((QT::QTextEdit **)v8 + 2), a2);
  sub_53AB40((QT::QWidget *)v5);
  v5[0] = &CustomHelpDialog___vtable;
  v6 = CustomHelpDialog___vtable_at__16;
  if ( v8 )
    operator delete(v8, 0x20u);
  v6 = ui_dialog_t___vtable_at__16;
  v5[0] = &ui_dialog_t___vtable;
  QT::QDialog::~QDialog((QT::QDialog *)v5);
  return v9 - __readfsqword(0x28u);
}
