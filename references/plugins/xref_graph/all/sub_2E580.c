unsigned __int64 __fastcall sub_2E580(QT::QWidget *this, QT::QGraphicsScene *a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  QT::QWidget *v8; // r12
  __int64 v9; // rax
  _BYTE v11[8]; // [rsp+8h] [rbp-58h] BYREF
  _QWORD v12[5]; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  QT::QGraphicsView::QGraphicsView(this, a2, nullptr);
  *(_QWORD *)this = &minimap_t___vtable;
  *((_QWORD *)this + 2) = minimap_t___vtable_at__16;
  *((_QWORD *)this + 5) = a3;
  QT::QGraphicsView::setInteractive(this, 0);
  QT::QGraphicsView::setViewportUpdateMode(this, 0);
  QT::QGraphicsView::setRenderHint(this, 1, 1);
  v4 = QT::QWidget::sizePolicy(this);
  QT::QWidget::setSizePolicy(this, ((HIBYTE(v4) | 0x60) << 24) | v4 & 0xFFFFFF);
  QT::QWidget::setMinimumHeight(this, 200);
  QT::QWidget::setMinimumWidth(this, 200);
  QT::QWidget::setMaximumHeight(this, 200);
  QT::QWidget::setMaximumWidth(this, 200);
  QT::QAbstractScrollArea::setHorizontalScrollBarPolicy(this, 1);
  QT::QAbstractScrollArea::setVerticalScrollBarPolicy(this, 1);
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                          202,
                          1,
                          &callui,
                          v5,
                          v6,
                          v7) )
  {
    v8 = (QT::QWidget *)operator new(0x28u);
    QT::QOpenGLWidget::QOpenGLWidget(v8, 0, 0);
    QT::QAbstractScrollArea::setViewport(this, v8);
  }
  QT::QGraphicsView::setResizeAnchor(this, 1);
  QT::QGraphicsScene::sceneRect((QT::QGraphicsScene *)v12);
  QT::QGraphicsView::fitInView(this, v12, 1);
  QT::QGraphicsView::scale(this, 0.8, 0.8);
  v12[1] = 0;
  v12[0] = &QT::QGraphicsScene::sceneRectChanged;
  v9 = operator new(0x18u);
  *(_DWORD *)v9 = 1;
  *(_QWORD *)(v9 + 8) = sub_2D310;
  *(_QWORD *)(v9 + 16) = this;
  QT::QObject::connectImpl(v11, a2, v12, this, 0, v9, 0, 0, &QT::QGraphicsScene::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v11);
  return v13 - __readfsqword(0x28u);
}
