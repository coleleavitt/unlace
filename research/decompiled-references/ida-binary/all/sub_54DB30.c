void __fastcall log_widget_t__::vfunc_4(QT::QAbstractScrollArea *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  __int64 *v7; // rbx
  QT::QTextLayout *v8; // r14
  __int64 v9; // rdi

  *(_QWORD *)this = &log_widget_t___vtable;
  *((_QWORD *)this + 2) = log_widget_t___vtable_at__16;
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    *((_QWORD *)this + 16) = 0;
    qfree(v3, a2);
  }
  v4 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 5) = &msg_entries_t___vtable;
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 8);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)(v4 + 48 * i);
        v8 = (QT::QTextLayout *)v7[3];
        *((_DWORD *)v7 + 10) = 0;
        if ( v8 )
        {
          QT::QTextLayout::~QTextLayout(v8);
          a2 = &byte_8;
          operator delete(v8, 8u);
        }
        v9 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v9, a2);
        }
        v4 = *((_QWORD *)this + 7);
      }
    }
    *((_QWORD *)this + 8) = 0;
    qfree(v4, a2);
  }
  QT::QAbstractScrollArea::~QAbstractScrollArea(this);
  operator delete(this, 0xA0u);
}
