void __fastcall sub_46B600(_QWORD *a1, const char *a2)
{
  QT::QAbstractScrollArea *v3; // r13
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 *v8; // rbx
  QT::QTextLayout *v9; // r15
  __int64 v10; // rdi

  v3 = (QT::QAbstractScrollArea *)(a1 - 2);
  *(a1 - 2) = &log_widget_t___vtable;
  *a1 = log_widget_t___vtable_at__16;
  v4 = a1[13];
  if ( v4 )
  {
    a1[14] = 0;
    qfree(v4, a2);
  }
  v5 = a1[5];
  a1[3] = &msg_entries_t___vtable;
  if ( v5 )
  {
    v6 = a1[6];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 48 * i);
        v9 = (QT::QTextLayout *)v8[3];
        *((_DWORD *)v8 + 10) = 0;
        if ( v9 )
        {
          QT::QTextLayout::~QTextLayout(v9);
          a2 = &byte_8;
          operator delete(v9, 8u);
        }
        v10 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v10, a2);
        }
        v5 = a1[5];
      }
    }
    a1[6] = 0;
    qfree(v5, a2);
  }
  QT::QAbstractScrollArea::~QAbstractScrollArea(v3);
  operator delete(v3, 0xA0u);
}
