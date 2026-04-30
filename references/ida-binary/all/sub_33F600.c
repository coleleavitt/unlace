void __fastcall navband_t__::vfunc_3(QT::QWidget *this, const char *a2)
{
  int v3; // eax
  __int64 v4; // rbp
  void *v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  *((_QWORD *)this + 15) = 0;
  *(_QWORD *)this = &navband_t___vtable;
  *((_QWORD *)this + 5) = navband_t___vtable_at__40;
  v3 = *((_DWORD *)this + 102);
  *((_QWORD *)this + 2) = navband_t___vtable_at__16;
  if ( v3 )
    QT::QBasicTimer::stop((QT::QWidget *)((char *)this + 408));
  v4 = *((_QWORD *)this + 46);
  while ( v4 )
  {
    sub_33F010(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    a2 = (const char *)&qword_28;
    operator delete(v5, 0x28u);
  }
  QT::QPixmap::~QPixmap((QT::QWidget *)((char *)this + 312));
  QT::QPixmap::~QPixmap((QT::QWidget *)((char *)this + 288));
  QT::QPixmap::~QPixmap((QT::QWidget *)((char *)this + 264));
  v6 = *((_QWORD *)this + 29);
  if ( v6 )
  {
    *((_QWORD *)this + 30) = 0;
    qfree(v6, a2);
  }
  v7 = *((_QWORD *)this + 14);
  if ( v7 )
  {
    *((_QWORD *)this + 15) = 0;
    qfree(v7, a2);
  }
  v8 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 5) = &stylable_widget_mixin_t___vtable;
  if ( v8 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v8, a2);
  }
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
  {
    *((_QWORD *)this + 7) = 0;
    qfree(v9, a2);
  }
  QT::QWidget::~QWidget(this);
}
