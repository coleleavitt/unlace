__int64 __fastcall sub_1F6260(__int64 a1)
{
  QT::QWidget *v1; // rbp

  v1 = (QT::QWidget *)operator new(0x60u);
  sub_27F990(v1, a1, a1);
  *(_QWORD *)(a1 + 768) = v1;
  QT::QWidget::setAutoFillBackground(v1, 1);
  return QT::QWidget::setContentsMargins(*(QT::QWidget **)(a1 + 768), 0, 0, 0, 0);
}
