__int64 __fastcall sub_499B10(QT::QObject *this, QT::QFont *a2)
{
  int v2; // ebp
  QT::QHeaderView *v3; // rax
  QT::QHeaderView *v4; // rdi
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  sub_4EB870(this, a2);
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)v6, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
  v2 = QT::QFontMetrics::height((QT::QFontMetrics *)v6) + 2;
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)v6);
  v3 = (QT::QHeaderView *)QT::QTableView::verticalHeader(this);
  QT::QHeaderView::setMinimumSectionSize(v3, v2);
  v4 = (QT::QHeaderView *)QT::QTableView::verticalHeader(this);
  return QT::QHeaderView::setDefaultSectionSize(v4, v2);
}
