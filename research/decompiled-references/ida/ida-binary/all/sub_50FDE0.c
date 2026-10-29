__int64 __fastcall sub_50FDE0(QT::QWidget *this, const QT::QString *a2, __int64 a3)
{
  QT::QVBoxLayout *v3; // rbp

  *((_QWORD *)this + 7) = a3;
  v3 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v3);
  *((_QWORD *)this + 5) = v3;
  QT::QLayoutItem::setAlignment((char *)v3 + 16, 33);
  QT::QLayout::setContentsMargins(*((QT::QLayout **)this + 5), 0, 0, 0, 0);
  QT::QWidget::setLayout(this, *((QT::QLayout **)this + 5));
  if ( *((_QWORD *)a2 + 2) )
    sub_50FBD0((__int64)this, a2, 1);
  QT::QBoxLayout::addWidget(*((_QWORD *)this + 5), *((_QWORD *)this + 7), 0, 0);
  return QT::QWidget::setFocusProxy(this, *((QT::QWidget **)this + 7));
}
