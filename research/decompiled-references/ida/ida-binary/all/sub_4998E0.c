unsigned __int64 __fastcall sub_4998E0(QT::QObject *this, __int64 a2, QT::QWidget *a3)
{
  QT::QHeaderView *v3; // rax
  QT::QWidget *v4; // rax
  __int64 v5; // rax
  QT::QHeaderView *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  QT::QTableView::QTableView(this, a3);
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)this = &chooser_table_widget_t___vtable;
  *((_QWORD *)this + 2) = chooser_table_widget_t___vtable_at__16;
  QT::QTableView::setShowGrid(this, 0);
  v3 = (QT::QHeaderView *)QT::QTableView::verticalHeader(this);
  QT::QHeaderView::setHighlightSections(v3, 0);
  v4 = (QT::QWidget *)QT::QTableView::verticalHeader(this);
  QT::QWidget::hide(v4);
  v5 = QT::QTableView::horizontalHeader(this);
  QT::QHeaderView::setDefaultAlignment(v5, 1);
  v6 = (QT::QHeaderView *)QT::QTableView::horizontalHeader(this);
  QT::QHeaderView::setHighlightSections(v6, 0);
  v7 = QT::QTableView::horizontalHeader(this);
  QT::QObject::connect(&v10, v7, "2sectionClicked(int)", a2, "1on_header_section_clicked(int)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v10);
  v8 = QT::QTableView::horizontalHeader(this);
  QT::QObject::connect(&v10, v8, "2sectionResized(int, int, int)", a2, "1on_header_section_resized(int, int, int)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v10);
  QT::QAbstractItemView::setSelectionBehavior(this, 1);
  QT::QAbstractItemView::setSelectionMode(this, 3);
  QT::QAbstractItemView::setHorizontalScrollMode(this, 1);
  QT::QWidget::setFocusPolicy(this, 11);
  QT::QTableView::setWordWrap(this, 0);
  sub_4EBBA0(this);
  return v11 - __readfsqword(0x28u);
}
