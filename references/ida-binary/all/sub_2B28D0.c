void __fastcall graph_paint_context_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi

  *a1 = &graph_paint_context_t___vtable;
  v3 = a1[42];
  if ( v3 )
  {
    a1[43] = 0;
    qfree(v3, a2);
  }
  v4 = a1[39];
  if ( v4 )
  {
    v5 = a1[40];
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = *(_QWORD *)(v4 + v6 + 40);
        if ( v8 )
        {
          *(_QWORD *)(v4 + v6 + 48) = 0;
          qfree(v8, a2);
          v4 = a1[39];
        }
        v6 += 152;
      }
    }
    a1[40] = 0;
    qfree(v4, a2);
  }
  v9 = a1[36];
  if ( v9 )
  {
    a1[37] = 0;
    qfree(v9, a2);
  }
  *a1 = &paint_context_t___vtable;
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)(a1 + 11));
  QT::QFont::~QFont((QT::QFont *)(a1 + 9));
}
