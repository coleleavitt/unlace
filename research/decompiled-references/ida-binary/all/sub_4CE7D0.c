__int64 __fastcall sub_4CE7D0(QT::QWidget *this, int a2)
{
  QT::QWidget *v3; // rbp
  QT::QStackedWidget *v4; // rbp
  QT::QLayout *v5; // rax
  QT::QLayout *v6; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  *((_DWORD *)this + 14) = a2;
  *((_QWORD *)this + 10) = 0;
  *((_BYTE *)this + 88) = 0;
  v3 = (QT::QWidget *)operator new(0x50u);
  sub_4CDBE0(v3, this);
  *((_QWORD *)this + 8) = v3;
  QT::QTabBar::setElideMode(v3, 1);
  v4 = (QT::QStackedWidget *)operator new(0x28u);
  QT::QStackedWidget::QStackedWidget(v4, this);
  *((_QWORD *)this + 9) = v4;
  QT::QObject::setObjectName(v4, "qt_tabwidget_stackedwidget", 26);
  v5 = (QT::QLayout *)QT::QWidget::layout(this);
  QT::QLayout::addWidget(v5, *((QT::QWidget **)this + 8));
  v6 = (QT::QLayout *)QT::QWidget::layout(this);
  QT::QLayout::addWidget(v6, *((QT::QWidget **)this + 9));
  QT::QObject::connect(v8, *((_QWORD *)this + 8), "2currentChanged(int)", this, "1dockTabChanged(int)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v8);
  QT::QObject::connect(v8, *((_QWORD *)this + 8), "2tabMoved(int,int)", this, "1dockTabMoved(int,int)", 1);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v8);
  QT::QObject::connect(v8, *((_QWORD *)this + 9), "2widgetRemoved(int)", this, "1dockStackedRemoved(int)", 1);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v8);
  QT::QObject::connect(v8, *((_QWORD *)this + 8), "2tabCloseRequested(int)", this, "1requestCloseAt(int)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v8);
  return QT::QObject::installEventFilter(*((QT::QObject **)this + 9), this);
}
