unsigned __int64 __fastcall sub_2ED730(QT::QSplitter *this, unsigned int *a2, double a3)
{
  QT::QScreen *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax
  bool v9; // zf
  int v10; // esi
  QT::QWidget *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // eax
  int v16; // edx
  int v17; // edx
  __int64 v18; // rax
  int v19; // eax
  int v20; // edx
  int v21; // edx
  void *ptr[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  QT::QSplitter::QSplitter(this, nullptr);
  *(_QWORD *)this = &listing_host_t___vtable;
  *((_QWORD *)this + 2) = listing_host_t___vtable_at__16;
  QT::QObject::QObject((QT::QSplitter *)((char *)this + 40), nullptr);
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 5) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)this + 40, (__int64)ptr[0]);
  *((_QWORD *)this + 9) = this;
  *((_QWORD *)this + 5) = &listing_host_child_monitor_t___vtable;
  QT::QObject::QObject((QT::QSplitter *)((char *)this + 80), nullptr);
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 10) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)this + 80, (__int64)ptr[0]);
  *((_QWORD *)this + 14) = this;
  *((_QWORD *)this + 10) = &listing_host_child_monitor_t___vtable;
  QT::QObject::QObject((QT::QSplitter *)((char *)this + 120), nullptr);
  v4 = (QT::QSplitter *)((char *)this + 120);
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 15) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)this + 120, (__int64)ptr[0]);
  *((_QWORD *)this + 19) = this;
  *((_QWORD *)this + 15) = &listing_host_child_monitor_t___vtable;
  v6 = *(_QWORD *)(a2 + 1);
  v7 = *a2;
  *((_QWORD *)this + 20) = v6;
  *((_DWORD *)this + 42) = v7;
  if ( (unsigned int)v6 >= 0xFFFFFFFE )
  {
    v4 = (QT::QScreen *)QT::QWidget::screen(this);
    v19 = QT::QScreen::availableGeometry(v4);
    v21 = 20 * (v20 + 1 - v19);
    v6 = v21;
    v7 = (unsigned int)(v21 >> 31);
    LODWORD(v6) = ((int)((unsigned __int64)(1374389535 * v6) >> 32) >> 5) - v7;
  }
  *((_DWORD *)this + 40) = v6;
  v8 = *((_DWORD *)this + 41);
  if ( v8 >= 0xFFFFFFFE )
  {
    v4 = (QT::QScreen *)QT::QWidget::screen(this);
    v15 = QT::QScreen::availableGeometry(v4);
    v17 = 20 * (v16 + 1 - v15);
    v18 = v17;
    v7 = (unsigned int)(v17 >> 31);
    v8 = ((int)((unsigned __int64)(1374389535 * v18) >> 32) >> 5) - v7;
  }
  v9 = *((_BYTE *)this + 64) == 0;
  *((_DWORD *)this + 41) = v8;
  if ( !v9 )
    sub_2ED710(a3, (__int64)v4, 0, v7, v5);
  v10 = a2[3];
  v11 = *((QT::QWidget **)this + 7);
  if ( v10 >= 0 )
    QT::QSplitter::setHandleWidth(this, v10);
  QT::QSplitter::addWidget(this, v11);
  QT::QWidget::setFocusProxy(this, v11);
  QT::QWidget::windowIcon((QT::QWidget *)ptr);
  QT::QWidget::setWindowIcon(this, (const QT::QIcon *)ptr);
  QT::QIcon::~QIcon((QT::QIcon *)ptr);
  QT::QWidget::windowTitle((QT::QWidget *)ptr);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  sub_1F42D0((__int64)v11, (__int64)this, v12, v13, a3);
  QT::QObject::connect(ptr, this, "2splitterMoved(int, int)", this, "1on_splitter_moved(int, int)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, v11, "2focus_acquired()", this, "1on_listing_focus_acquired()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  return v23 - __readfsqword(0x28u);
}
