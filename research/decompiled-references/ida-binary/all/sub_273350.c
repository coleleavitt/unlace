void __fastcall sub_273350(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi

  *(a1 - 2) = &diff_source_panel_t___vtable;
  *a1 = diff_source_panel_t___vtable_at__16;
  v2 = sub_277DF0();
  sub_278D20(v2, 0, 0);
  v3 = a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    qfree(v3, nullptr);
  }
  QT::QSplitter::~QSplitter((QT::QSplitter *)(a1 - 2));
}
