__int64 __fastcall sub_345BD0(QT::QWidget *this)
{
  QT::QGridLayout *v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rax
  QT::QVBoxLayout *v5; // r12
  __int64 v6; // [rsp+0h] [rbp-28h]
  __int64 v7; // [rsp+0h] [rbp-28h]

  v1 = (QT::QGridLayout *)operator new(0x20u);
  QT::QGridLayout::QGridLayout(v1, nullptr);
  QT::QLayout::setContentsMargins(v1, 0, 0, 0, 0);
  QT::QGridLayout::setVerticalSpacing(v1, 0);
  v2 = *((_QWORD *)this + 89);
  if ( *(_BYTE *)(*((_QWORD *)this + 87) + 345LL) )
  {
    QT::QGridLayout::addWidget(v1, v2, 0, 0, 0);
    QT::QGridLayout::addWidget(v1, *((_QWORD *)this + 90), 0, 1, 0);
    QT::QGridLayout::addWidget(v1, *((_QWORD *)this + 87), 1, 0, 1, 2, 0);
    QT::QGridLayout::addWidget(v1, *((_QWORD *)this + 91), 2, 0, 0);
    QT::QGridLayout::addWidget(v1, *((_QWORD *)this + 92), 2, 1, 0);
    QT::QGridLayout::setRowStretch(v1, 1, 1000);
  }
  else
  {
    QT::QGridLayout::addWidget(v1, v2, 0, 0, 0);
    QT::QGridLayout::addWidget(v1, *((_QWORD *)this + 91), 1, 0, 0);
    QT::QGridLayout::addWidget(v1, *((_QWORD *)this + 87), 0, 1, 2, 1, 0);
    QT::QGridLayout::addWidget(v1, *((_QWORD *)this + 90), 0, 2, 0);
    QT::QGridLayout::addWidget(v1, *((_QWORD *)this + 92), 1, 2, 0);
    QT::QGridLayout::setColumnStretch(v1, 1, 1000);
    QT::QGridLayout::addWidget(v1, *((_QWORD *)this + 10), 0, 3, 2, 1, 0);
    LODWORD(v6) = 0;
    QT::QGridLayout::addWidget(v1, *((_QWORD *)this + 88), 0, 4, 2, 1, v6);
    LODWORD(v7) = 0;
    QT::QGridLayout::addWidget(v1, *((_QWORD *)this + 11), 0, 5, 2, 1, v7);
    v5 = (QT::QVBoxLayout *)operator new(0x20u);
    QT::QVBoxLayout::QVBoxLayout(v5);
    QT::QLayout::setContentsMargins(v5, 3, 3, 3, 3);
    QT::QBoxLayout::addWidget(v5, *((_QWORD *)this + 86), 0, 0);
    QT::QBoxLayout::addLayout(v5, v1, 0);
    v1 = v5;
    QT::QBoxLayout::addWidget(v5, *((_QWORD *)this + 6), 0, 0);
  }
  v3 = QT::QWidget::layout(this);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  return QT::QWidget::setLayout(this, v1);
}
