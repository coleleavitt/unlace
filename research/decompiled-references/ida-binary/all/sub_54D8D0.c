void __fastcall sub_54D8D0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 *v7; // rbx
  QT::QTextLayout *v8; // r14
  __int64 v9; // rdi

  *(a1 - 2) = &log_widget_t___vtable;
  *a1 = log_widget_t___vtable_at__16;
  v3 = a1[13];
  if ( v3 )
  {
    a1[14] = 0;
    qfree(v3, a2);
  }
  v4 = a1[5];
  a1[3] = &msg_entries_t___vtable;
  if ( v4 )
  {
    v5 = a1[6];
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
        v4 = a1[5];
      }
    }
    a1[6] = 0;
    qfree(v4, a2);
  }
  QT::QAbstractScrollArea::~QAbstractScrollArea((QT::QAbstractScrollArea *)(a1 - 2));
}
