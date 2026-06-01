void __fastcall sub_1A0C30(QT::QWidget *this, QT::QWidget *a2)
{
  QT::QVBoxLayout *v2; // rbp

  if ( this )
  {
    v2 = (QT::QVBoxLayout *)QT::QWidget::layout(this);
    if ( !v2 )
    {
      v2 = (QT::QVBoxLayout *)operator new(0x20u);
      QT::QVBoxLayout::QVBoxLayout(v2);
      QT::QLayout::setContentsMargins(v2, 0, 0, 0, 0);
    }
    QT::QLayout::addWidget(v2, a2);
    if ( v2 != (QT::QVBoxLayout *)QT::QWidget::layout(this) )
      QT::QWidget::setLayout(this, v2);
    QT::QWidget::setFocusProxy(this, a2);
  }
}
