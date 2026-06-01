void __fastcall sub_54DD10(__int64 a1, QT::QAbstractScrollArea *a2)
{
  QT::QAbstractScrollArea *v2; // r13
  void (__fastcall *v3)(QT::QAbstractScrollArea *, const char *); // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 *v8; // rbx
  QT::QTextLayout *v9; // r14
  __int64 v10; // rdi

  v2 = a2;
  v3 = *(void (__fastcall **)(QT::QAbstractScrollArea *, const char *))(*(_QWORD *)a2 + 24LL);
  if ( v3 == log_widget_t__::vfunc_3 )
  {
    v4 = *((_QWORD *)a2 + 15);
    *(_QWORD *)a2 = &log_widget_t___vtable;
    *((_QWORD *)a2 + 2) = log_widget_t___vtable_at__16;
    if ( v4 )
    {
      *((_QWORD *)a2 + 16) = 0;
      qfree(v4, (const char *)a2);
    }
    v5 = *((_QWORD *)a2 + 7);
    *((_QWORD *)a2 + 5) = &msg_entries_t___vtable;
    if ( v5 )
    {
      v6 = *((_QWORD *)a2 + 8);
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
            a2 = (QT::QAbstractScrollArea *)&byte_8;
            operator delete(v9, 8u);
          }
          v10 = *v8;
          if ( *v8 )
          {
            v8[1] = 0;
            qfree(v10, (const char *)a2);
          }
          v5 = *((_QWORD *)v2 + 7);
        }
      }
      *((_QWORD *)v2 + 8) = 0;
      qfree(v5, (const char *)a2);
    }
    QT::QAbstractScrollArea::~QAbstractScrollArea(v2);
  }
  else
  {
    ((void (__fastcall *)(QT::QAbstractScrollArea *))v3)(a2);
  }
}
