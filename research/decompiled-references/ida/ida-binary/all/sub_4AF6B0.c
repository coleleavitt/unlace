__int64 __fastcall sub_4AF6B0(QT::QPushButton **this, QT::QString *a2, char a3)
{
  QT::QAbstractButton *v4; // rbp
  QT::QHBoxLayout *v5; // rbp
  __int64 v6; // rsi
  QT::QPushButton *v8; // r12
  double v9; // xmm0_8
  QT::QAbstractButton *v10; // r12
  int v11; // eax
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v4 = (QT::QAbstractButton *)operator new(0x58u);
  sub_4AF510(v4, (QT::QWidget *)this, 2);
  *(this + 5) = v4;
  if ( a2 )
    QT::QAbstractButton::setText(v4, a2);
  if ( a3 )
  {
    v8 = (QT::QPushButton *)operator new(0x28u);
    QT::QPushButton::QPushButton(v8, nullptr);
    *(this + 6) = v8;
    v9 = QT::QString::fromUtf8(ptr, 11, "Reset color");
    QT::QWidget::setToolTip(v8, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v10 = *(this + 6);
    (*(void (__fastcall **)(void **, _QWORD *, __int64, double))(*QT::QCoreApplication::self + 136LL))(
      ptr,
      QT::QCoreApplication::self,
      203,
      v9);
    QT::QAbstractButton::setIcon(v10, (const QT::QIcon *)ptr);
    QT::QIcon::~QIcon((QT::QIcon *)ptr);
    QT::QPushButton::setFlat(*(this + 6), 1);
    v11 = QT::QWidget::sizePolicy(*(this + 6));
    QT::QWidget::setSizePolicy(*(this + 6), v11 | 0x80000000);
    QT::QWidget::hide(*(this + 6));
    QT::QObject::connect(ptr, *(this + 6), "2clicked()", this, "1on_reset_button_clicked()", 0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  }
  else
  {
    *(this + 6) = nullptr;
  }
  QT::QObject::connect(
    ptr,
    *(this + 5),
    "2colorChanged(const QColor &)",
    this,
    "1on_color_button_colorChanged(const QColor &)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v5 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v5);
  QT::QLayout::setContentsMargins(v5, 0, 0, 0, 0);
  QT::QBoxLayout::addWidget(v5, *(this + 5), 0, 0);
  v6 = (__int64)*(this + 6);
  if ( v6 )
    QT::QBoxLayout::addWidget(v5, v6, 0, 0);
  QT::QWidget::setLayout((QT::QWidget *)this, v5);
  return QT::QWidget::setSizePolicy(this, 2147549184LL);
}
