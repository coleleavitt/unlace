void __fastcall sub_2733A0(_QWORD *a1)
{
  QT::QSplitter *v1; // rbp
  __int64 v3; // rax
  __int64 v4; // rdi

  v1 = (QT::QSplitter *)(a1 - 2);
  *(a1 - 2) = &diff_source_panel_t___vtable;
  *a1 = diff_source_panel_t___vtable_at__16;
  v3 = sub_277DF0();
  sub_278D20(v3, 0, 0);
  v4 = a1[7];
  if ( v4 )
  {
    a1[8] = 0;
    qfree(v4, nullptr);
  }
  QT::QSplitter::~QSplitter(v1);
  operator delete(v1, 0x60u);
}
