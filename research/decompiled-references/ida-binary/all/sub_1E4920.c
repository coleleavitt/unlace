void __fastcall CustomCodeViewer__::vfunc_3(QT::QSplitter *this)
{
  QT::QSplitter **v2; // rdi
  QT::QSplitter **v3; // rdx

  *(_QWORD *)this = &CustomCodeViewer___vtable;
  *((_QWORD *)this + 2) = CustomCodeViewer___vtable_at__16;
  v2 = (QT::QSplitter **)qword_8CB450;
  v3 = (QT::QSplitter **)(qword_8CB450 + 8 * xmmword_8CB458);
  if ( (QT::QSplitter **)qword_8CB450 != v3 )
  {
    while ( this != *v2 )
    {
      if ( v3 == ++v2 )
        goto LABEL_7;
    }
    if ( v3 != v2 )
    {
      memmove(v2, v2 + 1, (char *)v3 - (char *)v2 - 8);
      *(_QWORD *)&xmmword_8CB458 = xmmword_8CB458 - 1;
    }
  }
LABEL_7:
  *((_QWORD *)this + 2) = listing_host_t___vtable_at__16;
  *(_QWORD *)this = &listing_host_t___vtable;
  *((_QWORD *)this + 15) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QSplitter *)((char *)this + 120));
  *((_QWORD *)this + 10) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QSplitter *)((char *)this + 80));
  *((_QWORD *)this + 5) = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QSplitter *)((char *)this + 40));
  QT::QSplitter::~QSplitter(this);
}
