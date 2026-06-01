__int64 __fastcall sub_186B30(__int64 a1)
{
  QT::QVBoxLayout *v1; // rbp
  unsigned int v2; // ebp
  void *ptr[4]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v5[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 (__fastcall **v6)(); // [rsp+30h] [rbp-58h]
  unsigned __int64 v7; // [rsp+58h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v1 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v1);
  QT::QBoxLayout::addWidget(v1, a1, 0, 0);
  sub_53A8A0(v5, qword_8CD748, 0);
  v5[0] = &ActionsInspectorDialog___vtable;
  v6 = ActionsInspectorDialog___vtable_at__16;
  sub_53A8F0(v5);
  QT::QWidget::windowTitle((QT::QWidget *)ptr);
  QT::QWidget::setWindowTitle((QT::QWidget *)v5, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QWidget::setLayout((QT::QWidget *)v5, v1);
  v2 = sub_53AB40((QT::QWidget *)v5);
  v6 = ui_dialog_t___vtable_at__16;
  v5[0] = &ui_dialog_t___vtable;
  QT::QDialog::~QDialog((QT::QDialog *)v5);
  return v2;
}
