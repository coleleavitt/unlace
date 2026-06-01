QT::QWidget *__fastcall sub_4EE3E0(__int64 a1, __int64 a2)
{
  QT::QWidget *v2; // rbp
  QT::QHBoxLayout *v3; // rbx
  QT::QComboBox *v4; // r12
  QT::QPushButton *v5; // r12
  int v6; // eax
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  int v9[2]; // [rsp+18h] [rbp-30h]

  *(_QWORD *)v9 = __readfsqword(0x28u);
  v2 = (QT::QWidget *)operator new(0x28u);
  QT::QWidget::QWidget(v2, 0, 0);
  v3 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v3);
  *(_OWORD *)ptr = 0;
  QT::QLayout::setContentsMargins(v3, ptr);
  v4 = sub_4EDDB0(a2, *(_QWORD *)(a2 + 136), 0.0);
  QT::QBoxLayout::addWidget(v3, v4, 0, 0);
  QT::QWidget::setFocusProxy(v2, v4);
  QT::QWidget::setFocusPolicy(v2, 11);
  QT::QString::fromUtf8(ptr, 3, byte_5C2717);
  v5 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v5, (const QT::QString *)ptr, nullptr);
  v6 = sub_4F9CA0((QT::QString *)ptr);
  QT::QWidget::setMaximumWidth(v5, v6);
  QT::QWidget::sizePolicy(v5);
  QT::QBoxLayout::addWidget(v3, v5, 0, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QWidget::setLayout(v2, v3);
  return v2;
}
