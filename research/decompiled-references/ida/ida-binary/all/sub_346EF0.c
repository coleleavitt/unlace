__int64 __fastcall sub_346EF0(QT::QWidget *a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  const char *v4; // rax
  double v5; // xmm0_8
  __int64 v6; // rdx
  const char *v7; // rax
  void *ptr[4]; // [rsp+0h] [rbp-68h] BYREF
  void *v10[9]; // [rsp+20h] [rbp-48h] BYREF

  v10[3] = (void *)__readfsqword(0x28u);
  v2 = operator new(0x30u);
  QT::QPushButton::QPushButton((QT::QPushButton *)v2, a1);
  *(_DWORD *)(v2 + 40) = 8;
  *(_BYTE *)(v2 + 44) = a2;
  *(_QWORD *)v2 = &nav_scroll_button_t___vtable;
  *(_QWORD *)(v2 + 16) = nav_scroll_button_t___vtable_at__16;
  QT::QPushButton::setFlat((QT::QPushButton *)v2, 1);
  v3 = 11;
  v4 = "Scroll down";
  if ( a2 )
  {
    v3 = 9;
    v4 = "Scroll up";
  }
  v5 = QT::QString::fromUtf8(ptr, v3, v4);
  QT::QWidget::setToolTip((QT::QWidget *)v2, (const QT::QString *)ptr);
  QT::QWidget::setAccessibleName((QT::QWidget *)v2, (const QT::QString *)ptr);
  v6 = 33;
  v7 = "Scroll the disassembly listing up";
  if ( !a2 )
  {
    v6 = 35;
    v7 = "Scroll the disassembly listing down";
  }
  QT::QString::fromUtf8(v10, v6, v7, v5);
  QT::QWidget::setAccessibleDescription((QT::QWidget *)v2, (const QT::QString *)v10);
  if ( v10[0] && !_InterlockedSub((volatile signed __int32 *)v10[0], 1u) )
    free(v10[0]);
  QT::QAbstractButton::setAutoRepeat((QT::QAbstractButton *)v2, 1);
  QT::QAbstractButton::setAutoRepeatDelay((QT::QAbstractButton *)v2, 500);
  QT::QAbstractButton::setAutoRepeatInterval((QT::QAbstractButton *)v2, 100);
  QT::QWidget::setSizePolicy(v2, &unk_770000);
  QT::QObject::installEventFilter((QT::QObject *)v2, a1);
  QT::QObject::connect(v10, v2, "2clicked()", a1, "1on_nav_scroll_button_clicked()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v10);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v2;
}
